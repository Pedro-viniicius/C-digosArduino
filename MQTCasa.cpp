
#include "MQTCasa.h"
#include "Arduino.h"


void  Sensor::definir_entrada(int pin) {
  pinMode(pin, INPUT);
  this->_pin = pin;
}
void  Sensor::deinir_saida(int pin) {
  pinMode(pin, OUTPUT);
  this->_pin = pin;
}

int Sensor_humidade::leitura_humidade() {

  value = analogRead( this->_pin);
  porcent = map(value, 1023, 0, 0, 100);

  return porcent;
}

int Sensor_rele:: AtivaRele( ) {
  

  if (sinal <= 45) {
    Serial.println("Irrigando a planta ...");
    digitalWrite(this->_pin, HIGH);
  } else {                                  // Se não ...
    Serial.println("Planta Irrigada ...");  // Imprime a frase no monitor serial
    digitalWrite(this->_pin, LOW);            // Altera o estado do pinoRele para nível Baixo
  }
  delay(1000);  // Estabelece o tempo de 1s para reinicializar a leitura
  return 1;
}
