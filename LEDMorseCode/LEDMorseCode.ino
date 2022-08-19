/*if you want to see the circuit and try this code visit the link below
https://www.tinkercad.com/things/8Sgq2UjpPfI
*/

/*In this project we are going to make LED Morse code
So we are going to use 3 LED:
- White LED for the morse code
- Yellow LED for the transition between letters (sign for changging letter)
- Green LED as a sign the morse code is over 
*/

// define all the led pin
int led1 = 13;
int led2 = 12;
int led3 = 11;

/* In morse code there is 2 type of sign, short and long
we are going to make 2 function for that, and the difference
is just from the delay that happend between LED turn on and off*/
void shortnote(){
      digitalWrite(led1,HIGH);
      delay(1000);
      digitalWrite(led1,LOW);
      delay(500);
}
void longnote(){
      digitalWrite(led1,HIGH);
      delay(2000);
      digitalWrite(led1,LOW);
      delay(500);
}

// this is going to be pause sign between letter (char)
void pausenote(int n){
  int x = 0;
  while(x<n){
      digitalWrite(led2,HIGH);
      delay(200);
      digitalWrite(led2,LOW);
      delay(100);
      x++;
  }
}

// after all of the letter are spell, we are done
void done(){
   digitalWrite(led3,HIGH);
}

void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 int i;
  String word;
  word = "stanley"; // the word that going to be spelled
  int n =word.length(); // get the string length 
  for(i=0;i<n;i++){ //loop as many as the letter contain in the string
    if(word[i]=='a'){
      shortnote();
      longnote();
    }else if(word[i]=='b'){
      longnote();
      shortnote();
      shortnote();
      shortnote();
    }else if(word[i]=='c'){
      longnote();
      shortnote();
      longnote();
      shortnote();
    }else if(word[i]=='d'){
      longnote();
      shortnote();
      shortnote();
    }else if(word[i]=='e'){
      shortnote();
    }else if(word[i]=='f'){
      shortnote();
      shortnote();
      longnote();
      shortnote();
    }else if(word[i]=='g'){
      longnote();
      longnote();
      shortnote();
    }else if(word[i]=='h'){
      shortnote();
      shortnote();
      shortnote();
      shortnote();
    }else if(word[i]=='i'){
      shortnote();
      shortnote();
    }else if(word[i]=='j'){
      shortnote();
      longnote();
      longnote();
      longnote();
    }else if(word[i]=='k'){
      longnote();
      shortnote();
      longnote();
    }else if(word[i]=='l'){
      shortnote();
      longnote();
      shortnote();
      shortnote();
    }else if(word[i]=='m'){
      longnote();
      longnote();
    }else if(word[i]=='n'){
      longnote();
      shortnote();
    }else if(word[i]=='o'){
      longnote();
      longnote();
      longnote();
    }else if(word[i]=='p'){
      shortnote();
      longnote();
      longnote();
      shortnote();
    }else if(word[i]=='q'){
      longnote();
      longnote();
      shortnote();
      longnote();
    }else if(word[i]=='r'){
      shortnote();
      longnote();
      shortnote();
    }else if(word[i]=='s'){
      shortnote();
      shortnote();
      shortnote();
    }else if(word[i]=='t'){
      longnote();
    }else if(word[i]=='u'){
      shortnote();
      shortnote();
      longnote();
    }else if(word[i]=='v'){
      shortnote();
      shortnote();
      shortnote();
      longnote();
    }else if(word[i]=='w'){
      shortnote();
      longnote();
      longnote();
    }else if(word[i]=='x'){
      longnote();
      shortnote();
      shortnote();
      longnote();
    }else if(word[i]=='y'){
      longnote();
      shortnote();
      longnote();
      longnote();
    }else if(word[i]=='z'){
      shortnote();
      shortnote();
      longnote();
      longnote();
    }
    pausenote(i+1);
  }
  done();
}

void loop() {
  
}
