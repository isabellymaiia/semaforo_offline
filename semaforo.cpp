// obter o endereço dos pinos
const int ledVermelho = 13;
const int ledAmarelo = 12;
const int ledVerde = 11;

// Ponteiros para os LEDs
const int* pLedVermelho = &ledVermelho;
const int* pLedAmarelo = &ledAmarelo;
const int* pLedVerde = &ledVerde;

void setup()
{
  pinMode(*pLedVermelho, OUTPUT);
  pinMode(*pLedAmarelo, OUTPUT);
  pinMode(*pLedVerde, OUTPUT);
}

void loop()
{
  digitalWrite(*pLedVermelho, HIGH); // liga led vermelho
  delay(6000); // espera 6 segundos
  digitalWrite(*pLedVermelho, LOW); // desliga led vermelho
  delay(1000);
  
  digitalWrite(*pLedAmarelo, HIGH); // liga led amarelo
  delay(2000); // espera 2 segundos
  digitalWrite(*pLedAmarelo, LOW); // desliga led amarelo
  delay(1000);
  
  digitalWrite(*pLedVerde, HIGH); // liga led verde
  delay(2000); // espera 2 segundos
  digitalWrite(*pLedVerde, LOW); // desliga led verde
  delay(1000);
  
  digitalWrite(*pLedVerde, HIGH); // liga led verde
  delay(1000); // espera 1 segundo
  digitalWrite(*pLedVerde, LOW); // desliga led verde

  digitalWrite(*pLedVerde, HIGH); // liga led verde
  delay(1000); // espera 1 segundo
  digitalWrite(*pLedVerde, LOW); // desliga led verde
  delay(1000);
  
  digitalWrite(*pLedAmarelo, HIGH); // liga led amarelo
  delay(2000); // espera 2 segundos
  digitalWrite(*pLedAmarelo, LOW); // desliga led amarelo
  delay(1000);
}
