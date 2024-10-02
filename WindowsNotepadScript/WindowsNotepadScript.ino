// Include the DigiKeyboard library
#include "DigiKeyboard.h"

void setup() {
  // Delay to allow the computer to recognize the USB device
  delay(1000);

  // Open the Run dialog (Windows Key + R)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(1000);

  // Type "notepad" and press Enter to open Notepad
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);

  // Type text in Notepad
  DigiKeyboard.println("Hello! I now have access to your computer :)");
}

void loop() {
  // Empty loop
}
