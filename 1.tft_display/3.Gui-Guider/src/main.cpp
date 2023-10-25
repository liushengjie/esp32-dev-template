/*
屏幕配置文件路径lib\TFT_eSPI-2.5.0\User_Setups\Setup18_ST7789.h
*/

#include <Arduino.h>
#include <lvgl.h>

#include <TFT_eSPI.h>

#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"

// 定义分辨率
static const uint16_t screenWidth = 128;
static const uint16_t screenHeight = 160;
// 定义缓冲
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * 10];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

#if LV_USE_LOG != 0
/* Serial debugging  串口调试用*/
void my_print(const char *buf)
{
  Serial.printf(buf);
  Serial.flush();
}
#endif

/* Display flushing 显示填充 与LCD驱动关联*/
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.pushColors((uint16_t *)&color_p->full, w * h, true);
  tft.endWrite();

  lv_disp_flush_ready(disp);
}

void tft_init()
{
  tft.begin();        /* TFT init TFT初始化*/
  tft.setRotation(0); /* Landscape orientation, flipped 设置方向*/
}

void lvgl_setup()
{
  lv_init();

#if LV_USE_LOG != 0
  lv_log_register_print_cb(my_print); /* register print function for debugging 注册打印功能以进行调试*/
#endif

  lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * 10);

  /*Initialize the display*/
  /*初始化显示*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  /*Change the following line to your display resolution*/
  /*将以下行更改为您的显示分辨率*/
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);
}

lv_ui guider_ui; // 结构体包含所有屏幕与部件，必不可少，且不能放到setup里 。使用该指针可以找到程序里任何对象

void setup()
{
  Serial.begin(115200); /* prepare for possible serial debug 为可能的串行调试做准备*/
  tft_init();
  lvgl_setup();

  /*Create a GUI-Guider app */
  setup_ui(&guider_ui);    //
  // events_init(&guider_ui); // 事件初始化
  // custom_init(&guider_ui); // 运行自定义代码，例如将实际输出跟gui显示的数值关联起来

  Serial.println("Setup done");
}

void loop()
{
  lv_timer_handler(); /* let the GUI do its work 让 GUI 完成它的工作 */
  delay(5);
}