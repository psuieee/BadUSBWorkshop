//This DigiSpark script opens up Rick Astley's - Never Gonna Give You Up and also a fake Windows update screen and then maximizes it using F11
#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(1000); //Initializes and waits to let PC catch up
}
void loop() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0); //Initializes and waits to let PC catch up
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //Win+R
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://shattereddisk.github.io/rickroll/rickroll.mp4"); //Opens rickroll
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //Win+R
  DigiKeyboard.print("http://fakeupdate.net/win10ue"); //Opens Fake Update
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F11); //Fullscreen
  for(;;){ /*empty*/ } //Stops from looping
}


