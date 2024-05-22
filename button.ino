#define ACTIVATED LOW 

const int PIEZO = 2; 
const int pensioner1 =8 ;
const int pensioner2 =9 ; 
const int pensioner3 =10;
const int pensioner4 =11 ;
const int pensioner5 =12 ;

const int led5 = 3;
const int led4 = 4;
const int led3 = 5;
const int led2 = 6;
const int led1 = 7;

void setup()
{
  pinMode(PIEZO,OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
  pinMode(pensioner1,INPUT);    
  digitalWrite(pensioner1,HIGH);	
  pinMode(pensioner2,INPUT); 
  digitalWrite(pensioner2,HIGH);
  pinMode(pensioner3,INPUT);
  digitalWrite(pensioner3,HIGH);
  pinMode(pensioner4,INPUT);
  digitalWrite(pensioner4,HIGH);
  pinMode(pensioner5,INPUT);
  digitalWrite(pensioner5,HIGH);
  Serial.begin(9600);
}

void loop()
{
  while(digitalRead(pensioner1) == ACTIVATED)
  {
    Serial.println(1);
    tone(PIEZO,1000,10);					
    if(digitalRead(pensioner1) == ACTIVATED){  
    digitalWrite(led1,HIGH);
    }
    else{
    digitalWrite(led1,LOW);
    }
  }
  while(digitalRead(pensioner2) == ACTIVATED)
  {
    tone(PIEZO,1000,10);
    if(digitalRead(pensioner2) == ACTIVATED){
    digitalWrite(led2,HIGH);
    }
    else{
    digitalWrite(led2,LOW);
    }
  }
  while(digitalRead(pensioner3) == ACTIVATED)
  {
    tone(PIEZO,1000,10);
    if(digitalRead(pensioner3) == ACTIVATED){
    digitalWrite(led3,HIGH);
    }
    else{
    digitalWrite(led3,LOW);
    }
  }
  while(digitalRead(pensioner4) == ACTIVATED)
  {
    tone(PIEZO,1000,10);
    if(digitalRead(pensioner4) == ACTIVATED){ 
    digitalWrite(led4,HIGH);
    }
    else{
    digitalWrite(led4,LOW);
    }
  }
  while(digitalRead(pensioner5) == ACTIVATED)
  {
    tone(PIEZO,1000,10);
     if(digitalRead(pensioner5) == ACTIVATED){
    digitalWrite(led5,HIGH);
    }
    else{
    digitalWrite(led5,LOW);
    }
  }
  noTone(PIEZO);
}