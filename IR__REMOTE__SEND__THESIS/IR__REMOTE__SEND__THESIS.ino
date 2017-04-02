/* send.ino Example sketch for IRLib2
 *  Illustrates how to send a code.
 *  Chris Young https://github.com/cyborg5/IRLib2 developed library and examples
 */
#include <IRLibSendBase.h>    
#include <IRLib_P02_Sony.h>   
#include <IRLibCombo.h>

IRsend remoteSend;
int button = 11;

void setup() {
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(button) == LOW){
    remoteSend.send(SONY,0xa7bca, 20);
    delay(100);
  }
}

