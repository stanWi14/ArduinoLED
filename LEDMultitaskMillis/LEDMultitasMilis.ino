/*if you want to see the circuit and try this code visit the link below
https://www.tinkercad.com/things/8Sgq2UjpPfI
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
  /* so millis is a command that act as a timer 
  for how long the device has been turned on*/
  long int time = millis();
  /*here we can set the timer, 
  we use % (modulus) for decide 
  when the led is going to be turn on */
  if(time%100==0&& time>0){
    digitalWrite(ledR, HIGH);
  }
  if(time%150==0&& time>0){
    digitalWrite(ledY, HIGH);
  }
  if(time%200==0&& time>0){
    digitalWrite(ledG, HIGH);
  }

  //for turn of the led
  delay(10);
  digitalWrite(ledG, LOW);
  digitalWrite(ledY, LOW);
  digitalWrite(ledR, LOW);
}
