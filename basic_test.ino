/* PIR Motion Sensor (HC-SR501) Delay Control [S010] : http://rdiot.tistory.com/80 [RDIoT Demo] */

int pirPin = A0; //PIR
int ledPin = 13; //LED 
int val;
int val2; // Counter & DelayTime
 
void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT); 
  pinMode(ledPin, OUTPUT);
}
 
void loop() {    
  val = digitalRead(pirPin); //read state of the PIR
  Serial.print("PIR Value=" + (String)val);
  Serial.print(",Delay Count=" + (String)val2);
  Serial.println(",Delay Time=" + (String)(val2*0.1) + "sec");
 
if (val == LOW) {
  digitalWrite(ledPin, LOW);  
  val2 = 0;
}
else {
  digitalWrite(ledPin, HIGH);
  val2++;
}
delay(100);
}
