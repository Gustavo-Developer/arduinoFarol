 //NOMES
 //FAROL 1
const int red=10;
const int yellow=9;
const int green=8;

  //FAROL 2
const int red2=7;
const int yellow2=6;
const int green2=5;

  
void setup() {
  
 //SAIDAS
  pinMode (red,OUTPUT);
  pinMode (yellow,OUTPUT);
  pinMode (green,OUTPUT);

  pinMode (red2,OUTPUT);
  pinMode (yellow2,OUTPUT);
  pinMode (green2,OUTPUT);

}

void loop() {
  
 digitalWrite(red,1);
 digitalWrite(red2,1);
 delay(2000);
 digitalWrite(red,0);
 digitalWrite(green,1);
 delay(15000);
 digitalWrite(green,0);
 digitalWrite(yellow,1);
 delay(3000);
 digitalWrite(yellow,0);
 digitalWrite(red,1);
 delay(2000);
 digitalWrite(red2,0);
 digitalWrite(green2,1);
 delay(15000);
 digitalWrite(green2,0);
 digitalWrite(yellow2,1);
 delay(3000);
 digitalWrite(yellow2,0);
 digitalWrite(red,1);
 

  }
