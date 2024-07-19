//https://www.tinkercad.com/things/lEHf7rldJv2-semaforo
//link para a visualização do projeto montado.

#include <Wire.h>

#define VM_CAR 8
#define AM_CAR 7
#define VD_CAR 6
#define VM_PED 5
#define VD_PED 4
#define BUZZER 9
#define BOTAO 2

bool estadoAnterior = HIGH;
bool estadoBotao = HIGH;

void setup()
{

  
  pinMode(VM_CAR, OUTPUT);
  pinMode(AM_CAR, OUTPUT);
  pinMode(VD_CAR, OUTPUT);
  pinMode(VM_PED, OUTPUT);
  pinMode(VD_PED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP); // Define o botão como entrada com pull-up
  
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop()
{
  estadoBotao = digitalRead(BOTAO);
  digitalWrite(VD_CAR, HIGH);
  digitalWrite(VM_PED, HIGH);
   
  if (estadoBotao == LOW && estadoAnterior == HIGH) {
    ledPisca(VD_CAR, 5);
    ligaLed(AM_CAR, 2000);
    digitalWrite(VM_CAR, HIGH);
    pedestre();
    digitalWrite(VM_CAR, LOW);
    estadoAnterior = estadoBotao;
  }
  delay(10);
}

void ligaLed(int led, int tempo) {
  digitalWrite(led, HIGH);
  delay(tempo);
  digitalWrite(led, LOW);
}

void ledPisca(int led, int vezes) {
  for (int i = 0; i < vezes; i++) {
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }
}
void pedestre() {
  for (int y = 0; y < 5; y++) {
    digitalWrite(VM_PED, LOW);
    digitalWrite(VD_PED, HIGH);
    tone(BUZZER, 400, 500);
    delay(1000);
  }
  

if (digitalRead(VD_PED) == HIGH)
{
   
}
  
  

  digitalWrite(VD_PED, LOW);
  for (int x = 0; x < 5; x++) { 
    tone(BUZZER, 300, 250);
    ledPisca(VM_PED, 1);
  }
  noTone(BUZZER);
}
