int redpin=9;
int greenpin=10;
int bluepin=11;
const int sound=7;

void setup()
{
   pinMode(redpin,OUTPUT);
   pinMode(greenpin,OUTPUT);
   pinMode(bluepin,OUTPUT);
   pinMode(sound,INPUT);
  
   
}
void loop()
{
 
  int ss=digitalRead(sound);
  Serial.println(ss);
  if (ss==1){
   
 
  digitalWrite(redpin,HIGH);
  digitalWrite(greenpin,LOW);
  digitalWrite(bluepin,HIGH);
  }
 
 
 
  else{
  digitalWrite(redpin,HIGH);
  digitalWrite(greenpin,HIGH);
  digitalWrite(bluepin,HIGH);
   
  }
 
 
   
 
 
}
