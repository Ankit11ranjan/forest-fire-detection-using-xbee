int Buzzer=13;
void setup()
{
  pinMode(Buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
       //if(Serial.read() == 'K'){
      //digitalWrite(Buzzer,HIGH);
      //delay(1000);
      //digitalWrite(Buzzer,LOW);

     //delay(1000);

     
     int i = Serial.read();
     Serial.println(i);
       }
    }
