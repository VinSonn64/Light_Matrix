int power1 = 12;
int power2 = 11;
int power3 = 10;

int grd1 = 7;
int grd2 = 6;
int grd3 = 5;

int LightPin=A0;
int LightValue=0;

int PressurePin=A1;
int PressureValue=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  
pinMode(power1,OUTPUT);
pinMode(power2,OUTPUT);
pinMode(power3,OUTPUT);

pinMode(grd1,OUTPUT);
pinMode(grd2,OUTPUT);
pinMode(grd3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
LightValue= analogRead(LightPin);
//Serial.println(LightValue);

PressureValue= analogRead(PressurePin);
Serial.println(PressureValue);

if(LightValue>500)  
{
  
digitalWrite(power1, HIGH);
digitalWrite(power2, HIGH);
digitalWrite(power3, HIGH);
digitalWrite(grd1, LOW);
digitalWrite(grd2, LOW);
digitalWrite(grd3, LOW);


}

else if(PressureValue < 900)
{
  digitalWrite(power1, HIGH);
digitalWrite(power2, LOW);
digitalWrite(power3, LOW);
digitalWrite(grd1, LOW);
digitalWrite(grd2, LOW);
digitalWrite(grd3, LOW);

if(PressureValue < 600)
{
  digitalWrite(power1, HIGH);
digitalWrite(power2, HIGH);
digitalWrite(power3, LOW);
digitalWrite(grd1, LOW);
digitalWrite(grd2, LOW);
digitalWrite(grd3, LOW);
if(PressureValue < 300)
{
  digitalWrite(power1, HIGH);
digitalWrite(power2, HIGH);
digitalWrite(power3, HIGH);
digitalWrite(grd1, LOW);
digitalWrite(grd2, LOW);
digitalWrite(grd3, LOW);
}
}
}




else
{
digitalWrite(power1, LOW);
digitalWrite(power2, LOW);
digitalWrite(power3, LOW);
digitalWrite(grd1, LOW);
digitalWrite(grd2, LOW);
digitalWrite(grd3, LOW);
}

}
