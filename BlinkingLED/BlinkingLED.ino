/*if you want to see the circuit and try this code visit the link below
https://www.tinkercad.com/things/g0ilLsCQfol
*/
int led = 13;
int i;
void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  //looping, each loop led going to blink ( on and off )
  for(i=0;i<3;i++){
   digitalWrite(led,HIGH); //LED on
   delay(1000); 
   digitalWrite(led,LOW); // LED off
   delay(1000);
  }
  //we  stop the blink for 1500 millisecond before it start blinking again
  delay(1500);
  Serial.println("done");
}
