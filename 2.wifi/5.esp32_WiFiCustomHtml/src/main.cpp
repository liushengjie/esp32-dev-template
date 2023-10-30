#include <Arduino.h>
#include <WiFi.h>
#include <WiFiMulti.h>
#include "../lib/Wifi_custom/WiFiCustom.h"
#include "../include/font/ZdyLwFont_20.h"
#include "../include/img/start_gif.h"
#include "../include/img/setWiFi_img.h"
#include <TFT_eSPI.h>
#include <TJpg_Decoder.h>

TFT_eSPI tft = TFT_eSPI();
TFT_eSprite clk = TFT_eSprite(&tft);
int connectTimes = 0;
byte SETROTATION = 0;
uint16_t bgColor = 0xFFFF;

// 强制门户Web配网
bool setWiFi_Flag = false;

bool tft_output(int16_t x, int16_t y, uint16_t w, uint16_t h, uint16_t *bitmap)
{
  if (y >= tft.height())
    return 0;
  tft.pushImage(x, y, w, h, bitmap);
  // Return 1 to decode next block
  return 1;
}

void setWiFi()
{
  TJpgDec.setJpgScale(1);
  TJpgDec.setSwapBytes(true);
  TJpgDec.setCallback(tft_output);
  TJpgDec.drawJpg(0, 0, setWiFi_img, sizeof(setWiFi_img));
  initBasic();
  initSoftAP();
  initWebServer();
  initDNS();
  while (setWiFi_Flag == false)
  {
    server.handleClient();
    dnsServer.processNextRequest();
    if (WiFi.status() == WL_CONNECTED)
    {
      server.stop();
      setWiFi_Flag = true;
    }
  }
}

void displayConnectWifiFalse()
{
  TJpgDec.setJpgScale(0.5);
  TJpgDec.setSwapBytes(true);
  TJpgDec.setCallback(tft_output);
  TJpgDec.drawJpg(0, 0, wififalse, sizeof(wififalse));
  delay(5000);
}

byte loadNum = 6;
void loading(byte delayTime, byte NUM)
{
  clk.setColorDepth(8);
  clk.createSprite(100, 30);
  clk.fillSprite(0x0000);
  clk.loadFont(ZdyLwFont_20); // 加载font/ZdyLwFont_20字体
  clk.drawRoundRect(0, 0, 100, 13, 8, 0xFFFF);
  clk.fillRoundRect(3, 3, loadNum, 7, 5, 0xFFFF);
  clk.setTextDatum(CC_DATUM);
  clk.setTextColor(TFT_WHITE, 0x0000);
  clk.drawString("正在连接 " + PrefSSID + " ...", 20, 40, 2);
  clk.pushSprite(20, 50);
  clk.deleteSprite();
  loadNum += NUM;
  if (loadNum >= 194)
  {
    loadNum = 194;
  }
  delay(delayTime);
  clk.unloadFont(); // 释放加载字体资源
}

void setup()
{
  Serial.begin(115200);
  delay(100);

  tft.init();
  tft.setRotation(SETROTATION);

  tft.fillScreen(0x0000);
  tft.setTextColor(TFT_BLACK, bgColor);

  preferences.begin("wifi", false);
  PrefSSID = preferences.getString("ssid", "none");
  PrefPassword = preferences.getString("password", "none");
  cityCode = preferences.getString("citycode", "none");
  preferences.end();
  if (PrefSSID == "none")
  {
    setWiFi();
  }

  Serial.println("正在连接" + PrefSSID + " ...");
  WiFi.begin(PrefSSID.c_str(), PrefPassword.c_str());
  while (WiFi.status() != WL_CONNECTED)
  {
    for (byte n = 0; n < 10; n++)
    {
      loading(100, 1);
      connectTimes++;
      if (connectTimes >= 190)
      { // 进度条即将结束时还未连接成功，则提示wifi连接失败，自动进入配网模式
        connectTimes = 0;
        displayConnectWifiFalse();
        setWiFi();
      }
    }
  }
  while (loadNum < 194 & connectTimes <= 189)
  { // 让动画走完
    loading(0, 5);
    connectTimes = 0;
  }

  Serial.print("本地IP： ");
  Serial.println(WiFi.localIP());
}

void loop()
{
}