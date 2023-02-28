#include "DigiKeyboard.h"

void setup()
{
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    delay(300);
    DigiKeyboard.println("rundll32.exe powrprof.dll,SetSuspendState");
}

void loop() {}
