#include <Servo.h>

Servo myServoF;

int pinBrazos, pinPierna1, pinPierna2, pinPanza1, pinPanza2, pinPanza7, pinPanza10, pinCabeza, pinVacunaLedFR;

char estado = 0;


void setup() {
  // put your setup code here, to run once:
  pinBrazos = 6;
  pinPierna1 = 3;
  pinPierna2 = 7;
  pinPanza1 = 5;
  pinPanza2 = 2;
  pinPanza7 = 11;
  pinPanza10 = 10;
  pinCabeza = 9;
  pinVacunaLedFR = 12;
  Serial.begin(9600);
  myServoF.attach(4);
}

void loop() {
  // put your main code here, to run repeatedly:
  //avanzarUno();
  if (estado > 8) {
    digitalWrite(pinVacunaLedFR, HIGH);
  }

  moverServoFra(90);


  if (estado == '1') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(0.416);
    prenderPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '2') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(0);
    apagarPanza2();
    prenderPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '3') {
    apagarBrazos();
    prenderPierna1(1);
    prenderPierna2(1);
    prenderPanza1(0.192);
    apagarPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '4') {
    prenderBrazos();
    prenderPierna1(1);
    prenderPierna2(1);
    prenderPanza1(1);
    prenderPanza2();
    prenderPanza7();
    prenderPanza10();
    prenderCabeza();
  }

  if (estado == '5') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    apagarPanza1(0);
    apagarPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '6') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(1);
    apagarPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '7') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(1);
    apagarPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '8') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(0.628);
    apagarPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '9') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(0.316);
    apagarPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '10') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(0.076);
    prenderPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '11') {
    prenderBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(0);
    prenderPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '12') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(0.548);
    apagarPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '13') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(0.96);
    apagarPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '14') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(0.064);
    apagarPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '15') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(0.06);
    apagarPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }

  if (estado == '16') {
    apagarBrazos();
    apagarPierna1(0);
    apagarPierna2(0);
    prenderPanza1(0.468);
    apagarPanza2();
    apagarPanza7();
    apagarPanza10();
    apagarCabeza();
  }


  if (Serial.available() > 0) {
    char datoRecibido;
    datoRecibido = Serial.read();  // Leer el dato recibido
    estado = datoRecibido;
    Serial.print(estado);
  }
}

void prenderPierna1(float voltaje) {

  analogWrite(pinPierna1, voltaje * 255);
}

void prenderPierna2(float voltaje) {

  analogWrite(pinPierna2, voltaje * 255);
}

void prenderPanza1(float voltaje) {
  analogWrite(pinPanza1, voltaje * 255);
}

void prenderPanza2() {
  digitalWrite(pinPanza2, 255);
}

void prenderPanza7() {

  analogWrite(pinPanza7, 255);
}

void prenderPanza10() {

  analogWrite(pinPanza10, 255);
}

void prenderCabeza() {

  analogWrite(pinCabeza, 255);
}

void prenderBrazos() {
  analogWrite(pinBrazos, 255);
}



void apagarPierna1(float voltaje) {

  analogWrite(pinPierna1, 0 * 255);
}

void apagarPierna2(float voltaje) {

  analogWrite(pinPierna2, 0);
}

void apagarPanza1(float voltaje) {
  analogWrite(pinPanza1, 0 * 255);
}

void apagarPanza2() {
  digitalWrite(pinPanza2, LOW);
}

void apagarPanza7() {

  digitalWrite(pinPanza7, LOW);
}

void apagarPanza10() {

  digitalWrite(pinPanza10, LOW);
}

void apagarCabeza() {

  digitalWrite(pinCabeza, LOW);
}

void apagarBrazos() {
  digitalWrite(pinBrazos, LOW);
}

void moverServoFra(int posicionServoF) {
  myServoF.write(posicionServoF);
}