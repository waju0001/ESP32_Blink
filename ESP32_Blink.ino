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
<<<<<<< HEAD
 * Modified by: Ritu 20/2/2020

 * public domain
 */

int esp32LED = 1;      
int esp32LED2 = 0;   //Blue LED on board at TX0 = Pin 1 
=======
 * Modified By: Hasan, 20/2/2020
 *
 * public domain
 */

int esp32LED0 = 0;                   //Blue LED on board at TX0 = Pin 1 
int esp32LED1 = 1;                   //Blue LED on board at TX0 = Pin 1 
>>>>>>> remotes/origin/qhm/real_smarter_branch

// the setup function runs once when you power the board or press reset  

void setup() {
<<<<<<< HEAD
  pinMode(esp32LED, OUTPUT);
  pinMode(esp32LED2, OUTPUT); 
}

void loop() {
  digitalWrite(esp32LED, HIGH);     // LED on
  delay(1000);                      // 1s wait - processor
  digitalWrite(esp32LED, LOW);      // LED off
  delay(1000);  
  digitalWrite(esp32LED, HIGH);     // LED on
  delay(1000);                      // 1s wait - processor
  digitalWrite(esp32LED, LOW);      // LED off
  delay(1000);
    digitalWrite(esp32LED, HIGH);     // LED on
  delay(5000);                      // 1s wait - processor
  digitalWrite(esp32LED, LOW);      // LED off
  delay(5000);  
  digitalWrite(esp32LED, HIGH);     // LED on
  delay(5000);                      // 1s wait - processor
  digitalWrite(esp32LED, LOW);      // LED off
  delay(5000);// 1s wait - processor
=======
  pinMode(esp32LED0, OUTPUT);        //Pin 1 Output 
  pinMode(esp32LED1, OUTPUT);        //Pin 1 Output 
}

void loop() {
  digitalWrite(esp32LED0, HIGH);     // LED on
  delay(500);                      // 1s wait - processor
  digitalWrite(esp32LED0, LOW);      // LED off
  delay(500);                      // 1s wait - processor
  digitalWrite(esp32LED1, LOW);     // LED on
  delay(500);                      // 1s wait - processor
  digitalWrite(esp32LED1, HIGH);      // LED off
  delay(500);                      // 1s wa
>>>>>>> remotes/origin/qhm/real_smarter_branch
}
