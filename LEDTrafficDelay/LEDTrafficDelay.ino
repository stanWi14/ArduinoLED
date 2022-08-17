/*if you want to see the circuit and try this code visit the link below
https://www.tinkercad.com/things/9pUKaCbcTN6
*/
int ledR = 12;
int ledY = 10;
int ledG = 8;

//we set up the output & input from
void setup(){
  pinMode(ledG, OUTPUT); 
  pinMode(ledR, OUTPUT); 
  pinMode(ledY, OUTPUT); 
} 
void loop(){ 
  // red LED is going to be on for 1000 millisecond, afterthat it's going to turn of
  digitalWrite(ledR, HIGH);
  delay(1000);
  digitalWrite(ledR, LOW);
  // yellow LED is going to be on for 1000 millisecond, afterthat it's going to turn of  
  digitalWrite(ledY, HIGH);
  delay(1000);
  digitalWrite(ledY, LOW);
  // green LED is going to be on for 1000 millisecond, afterthat it's going to turn of
  digitalWrite(ledG, HIGH);  
  delay(1000);
  digitalWrite(ledG, LOW);
}
