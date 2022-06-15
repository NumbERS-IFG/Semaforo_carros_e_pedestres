void setup() {
  pinMode(2, OUTPUT); //Define o pino 2 como  o sinal vermelho dos carros
  pinMode(3, OUTPUT); //Define o pino 3 como  o sinal amarelo dos carros
  pinMode(4, OUTPUT); //Define o pino 4 como  o sinal verde dos carros

  pinMode(5, OUTPUT); //Define o pino 5 como  o sinal vermelho dos pedestres
  pinMode(6, OUTPUT); //Define o pino 6 como  o sinal verde dos pedestres
}

void loop() {

  digitalWrite(2, HIGH); //Liga LED sinal vermelho para carros
  digitalWrite(6, HIGH); //Liga LED sinal verde para pedestres
  delay(2000); //espera 2(dois) segundo

  digitalWrite(2, LOW); //Desliga LED sinal vermelho para carros
  digitalWrite(3, HIGH); //Liga LED sinal amarelo para carros
  delay(1000); //espera 1(um) segundo

  digitalWrite(5, HIGH); //Liga LED sinal vermelho para pedestres
  digitalWrite(6, HIGH); //Desliga LED sinal verde para pedestres
  delay(1000); //espera 1(um) segundo

  digitalWrite(3, LOW); //Desliga LED sinal amarelo para carros
  digitalWrite(4, HIGH); //Liga LED sinal verde para carros
  delay(2000); //espera 2(dois) segundo
}
