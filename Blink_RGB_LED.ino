/*
  Blink using RGB on Arduino MKR 1010.

  Cycles through various colors on the built in RGB LED.

  https://github.com/arduino-libraries/WiFiNINA/issues/24

*/

#include <WiFiNINA.h>
#include <utility/wifi_drv.h>

// the setup function runs once when you press reset or power the board
void setup() {
  WiFiDrv::pinMode(25, OUTPUT);  //GREEN
  WiFiDrv::pinMode(26, OUTPUT);  //RED
  WiFiDrv::pinMode(27, OUTPUT);  //BLUE
}

// the loop function runs over and over again forever
void loop() {
  WiFiDrv::digitalWrite(25, HIGH); // for full GREEN brightness
  delay(1000);
  WiFiDrv::digitalWrite(25, LOW);
  WiFiDrv::digitalWrite(26, HIGH); // for full RED brightness
  delay(1000);
  WiFiDrv::digitalWrite(26, LOW);
  WiFiDrv::digitalWrite(27, HIGH); // for full BLUE brightness
  delay(1000);
  WiFiDrv::digitalWrite(27, LOW);
  // Add colors together for more options.
  // YELLOW
  WiFiDrv::digitalWrite(25, HIGH); // for full GREEN brightness
  WiFiDrv::digitalWrite(26, HIGH); // for full RED brightness
  delay(1000);
  WiFiDrv::digitalWrite(25, LOW);
  WiFiDrv::digitalWrite(26, LOW); 
  // PURPLE
  WiFiDrv::digitalWrite(26, HIGH); // for full RED brightness
  WiFiDrv::digitalWrite(27, HIGH); // for full BLUE brightness
  delay(1000);
  WiFiDrv::digitalWrite(26, LOW); 
  WiFiDrv::digitalWrite(27, LOW);
  // TURQUOISE
  WiFiDrv::digitalWrite(27, HIGH); // for full BLUE brightness
  WiFiDrv::digitalWrite(25, HIGH); // for full GREEN brightness
  delay(1000);
  WiFiDrv::digitalWrite(27, LOW); 
  WiFiDrv::digitalWrite(25, LOW);

  // You can use analogWrite to control brightness of each pin.
  // WHITE, using all the LED's
  for(int i = 0; i < 128; i++) {
    WiFiDrv::analogWrite(25, i % 127); // for varying GREEN brightness
    WiFiDrv::analogWrite(26, i % 127); // for varying REB brightness
    WiFiDrv::analogWrite(27, i % 127); // for varying BLUE brightness
    delay(20);
  }
}
