#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>

#include <string>

const char *ssid = "owlj-iPhone 13 Pro";
const char *pwd = "123456789";

void setup()
{
  Serial.begin(115200);

  // connect to WiFi
  Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, pwd);
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println("Connected!");

  // local ip
  Serial.println(WiFi.localIP().toString());

  // HTTPClient init
  HTTPClient http;
  String url = "http://api.bilibili.com/x/relation/stat?vmid=314597633";
  http.begin(url);

  // start get
  int http_code = http.GET();
  Serial.printf("http code is %d\n", http_code);

  // handle http code
  if (http_code != HTTP_CODE_OK)
  {
    // get fail.
    Serial.printf("GET fail, http code is %s\n", http.errorToString(http_code).c_str());
    return;
  }

  // http response
  String response = http.getString();
  Serial.printf("response:[%s]\n", response.c_str());

  // extract follower
  int pos = response.indexOf("follower");
  String follower_str = response.substring(pos + 10, response.length() - 2);
  int follower = atoi(follower_str.c_str());
  Serial.printf("your follower:%d\n", follower);

  // close http
  http.end();
}

void loop()
{
  delay(1000);
}