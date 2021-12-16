//Code by Buffer Circuitz//
//Code to Activate the UVC Circuit Pannel//

//Components//
//TTP223B IC: It is based digital capacitive sensors are very affordable and//
//gives good response when we touch it, this sensor breakout can// 
//be easily interfaced with any kind of microcontrollers,//
//and contains only three terminals for external interface.//

#define sensorPin 1 // capactitive touch sensor - Arduino Digital pin D1
 
int UVC_Circuit_Activate = 13; // Output display LED (on board LED) - Arduino Digital pin D13
 
void setup() {
  Serial.begin(9600);
  pinMode(UVC_Circuit_Activate, OUTPUT);  
  pinMode(sensorPin, INPUT);
}
 
void loop() {
  int senseValue = digitalRead(sensorPin);
  if (senseValue == HIGH){
    digitalWrite(UVC_Circuit_Activate, HIGH);
    Serial.println("TOUCHED");
    delay(300000);
  }
  else{
    digitalWrite(,LOW);
    Serial.println("not touched");
  } 
  delay(500);
  
}