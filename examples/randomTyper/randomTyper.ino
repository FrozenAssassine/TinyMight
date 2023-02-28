#include "DigiKeyboard.h"

void loop() {
  DigiKeyboard.print((char)random(67, 122));
  delay(10000);
}
