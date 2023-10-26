#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>

#include <string>
#include "../lib/ArduinoJson/ArduinoJson.h"

const char *ssid = "owlj-iPhone 13 Pro";
const char *pwd = "123456789";
#define URL "https://devapi.qweather.com/v7/weather/now?location=101210111&key=382d551435bb42f98bad763bcc00cf62&gzip=n"
DynamicJsonDocument doc(1024);
void esp32Http();
long int wendu = 0;

void setup()
{
  // 初始化串口设置
  Serial.begin(115200);

  // 设置ESP32工作模式为无线终端模式
  WiFi.mode(WIFI_STA);

  // 开始连接wifi
  WiFi.begin(ssid, pwd);

  // 等待WiFi连接,连接成功打印IP
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("WiFi Connected!");
}

void loop()
{
  // 如果ESP32连接WiFi则发送HTTP请求
  if ((WiFi.status() == WL_CONNECTED))
  {
    esp32Http();
  }

  delay(5000); // 短暂等待
}

// 发送HTTP请求并且将服务器响应通过串口输出
void esp32Http()
{

  // 创建 HTTPClient 对象
  HTTPClient httpClient;

  // 配置请求地址。此处也可以不使用端口号和PATH而单纯的
  httpClient.begin(URL);
  Serial.print("URL: ");
  Serial.println(URL);

  // 启动连接并发送HTTP请求
  int httpCode = httpClient.GET();
  Serial.print("Send GET request to URL: ");
  Serial.println(URL);

  // 如果服务器响应OK则从服务器获取响应体信息并通过串口输出
  // 如果服务器不响应OK则将服务器响应状态码通过串口输出
  if (httpCode == HTTP_CODE_OK)
  {
    int len = httpClient.getSize();
    static uint8_t buff[128] = { 0 };
    int offset=0;
    String responsePayload = httpClient.getString();
    Serial.println("Server Response Payload: ");
    Serial.println(responsePayload);

    deserializeJson(doc, responsePayload);
    const char *status = doc["now"]["text"];
    wendu = doc["now"]["temp"];
    Serial.printf("温度: %ld \r\n", wendu);
    Serial.printf("状态: ");
    Serial.println(status);
  }
  else
  {
    Serial.println("Server Respose Code：");
    Serial.println(httpCode);
  }

  // 关闭ESP32与服务器连接
  httpClient.end();
}