//Tarea: Sistema de alarma para puerta

int contacto = 2;           //pin del red switch
int led = 13;               //pin del led

void setup() {
pinMode(contacto, INPUT);   
pinMode(led, OUTPUT);  
pinMode(8, OUTPUT);

}

void loop() {
  digitalWrite(led,LOW);   
  noTone(8);
  
  if(digitalRead(contacto)==LOW){ // en caso de que el iman esten en contacto con el red switch se activara buzzer y un led simulando que la puerta esta abierta
 
          tone(8, 523, 200);      // se indica el pin en el cual se encuentra el buzzer, la frecuencia y el tiempo que se desea dure el sonido
          delay(100);             
          tone(8, 622, 200);      
          delay(100);
          digitalWrite(led,HIGH); //enciende 
          delay(100);
          digitalWrite(led,LOW);  //y apaga el led para que parpadee
          delay(100);

     
  }else{                         //en caso de que no se acerque el iman no sonara el buzzer ni encendera el led 
          noTone(8);             //apagar el buzzer
          digitalWrite(led,LOW); //apagar el led
  }

}
