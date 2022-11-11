#include <LiquidCrystal.h>

//LiquidCrystal lcd(RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(4, 5, 6, 7, 8, 9);

#define trigPinA 13
#define echoPinA 12
#define ledVermelhoA 11
#define ledVerdeA 10

#define trigPinB 3
#define echoPinB 2
#define ledVermelhoB 15
#define ledVerdeB 14

int vagaA;
int vagaB;
int vagasLivres;
int vagasOcupadas;


void setup() {
  Serial.begin (9600);

  //vaga A
  pinMode(trigPinA, OUTPUT);
  pinMode(echoPinA, INPUT);
  pinMode(ledVermelhoA, OUTPUT);
  pinMode(ledVerdeA, OUTPUT);
  
  //vaga B
  pinMode(trigPinB, OUTPUT);
  pinMode(echoPinB, INPUT);
  pinMode(ledVermelhoB, OUTPUT);
  pinMode(ledVerdeB, OUTPUT);
  
  //estacionamento
  vagasLivres=2;
  
  //display lcd
  //lcd.begin(colunas, Linhas)
  lcd.begin(16, 2);
  lcd.print("Benvindo!!!");
  
  //lcd.setCursor(Coluna, Linha)
  lcd.setCursor(0,1);
  lcd.print("iniciando...");
  
  delay(2000);
  
  //limpa o display
  lcd.clear();
  
  delay(2000);
  
}

void loop() {
  
  
  //vaga A
  long durationA, distanceA;
  digitalWrite(trigPinA, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPinA, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinA, LOW);
  durationA = pulseIn(echoPinA, HIGH);
  distanceA = (durationA/2) / 29.1;
  
  //verificar carro estacionado na vaga A
  if (distanceA < 200) {  // This is where the LED On/Off happens
    digitalWrite(ledVermelhoA,HIGH); // When the Red condition is met, the Green LED should turn off
  	digitalWrite(ledVerdeA,LOW);
    if(vagaA != 1){
      vagasLivres--;
      vagasOcupadas++;
    }
    vagaA=1;
  }
  else {
    digitalWrite(ledVermelhoA,LOW);
    digitalWrite(ledVerdeA,HIGH);
    if(vagaA != 0){
      vagasLivres++;
      vagasOcupadas--;
    }
    vagaA=0;
  }
  
  if (distanceA >= 201 || distanceA <= 0){
    Serial.println("Sensor vaga A acima do nivel de 2 metros");
  }
  else {
    Serial.println(distanceA + " cm");
  }
  delay(500);
  Serial.println("vagaA " + String(vagaA) +"\n");
   if(vagaA==1){
   Serial.println("Vaga A OCUPADA");
     
 	}else{
  	 Serial.println("Vaga A VAZIA");
   }
  
  
  //vaga B
  long durationB, distanceB;
  digitalWrite(trigPinB, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPinB, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinB, LOW);
  durationB = pulseIn(echoPinB, HIGH);
  distanceB = (durationB/2) / 29.1;
  
  //verificar carro estacionado na vaga B
  if (distanceB < 200) {  // This is where the LED On/Off happens
    digitalWrite(ledVermelhoB,HIGH); // When the Red condition is met, the Green LED should turn off
  	digitalWrite(ledVerdeB,LOW);
    if(vagaB != 1){
      vagasLivres--;
      vagasOcupadas++;
    }
    vagaB=1;
  }
  else {
    digitalWrite(ledVermelhoB,LOW);
    digitalWrite(ledVerdeB,HIGH);
    if(vagaB != 0){
      vagasLivres++;
      vagasOcupadas--;
    }
    vagaB=0;
  }
  
  if (distanceB >= 201 || distanceB <= 0){
    Serial.println("Sensor vaga B acima do nivel de 2 metros");
  }
  else {
    Serial.println(distanceB + " cm");
  }
  delay(500);
  Serial.println("vagaB " + String(vagaB) +"\n");
   if(vagaB==1){
   Serial.println("Vaga B OCUPADA");
     
 	}else{
  	 Serial.println("Vaga B VAZIA");
   }
  
  //estacionamento
  Serial.println("vagas ocupadas: " + String(vagasOcupadas));
  Serial.println("vagasLivres: " + String(vagasLivres));
  
  //display lcd
  delay(200);
  lcd.setCursor(1,0);
  lcd.print("vagas livres " + String(vagasLivres));
  lcd.setCursor(0,1);
  lcd.print("vagas ocupadas " + String(vagasOcupadas));

}