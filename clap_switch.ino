const int led1=13;
const int led2=12;
const int led3=11;
const int led4=10;
const int led5=9;
const int led6=8;
// ledpin and soundpin are not changed throughout the process
const int soundpin=A2;
const int threshold=200; // sets threshold value for sound sensor
void setup() {
Serial.begin(9600);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(soundpin, INPUT);
}
void loop() {
int soundsens=analogRead(soundpin); 
if (soundsens>threshold) {
digitalWrite(led1,HIGH); //turns led on
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
delay(1000);
}
else{
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);

}
}
