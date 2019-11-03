void setup()
{ for(int i=13;i>=9;i--)
  pinMode(i,OUTPUT);
}

void loop()
{
 for(int j=13;j>=9;j--)
 {
   digitalWrite(j,HIGH);
   delay(1000);
   digitalWrite(j,LOW);
   delay(1000);
 }
}
