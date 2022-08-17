/*if you want to see the circuit and try this code visit the link below
https://www.tinkercad.com/things/8ptCbmc7eO2 
*/
int btnG = 13;
int btnR = 11;
int btnY = 9;
int btnW = 7;
int ledG = 12;
int ledR = 10;
int ledY = 8;
int ledW = 6;

//we set up the output & input from
void setup(){
  pinMode(ledG, OUTPUT); 
  pinMode(btnG, INPUT); 
  pinMode(ledR, OUTPUT); 
  pinMode(btnR, INPUT); 
  pinMode(ledY, OUTPUT); 
  pinMode(btnY, INPUT); 
  pinMode(ledW, OUTPUT); 
  pinMode(btnW, INPUT); 
} 
void loop(){ 
  //if a button was press it will have HIGH as their value
    int bG = digitalRead(btnG); 
    if (bG == HIGH){
      digitalWrite(ledG, HIGH); 
    }else{
        digitalWrite(ledG, LOW); 
    }
    int bR = digitalRead(btnR); 
    if (bR == HIGH){
      digitalWrite(ledR, HIGH); 
    }else{
        digitalWrite(ledR, LOW); 
    }
    int bY = digitalRead(btnY); 
    if (bY == HIGH){
      digitalWrite(ledY, HIGH); 
    }else{
        digitalWrite(ledY, LOW); 
    }
    int bW = digitalRead(btnW); 
    if (bW == HIGH){
      digitalWrite(ledW, HIGH); 
    }else{
        digitalWrite(ledW, LOW); 
    }
}
