/*
Electronics Studio
@file ESP32_inbilt_RTC.ino
@date  21-01-2025
@url https:https: https://github.com/electronicsstudio
@url YouTube: https://www.youtube.com/@ElectronicsStudio-v7o/featured
*/

#include <ESP32Time.h>

ESP32Time rtc(0); // No time zone offset

void setup() {
  Serial.begin(115200);
  rtc.setTime(0, 10, 2, 20, 1, 2025); // 20th Jan 2025, 
 //(Second, minute, Hour, date, mont, year)
}

void loop() {
  Serial.println(rtc.getTime("%A, %B %d %Y %H:%M:%S"));
  delay(1000);
}
