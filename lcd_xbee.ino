#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
int Buzzer=8,temp[7],i;
void setup()
{
  pinMode(Buzzer,OUTPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.backlight();
}

void loop()

{
i=0;
  while(Serial.available()>0){
    temp[i] = Serial.read();
    i++;
  }
Serial.print("the temperature is : ");
Serial.write(temp[0]);
Serial.write(temp[1]);
Serial.println();
Serial.print("the humidity is : ");
Serial.write(temp[2]);
Serial.write(temp[3]);
Serial.println();
Serial.print("the smoke value is : ");
Serial.write(temp[4]);
Serial.write(temp[5]);
Serial.write(temp[6]);
Serial.println();
delay (1000);

lcd.setCursor(0,0); 
lcd.write("Temp-");
lcd.write(temp[0]);
lcd.write(temp[1]);
lcd.write(' ');
//delay(1000);
//lcd.setCursor(0,1);
lcd.write("Hum-");
lcd.write(temp[2]);
lcd.write(temp[3]);
lcd.setCursor(0,1);
lcd.write("Smoke_value-");
lcd.write(temp[4]);
lcd.write(temp[5]);
lcd.write(temp[6]);
delay(1000);

if (temp[0] == 51){
  digitalWrite(Buzzer,HIGH);
  delay(1000);
}
else {
    digitalWrite(Buzzer,LOW);

}
}
