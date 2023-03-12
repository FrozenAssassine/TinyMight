#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();
}

void loop()
  {
      DigiMouse.setButtons(MOUSEBTN_LEFT_MASK); 
      DigiMouse.delay(3);
      DigiMouse.setButtons(0);
      DigiMouse.delay(2);
  }
