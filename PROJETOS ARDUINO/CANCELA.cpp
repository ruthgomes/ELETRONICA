//https://www.tinkercad.com/things/3Touo1u2Hdz-cancela
//link para a visualização do projeto montado.


#include <Servo.h> // Inclui a biblioteca Servo para controle do motor servo
#include <Wire.h> // Inclui a biblioteca Wire para comunicação I2C
#include <Adafruit_LiquidCrystal.h> // Inclui a biblioteca Adafruit_LiquidCrystal para controle do LCD

// Define pinos para o sensor ultrassônico
const int trigPin = 13; // Pino de trigger do sensor ultrassônico
const int echoPin = 12; // Pino de echo do sensor ultrassônico

// Define pinos para o botão, LEDs e motor
#define BOTAO 2 // Pino para o botão
#define LED_VERMELHO 7 // Pino para o LED vermelho
#define LED_VERDE 4 // Pino para o LED verde
#define MOTOR 9 // Pino para o motor servo

// Cria um objeto Servo
Servo MOTOZINHO; // Objeto Servo chamado MOTOZINHO
// Cria um objeto LCD
Adafruit_LiquidCrystal lcd_1(0); // Objeto LCD chamado lcd_1, usando endereço I2C 0

// Variáveis para controlar o estado do sinal e debounce do botão
bool sinalAberto = false; // Variável para controlar se o sinal está aberto ou fechado
unsigned long lastDebounceTime = 0; // Armazena o último tempo de debounce
unsigned long debounceDelay = 50; // Define o atraso de debounce em milissegundos
bool lastSinalAberto = false; // Variável para armazenar o estado anterior do sinal

void setup() {
  // Anexa o motor ao pino definido
  MOTOZINHO.attach(MOTOR); // Anexa o objeto Servo ao pino MOTOR

  // Configura os modos dos pinos
  pinMode(trigPin, OUTPUT); // Configura o pino trigPin como saída
  pinMode(echoPin, INPUT); // Configura o pino echoPin como entrada
  pinMode(LED_VERMELHO, OUTPUT); // Configura o pino LED_VERMELHO como saída
  pinMode(LED_VERDE, OUTPUT); // Configura o pino LED_VERDE como saída
  pinMode(BOTAO, INPUT_PULLUP); // Configura o pino BOTAO como entrada com pull-up interno

  // Inicializa o LCD
  lcd_1.begin(16, 2); // Inicializa o LCD com 16 colunas e 2 linhas
  lcd_1.print("  SINAL FECHADO"); // Mostra mensagem inicial no LCD

  // Configura o estado inicial dos LEDs e da cancela
  digitalWrite(LED_VERMELHO, HIGH); // Liga o LED vermelho
  digitalWrite(LED_VERDE, LOW); // Desliga o LED verde
  MOTOZINHO.write(0); // Posiciona o servo motor para fechar a cancela
}

// Função para ler a distância do sensor ultrassônico
long readUltrasonicDistance(int triggerPin, int echoPin) {
  digitalWrite(triggerPin, LOW); // Define o pino trigger como LOW
  delayMicroseconds(2); // Espera 2 microssegundos
  digitalWrite(triggerPin, HIGH); // Define o pino trigger como HIGH
  delayMicroseconds(10); // Espera 10 microssegundos
  digitalWrite(triggerPin, LOW); // Define o pino trigger como LOW novamente
  // Retorna a distância em centímetros
  return pulseIn(echoPin, HIGH) / 58.2; // Calcula a distância com base no tempo do pulso
}

void loop() {
  // Lê o estado do botão
  int botaoState = digitalRead(BOTAO); // Lê o estado do botão

  // Verifica se o botão foi pressionado e controla o debounce
  if (botaoState == LOW && (millis() - lastDebounceTime) > debounceDelay) {
    lastDebounceTime = millis(); // Atualiza o tempo do debounce

    // Pisca o LED vermelho por 1 segundo
    for (int i = 0; i < 10; i++) {
      digitalWrite(LED_VERMELHO, LOW); // Desliga o LED vermelho
      delay(500); // Espera 500 milissegundos
      digitalWrite(LED_VERMELHO, HIGH); // Liga o LED vermelho
      delay(500); // Espera 500 milissegundos
    }
    
    // Alterna o estado do sinal
    sinalAberto = !sinalAberto; // Inverte o estado do sinal
  }

  // Verifica se o estado do sinal mudou
  if (sinalAberto != lastSinalAberto) {
    lastSinalAberto = sinalAberto; // Atualiza o estado anterior do sinal
    if (sinalAberto) {
      // Abre o sinal
      digitalWrite(LED_VERMELHO, LOW); // Desliga o LED vermelho
      digitalWrite(LED_VERDE, HIGH); // Liga o LED verde
      lcd_1.clear(); // Limpa o LCD
      lcd_1.setCursor(0, 0); // Posiciona o cursor na linha 0, coluna 0
      lcd_1.print("SINAL ABERTO"); // Mostra a mensagem "SINAL ABERTO"

      MOTOZINHO.write(90); // Posiciona o servo motor para abrir a cancela

      // Contagem regressiva de 9 a 0
      for (int i = 9; i >= 0; i--) {
        lcd_1.setCursor(0, 1); // Posiciona o cursor na linha 1
        lcd_1.print("Contagem: "); // Mostra a palavra "Contagem: "
        lcd_1.print(i); // Mostra o número da contagem regressiva
        lcd_1.print(" "); // Adiciona espaço para apagar dígitos adicionais

        // Pisca o LED verde durante a contagem
        digitalWrite(LED_VERDE, LOW); // Desliga o LED verde
        delay(500); // Espera 500 milissegundos
        digitalWrite(LED_VERDE, HIGH); // Liga o LED verde
        delay(500); // Espera 500 milissegundos
      }

      // Lê a distância do sensor ultrassônico
      long distance = readUltrasonicDistance(trigPin, echoPin); // Lê a distância
      // Aguarda até que a distância seja maior ou igual a 80 cm se for menor que 10 cm
      if (distance < 10) {
        while (distance < 80) {
          distance = readUltrasonicDistance(trigPin, echoPin); // Continua lendo a distância até que seja maior ou igual a 80 cm
        }
      }
      
      // Fecha o sinal
      digitalWrite(LED_VERDE, LOW); // Desliga o LED verde
      digitalWrite(LED_VERMELHO, HIGH); // Liga o LED vermelho
      lcd_1.clear(); // Limpa o LCD
      lcd_1.setCursor(0, 0); // Posiciona o cursor na linha 0, coluna 0
      lcd_1.print("SINAL FECHADO"); // Mostra a mensagem "SINAL FECHADO"
      MOTOZINHO.write(0); // Posiciona o servo motor para fechar a cancela
      sinalAberto = false; // Atualiza a variável sinalAberto para false
    } else {
      // Fecha o sinal
      digitalWrite(LED_VERMELHO, HIGH); // Liga o LED vermelho
      digitalWrite(LED_VERDE, LOW); // Desliga o LED verde
      lcd_1.clear(); // Limpa o LCD
      lcd_1.setCursor(0, 0); // Posiciona o cursor na linha 0, coluna 0
      lcd_1.print("SINAL FECHADO"); // Mostra a mensagem "SINAL FECHADO"
      MOTOZINHO.write(0); // Posiciona o servo motor para fechar a cancela
    }
  }
}
