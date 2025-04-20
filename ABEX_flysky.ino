void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
  Serial.begin(9600);
}
void loop()
{
  long ch2= pulseIn(22,HIGH);
  long ch3 = pulseIn(24,HIGH);
  long ch5 = pulseIn(26,HIGH);
  //long d = pulseIn(10,HIGH);
  
  Serial.println(ch5);
  if(ch5<1000){  // drill
    // Serial.println(ch5);
    if(ch2>1600){
      Serial.print("ch2:");
      Serial.println(ch2);
      analogWrite(12,255);
      analogWrite(13,0);
    }
    else if(ch2<1600 && ch2>1400)
    {
      Serial.print("ch2:");
      Serial.println(ch2);
      analogWrite(12,0);
      analogWrite(13,0);
    }
    else if(ch2<1400)
    {
    Serial.print("ch2:");
    Serial.println(ch2);
    analogWrite(12,0);
    analogWrite(13,255);
    }
    if(ch3>1700)
    {
    Serial.print("ch3:");
    Serial.println(ch3);
    
    analogWrite(10,0);
    analogWrite(11,255);
    }
    else if(ch3>1500 && ch3<1700)
    {
    Serial.print("ch3:");
    Serial.println(ch3);
    analogWrite(10,0);
    analogWrite(11,0);
    }
    else if(ch3<1500)
    {
    Serial.print("ch3:");
    Serial.println(ch3);
    analogWrite(10,255);
    analogWrite(11,0);
    }
  }

  else if(ch5>1000 && ch5<1500){ //test tube

    if(ch2>1600)
    {
    Serial.print("ch2:");
    Serial.println(ch2);
    analogWrite(8,255);
    analogWrite(9,0);
    }
    else if(ch2<1600 && ch2>1400)
    {
    Serial.print("ch2:");
    Serial.println(ch2);
    analogWrite(8,0);
    analogWrite(9,0);
    }
    else if(ch2<1400)
    {
    Serial.print("ch2:");
     Serial.println(ch2);
    analogWrite(8,0);
    analogWrite(9,255);
    }
    if(ch3>1700)
    {
    Serial.print("ch3:");
    Serial.println(ch3);
    
    analogWrite(6,0);
    analogWrite(7,255);
    }
    else if(ch3>1500 && ch3<1700)
    {
    Serial.print("ch3:");
    Serial.println(ch3);
    analogWrite(6,0);
    analogWrite(7,0);
    }
    else if(ch3<1500)
    {
    Serial.print("ch3:");
    Serial.println(ch3);
    analogWrite(6,255);
    analogWrite(7,0);
    }
  }
  
  else if(ch5>1500) {

    if (ch2>1600){
    Serial.print("ch2:");
    Serial.println(ch2);
    analogWrite(4,28);
    analogWrite(5,0);
    }
    else if(ch2<1600 && ch2>1400)
    {
    Serial.print("ch2:");
    Serial.println(ch2);
    analogWrite(4,0);
    analogWrite(5,0);
    }
    else if(ch2<1400)
    {
    Serial.print("ch2:");
     Serial.println(ch2);
    analogWrite(4,0);
    analogWrite(5,28);
    }
    if(ch3>1700)
    {
    Serial.print("ch3:");
    Serial.println(ch3);
    
    analogWrite(2,0);
    analogWrite(3,45);
    }
    else if(ch3>1500 && ch3<1700)
    {
    Serial.print("ch3:");
    Serial.println(ch3);
    analogWrite(2,0);
    analogWrite(3,0);
    }
    else if(ch3<1500)
    {
    Serial.print("ch3:");
    Serial.println(ch3);
    analogWrite(2,45);
    analogWrite(3,0);
    }
  }

}