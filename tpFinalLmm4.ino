#include <Servo.h>

Servo myServoA;





int pinObligatorioF,
  pinVacunaLed,
  pinOsoArg,
  pinVacunaBotonA,
  pinVacunaBotonF,
  pinCalendario,
  pinContactoVacuna,
  pinContactoAmpollaA,
  pinContactoAmpollaF,
  pinLed2018,
  pinLed2019,
  pinLed2020,
  pinLed2021,
  pinLed2022,
  pinLed2023,
  pinLedAmpollaFr,
  pinLedAmpollaAr,
  pinLedSelector;
int estado;

bool puedeVacunar = true;
float medicionCalendario;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  myServoA.attach(3);



  pinVacunaLed = 7;

  pinOsoArg = 11;
  pinVacunaBotonA = A4;
  pinVacunaBotonF = A2;
  pinCalendario = A3;
  estado = 1;

  pinContactoAmpollaA = A0;
  pinContactoAmpollaF = A1;
  pinLed2018 = 2;
  pinLed2019 = 4;
  pinLed2020 = 5;
  pinLed2021 = 6;
  pinLed2022 = 8;
  pinLed2023 = 10;
pinLedAmpollaAr=11;
pinLedAmpollaFr=12;
pinLedSelector=13;
pinMode(pinContactoAmpollaA,INPUT);
pinMode(pinContactoAmpollaF,INPUT);

pinMode(pinLed2018,OUTPUT);
pinMode(pinLed2019,OUTPUT);
pinMode(pinLed2020,OUTPUT);
pinMode(pinLed2021,OUTPUT);
pinMode(pinLed2022,OUTPUT);
pinMode(pinLed2023,OUTPUT);

pinMode(pinLedAmpollaAr,OUTPUT);
pinMode(pinLedAmpollaFr,OUTPUT);

pinMode(pinLedSelector,OUTPUT);

pinMode(pinContactoVacuna, INPUT);

pinMode(pinVacunaLed, OUTPUT);

pinMode(pinOsoArg, OUTPUT);

pinMode(pinVacunaBotonA, INPUT);
pinMode(pinVacunaBotonF, INPUT);

pinMode(pinCalendario, INPUT);

}

void loop() {
  medicionCalendario = analogRead(pinCalendario);
  // //delay(100);
  float medicionContactoVacuna = analogRead(pinContactoVacuna);
  //Serial.println(medicionContactoVacuna);
  int posServo = 0;

  posServo++;
  if (posServo > 180) { posServo = 0; }
  moverServoArg(180);




  digitalWrite(pinVacunaLed, HIGH);


  cambiarEstado(389, 530);



  if (estado == 1) {

    prenderOsoArg(0);

    //ARGENTINA




  }

  else if (estado == 2) {
    prenderOsoArg(0.012);





  }

  else if (estado == 3) {
    prenderOsoArg(0.12);



    //ARGENTINA





  }

  else if (estado == 4) {
    prenderOsoArg(0.08);





    //delay(1000);

  }

  else if (estado == 5) {
    prenderOsoArg(0);



  }

  else if (estado == 6) {
    prenderOsoArg(0);





  }

  else if (estado == 7) {
    prenderOsoArg(0);





  }

  else if (estado == 8) {
    prenderOsoArg(0);





  }

  else if (estado == 9) {
    prenderOsoArg(0.012);




  }

  else if (estado == 10) {
    prenderOsoArg(0.056);





  }

  else if (estado == 11) {
    prenderOsoArg(0.52);





  }

  else if (estado == 12) {
    prenderOsoArg(0.276);




  }

  else if (estado == 13) {
    prenderOsoArg(0);




  }

  else if (estado == 14) {
    prenderOsoArg(0.08);




  }

  else if (estado == 15) {
    prenderOsoArg(0);



  }

  else if (estado == 16) {
    prenderOsoArg(0);
  }


  Serial.println(estado);


  delay(20);
}

void prenderOsoArg(float voltaje) {

  analogWrite(pinOsoArg, voltaje * 255);
}










void apagarOsoArg() {

  analogWrite(pinOsoArg, 0);
}









void prenderLedVacunaArg() {

  digitalWrite(pinVacunaLed, HIGH);
}

void cambiarEstado(float umbralMinimo, float umbralMaximo) {
  // Cálculo del umbral medio
  float umbralMedio = (umbralMaximo - umbralMinimo) / 16.0;

  // Calcular el estado al que debería cambiar basado en la medición actual
  int estadoAlQueCambia = round((medicionCalendario - umbralMinimo) / umbralMedio);

  int valorMapeado = map(medicionCalendario, umbralMinimo, umbralMaximo, 1, 16);
  estadoAlQueCambia = constrain(valorMapeado, 1, 16);

  // Verificar si la medición actual está dentro de los umbrales y si el estado debe cambiar

  estado = estadoAlQueCambia;
}
void moverServoArg(int posicionServo) {
  myServoA.write(posicionServo);
}