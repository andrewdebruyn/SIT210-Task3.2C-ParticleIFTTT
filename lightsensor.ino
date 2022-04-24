
int led1 = A5; 

int led2 = D7; 

int photoresistor = A0;

int analogValue;

Particle.variable("Light", analogValue);


void setup() 
{

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  

}


void loop() {
    
  analogValue = analogRead(photoresistor);
  
  if (analogValue<100)
  {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      Particle.publish("Light", "Dark");
      delay(5000);
      
  }
  else
  {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      delay(5000);
  }

  // And repeat!
}

