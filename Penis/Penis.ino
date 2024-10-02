
#include <DigiMouse.h>

void setup() {
  // Give the system time to settle
  DigiMouse.delay(2000);

  // Start drawing the smiley face
  DigiMouse.begin();
  DigiMouse.move(300, 300, 2, 1<<0); // Move to the center of the canvas
  //DigiMouse.click(MOUSE_LEFT); // Click to start drawing

  // Draw face
  drawCircle(50); // Face

  // Draw left eye
  DigiMouse.move(270, 280, 2, 1<<0); // Adjust based on your screen
  //DigiMouse.click(MOUSE_LEFT);
  drawCircle(5); // Left eye

  // Draw right eye
  DigiMouse.move(330, 280, 1<<0); // Adjust based on your screen
  //DigiMouse.click(MOUSE_LEFT);
  drawCircle(5); // Right eye

  // Draw smile
  DigiMouse.move(300, 320, 2, 1<<0); // Move to smile position
 // DigiMouse.click(MOUSE_LEFT);
  drawSmile();

}

void drawCircle(int radius) {
  for (int i = 0; i < 360; i++) {
    int x = cos(radians(i)) * radius;
    int y = sin(radians(i)) * radius;
    DigiMouse.move(x, y, 0, 1<<0);
    // Delay for smoother drawing
  }
 //DigiMouse.click(MOUSE_LEFT); // Click to complete the circle
}

void drawSmile() {
  for (int i = 0; i <= 180; i++) {
    int x = cos(radians(i)) * 20; // Adjust for smile width
    int y = sin(radians(i)) * 10;  // Adjust for smile height
    DigiMouse.move(x, y, 2, 1<<0);
    // Delay for smoother drawing
  }
 // DigiMouse.click(MOUSE_LEFT); // Click to complete the smile
}

void loop() {
  // Empty loop
}

