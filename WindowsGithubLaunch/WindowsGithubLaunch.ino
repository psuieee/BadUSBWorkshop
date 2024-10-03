#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("https://github.com/psuieee/BadUSBWorkshop/");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

}
void loop() {
  
}
 