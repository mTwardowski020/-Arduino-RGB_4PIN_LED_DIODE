/*
 * Turns on LED with random colour and changes it value randomly with specific time interval.
 * Needed components: 4 Pin LED with common cathode, 2x 100Ohm resistor (G,B), 1x 150Ohm Resistor (R)
 * 
 * 
 * Author: Marek Twardowski / mTwardowski020
 * 
 * 
 */

byte LED_R = 8;  
byte LED_G = 9;  
byte LED_B = 10;  
unsigned char r = 0;
unsigned char g = 0;
unsigned char b = 0;

unsigned long ms_from_start = 0;
unsigned long ms_previous = 0; 
unsigned long ms_interval = 1000; //interval between colour changes



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  ms_from_start = millis();

  if (ms_from_start - ms_previous >= ms_interval){
  r = random(0, 255);
  g = random(0, 255);
  b = random(0, 255);

  analogWrite(LED_R, r);
  analogWrite(LED_G, g);
  analogWrite(LED_B, b);  
  ms_previous = ms_from_start;
  }
  
  
  
}
