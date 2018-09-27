
int contacto = 2;
int led = 13;

void setup() {
pinMode(contacto, INPUT);
pinMode(led, OUTPUT);  
pinMode(8, OUTPUT);

}

void loop() {
  digitalWrite(led,LOW);
  noTone(8);
  if(digitalRead(contacto)==LOW){
 
          tone(8, 523, 200);
          delay(100);
          tone(8, 622, 200);
          delay(100);
          digitalWrite(led,HIGH);
          delay(100);
          digitalWrite(led,LOW);
          delay(100);

     
  }else{
          noTone(8);
          digitalWrite(led,LOW);
  }

}
