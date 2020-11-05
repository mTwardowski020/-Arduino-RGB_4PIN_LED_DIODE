/*
 * Turns on LED with random colour and change its value randomly.
 * 
 * Author: Marek Twardowski / mTwardowski020
 * 
 * 
 */

int LED_R = 8;  
int LED_G = 9;  
int LED_B = 10;  
unsigned char r = 0;
unsigned char g = 0;
unsigned char b = 0;



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  r = random(0, 255);
  g = random(0, 255);
  b = random(0, 255);

  analogWrite(LED_R, r);
  analogWrite(LED_G, g);
  analogWrite(LED_B, b);  

  delay(1000);
  
  
}
