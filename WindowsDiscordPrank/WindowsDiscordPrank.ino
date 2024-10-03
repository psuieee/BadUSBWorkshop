#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("discord");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  DigiKeyboard.sendKeyStroke(KEY_K, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("IEEE general");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Wow this Bad USB workshop is so much fun!");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop() {
  
}
 