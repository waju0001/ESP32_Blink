/* Description:
 * Modified: http://www.arduino.cc/en/Tutorial/Blink example 
 * 
 * ESP32  www.AZ-Delivery.de  flashes at a frequency of 0.5 Hz
 * 
 * T=2000ms=0.5 Hz  T=1/f
 * 
 * ms       1000  1000
 * 3.3V    |      _____       _____
 * 0V      |_____|     |_____|     |_ t
 * 
 * Name: Juergen Walter
 * Date: 200104

 * public domain
 */

int esp32LED = 1;                   //Blue LED on board at TX0 = Pin 1 

// the setup function runs once when you power the board or press reset  

void setup() {
  pinMode(esp32LED, OUTPUT);        //Pin 1 Output 
}

void loop() {
  digitalWrite(esp32LED, HIGH);     // LED on
  delay(1000);                      // 1s wait - processor
  digitalWrite(esp32LED, LOW);      // LED off
  delay(1000);                      // 1s wait - processor
}
