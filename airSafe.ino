// Definir os pinos
const int ledPin = 13;      // Pino onde o LED está conectado
const int buttonPins[] = {7,6,5,4};  // Pinos dos botões
const int numButtons = 4;  // Número de botões

void setup() {
  // Configurar o pino do LED como saída
  pinMode(ledPin, OUTPUT);
  
  // Configurar os pinos dos botões como entrada
  for (int i = 0; i < numButtons; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);  // Ativar resistor interno de pull-up
  }
}

void loop() {
  // Variável para verificar se algum botão foi pressionado
  bool buttonPressed = false;

  // Verificar o estado de cada botão
  for (int i = 0; i < numButtons; i++) {
    if (digitalRead(buttonPins[i]) == LOW) {  // Botão pressionado
      buttonPressed = true;
      break;
    }
  }

  // Acender o LED se algum botão foi pressionado
  if (buttonPressed) {
    digitalWrite(ledPin, HIGH);  // Acender o LED
  } else {
    digitalWrite(ledPin, LOW);   // Apagar o LED
  }
}
