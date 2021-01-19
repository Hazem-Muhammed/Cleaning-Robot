 /*
* Ultrasonic Sensor HC-SR04 and Arduino Tutorial
*
* by Dejan Nedelkovski,
* www.HowToMechatronics.com
*
*/
// defines pins numbers
int frequency = 0;
float voltage = 0.0;

const int trigPin = 4;
const float volt = A6;
const int rev_left = 2;
const int fwd_left = 3;
const int en_left = 9;
const int en_right = 6;
const int en_clean = 13;
const int rev_right =  8;
const int fwd_right = 7;
const int rev_clean = 11;
const int fwd_clean = 12;
const int LED = 18 ;//a7;
const int s0 = 14 ;//a0;
const int s1 = 15;//a1
const int s2 = 16 ;//a2
const int s3 =17;//a3
const int s_out = 19;
// defines variables
//long duration;
//int distance;
void setup() {
pinMode(trigPin, INPUT); // Sets the trigPin as an Output

//sets pins of the 3 motors
pinMode(rev_left, OUTPUT);
pinMode(fwd_left, OUTPUT);
pinMode(en_left, OUTPUT);
pinMode(rev_right, OUTPUT);
pinMode(fwd_right, OUTPUT);
pinMode(en_right, OUTPUT);
pinMode(rev_clean, OUTPUT);
pinMode(en_clean, OUTPUT);
pinMode(fwd_clean, OUTPUT);
pinMode(volt, INPUT);
//sets pins of color sensordistan
pinMode(s0, OUTPUT);
pinMode(s1, OUTPUT);
pinMode(s2, OUTPUT);
pinMode(s3, OUTPUT);
pinMode(s_out, INPUT);
//setting fequency scaling
digitalWrite(s0,HIGH);
digitalWrite(s1,LOW);
Serial.begin(9600); // Starts the serial communication
}


void loop() {
Serial.println(analogRead(volt));
//Serial.println("            pp               ");
delay(1000);

voltage= map(analogRead(volt),0,1023,0,5);
Serial.println(voltage);


if(3*voltage < 9){
  
  digitalWrite(LED,1);
  search_Base();
}else{
  digitalWrite(LED,0);
}

digitalWrite(s2,LOW);
digitalWrite(s3,LOW);
// Reading the output frequency
frequency = pulseIn(s_out, LOW);
//Remaping the value of the frequency to the RGB Model of 0 to 255
//frequencyp = map(frequency*-1, 200,1200,255,0);
// Printing the value on the serial monitor
//Serial.print("R= ");//printing name
//Serial.print(frequency);
//Serial.print("Red= ");//printing name
//Serial.print(frequencyp);//printing RED color frequency
//Serial.print("  ");
brush();

if(digitalRead(trigPin) == 1)
{
  //Move Forward
  mForward();
  
}
else {
  //Stop
  Stop();
  delay(100);
  
  //Move Backward
  mBackward();
  delay(1000);
  
  //Stop
  Stop();
  delay(100);
  
  //Rotate
  Rotate();
  delay(700);
}

}
void search_Base(){
  digitalWrite(s2,LOW);
  digitalWrite(s3,LOW);
  while (pulseIn(s_out, LOW)< 300 || pulseIn(s_out, LOW)>700){
      //Reset the color
      digitalWrite(s2,LOW);
      digitalWrite(s3,LOW);
      //Rotate
      Rotate();
      delay(100);
  }
    //Move Forward
    mForward();
    while(digitalRead(trigPin) == 0)
{
  
  Stop();
  delay(5000);
  if(3*voltage > 9){
  digitalWrite(LED,0);
  
}
}

}
void mForward(){
  analogWrite(en_left,100);
  digitalWrite(fwd_left,HIGH);
  digitalWrite(rev_left,LOW);
  analogWrite(en_right,100);
  digitalWrite(fwd_right,HIGH);
  digitalWrite(rev_right,LOW);
}
void mBackward(){
  analogWrite(en_left,100);
  digitalWrite(fwd_left,LOW);
  digitalWrite(rev_left,HIGH);
  analogWrite(en_right,100);
  digitalWrite(fwd_right,LOW);
  digitalWrite(rev_right,HIGH);
}
void Stop(){
  digitalWrite(fwd_left,LOW);
  digitalWrite(rev_left,LOW);
  digitalWrite(fwd_right,LOW);
  digitalWrite(rev_right,LOW);
 
}
void Rotate(){
 analogWrite(en_left,75);
  digitalWrite(fwd_left,HIGH);
  digitalWrite(rev_left,LOW);
  analogWrite(en_right,75);
  digitalWrite(fwd_right,LOW);
  digitalWrite(rev_right,LOW);
}
void brush(){
  if (frequency < 355){
  digitalWrite(fwd_clean,HIGH);
  digitalWrite(rev_clean,LOW);
  analogWrite(en_clean,200);
  
}

else {
  digitalWrite(fwd_clean,LOW);
  digitalWrite(rev_clean,LOW);
  analogWrite(en_clean,0);
}

}
