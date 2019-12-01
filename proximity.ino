int LED=8;
int sensorPin=7;
int LED2=9;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(sensorPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(sensorPin);
  if (value == 1)
  { 
    digitalWrite(LED,LOW);
    digitalWrite(LED2,LOW);
    
    
  }
  else
  {
    
    digitalWrite(LED,LOW);
    digitalWrite(LED2,HIGH);
    delay(200);
    digitalWrite(LED,HIGH);
    digitalWrite(LED2,LOW);
  }
  delay(200); 
  

}
