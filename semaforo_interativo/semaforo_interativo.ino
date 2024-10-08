//Semáforo interativo 

//Semáforo dos carros
int carRed = 12;
int carYellow = 11;
int carGreen = 10;

//Semáforo dos pedestres
int pedRed = 9;
int pedGreen = 8;

//Pino do botão
int button = 2;

//Relações de tempo
int crossTime = 5000;
unsigned long changeTime;

void setup()
{ 
 pinMode(carRed, OUTPUT);
 pinMode(carYellow, OUTPUT);
 pinMode(carGreen, OUTPUT);
 pinMode(pedRed, OUTPUT);
 pinMode(pedGreen, OUTPUT);
 pinMode(button, INPUT);
 //Configuração inicial do semáforo
 digitalWrite(carGreen, HIGH);
 digitalWrite(pedRed, HIGH);
 changeTime = -5000;
}

void loop() 
{
  int state = digitalRead(button);
  if (state == HIGH && (millis() - changeTime) > 5000) 
  {
   changeLights();
  }
}

void changeLights()
{
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow,HIGH);
  delay(2000);
  
  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, HIGH);
  delay(1000);
  
  digitalWrite(pedRed, LOW);
  digitalWrite(pedGreen, HIGH);
  delay(crossTime);
  
  for (int x=0; x<10; x++)
  {
    digitalWrite(pedGreen, HIGH);
    delay(250);
    digitalWrite(pedGreen, LOW);
    delay(250);
  }
  
  digitalWrite(pedRed, HIGH);
  delay(500);
  
  digitalWrite(carYellow, HIGH);
  digitalWrite(carRed, LOW);
  delay(1000);
  digitalWrite(carGreen, HIGH);
  digitalWrite(carYellow, LOW);
  
  changeTime = millis();
}
