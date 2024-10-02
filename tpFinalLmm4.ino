int pinPorcentaje60VF, pinPorcentaje80VF, pinObligatorioF, pinPorcentaje100VF,
  pinPorcentaje60VA, pinRecomendadoF, pinPorcentaje40VA, pinPorcentaje80VA, 
  pinPorcentaje100VA, pinOsoArg, pinVacunaBotonA, pinVacunaBotonF, pinCalendario;
  
int estado;

bool puedeVacunar=true;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinPorcentaje60VF = 2;
  pinPorcentaje80VF = 3;
  pinObligatorioF = 4;
  pinPorcentaje100VF = 5;
  pinPorcentaje60VA = 6;
  pinRecomendadoF = 7;
  pinPorcentaje40VA = 8;
  pinPorcentaje80VA = 9;
  pinPorcentaje100VA = 10;
  pinOsoArg = 11;
  pinVacunaBotonA = 12;
  pinVacunaBotonF = 13;
  pinCalendario = A1;
  estado=0;

  pinMode(pinPorcentaje60VF, OUTPUT);
  
  pinMode(pinPorcentaje80VF, OUTPUT);
  
  pinMode(pinObligatorioF, OUTPUT);

  pinMode(pinPorcentaje100VF, OUTPUT);

  pinMode(pinPorcentaje60VA, OUTPUT);

  pinMode(pinRecomendadoF, OUTPUT);

  pinMode(pinPorcentaje40VA, OUTPUT);

  pinMode(pinPorcentaje80VA, OUTPUT);

  pinMode(pinPorcentaje100VA, OUTPUT);

  pinMode(pinOsoArg, OUTPUT);

  pinMode(pinVacunaBotonA, INPUT);

  pinMode(pinVacunaBotonF, INPUT);

  pinMode(pinCalendario,INPUT);

}

void loop() {
  
apagarPorcentaje40Arg();
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(1);
prenderPorcentaje100Fra(1);
prenderOsoArg(1);

float medicionCalendario= analogRead(pinCalendario);
Serial.println(medicionCalendario);

if(estado==0){
if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=1;
}
}

else if(estado==1){Serial.write('1');

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(0.8);
prenderPorcentaje80Arg(0);
prenderPorcentaje100Arg(0);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
estado=2;
puedeVacunar=false;
}
if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
delay(1000);


}

else if(estado==2){Serial.print('2');
apagarPorcentaje60Fra();
apagarPorcentaje80Fra();
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(0.8);
prenderPorcentaje80Arg(0);
prenderPorcentaje100Arg(0);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=3;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
delay(1000);

}

else if(estado==3){Serial.print('3');
apagarPorcentaje60Fra();
apagarPorcentaje80Fra();
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.15);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=4;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}

delay(1000);

}

else if(estado==4){Serial.print('4');
apagarPorcentaje60Fra();
apagarPorcentaje80Fra();
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=5;
}
if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}

delay(1000);

}

else if(estado==5){Serial.print('5');
apagarPorcentaje60Fra();
apagarPorcentaje80Fra();
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.65);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=6;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
}

else if(estado==6){Serial.print('6');
apagarPorcentaje60Fra();
apagarPorcentaje80Fra();
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.4);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=7;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}

delay(1000);

}

else if(estado==7){Serial.print('7');
apagarPorcentaje60Fra();
apagarPorcentaje80Fra();
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.55);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=8;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
delay(1000);

}

else if(estado==8){Serial.print('8');
apagarPorcentaje60Fra();
apagarPorcentaje80Fra();
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.2);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=9;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
delay(1000);

}

else if(estado==9){Serial.print('9');
apagarPorcentaje60Fra();
apagarPorcentaje80Fra();
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.821);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=10;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
delay(1000);

}

else if(estado==10){Serial.print('10');

apagarPorcentaje60Fra();
apagarPorcentaje80Fra();
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.7);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=11;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}

delay(1000);

}

else if(estado==11){Serial.print('11');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(0.6);
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.535);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=12;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}

delay(1000);

}

else if(estado==12){Serial.print('12');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(0.75);
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.45);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=13;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}

delay(1000);

}

else if(estado==13){Serial.print('13');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(0.85);
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.17);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=14;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
}

else if(estado==14){Serial.print('14');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(0.95);
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.8);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=15;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
delay(1000);

}

else if(estado==15){Serial.print('15');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(1);
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.35);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=16;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
delay(1000);

}

else if(estado==16){Serial.print('16');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(1);
apagarPorcentaje100Fra();

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.404);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=17;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
delay(1000);

}

else if(estado==17){
  Serial.print('17');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(1);
prenderPorcentaje100Fra(0.165);

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.55);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=18;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}

delay(1000);
}

else if(estado==18){Serial.print('18');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(1);
prenderPorcentaje100Fra(0.17);

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(1);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=19;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
delay(1000);

}

else if(estado==19){Serial.print('19');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(1);
prenderPorcentaje100Fra(0.315);

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.2);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=20;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
delay(1000);

}

else if(estado==20){Serial.print('20');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(1);
prenderPorcentaje100Fra(0.52);

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=21;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
}

else if(estado==21){Serial.print('21');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(1);
prenderPorcentaje100Fra(0.64);

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(0.96);
prenderPorcentaje100Arg(0);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=22;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}

delay(1000);

}

else if(estado==22){Serial.print('22');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(1);
prenderPorcentaje100Fra(0.52);

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(1);
prenderPorcentaje80Arg(1);
prenderPorcentaje100Arg(0.7095);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=23;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}

delay(1000);

}

else if(estado==23){
Serial.print('23');
prenderPorcentaje60Fra();
prenderPorcentaje80Fra(1);
prenderPorcentaje100Fra(0.64);

//ARGENTINA

prenderPorcentaje40Arg();
prenderPorcentaje60Arg(0.7115);
prenderPorcentaje80Arg(0);
prenderPorcentaje100Arg(0);

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=24;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
    puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
}

else if(estado==24){Serial.print('24');}

if(digitalRead(pinVacunaBotonF) && puedeVacunar){
  puedeVacunar=false;

estado=0;
}

if (digitalRead(pinVacunaBotonF) == LOW) {
  
  puedeVacunar = true;  // solo habilitar cuando se suelte el botón
}
delay(1000);

}

void prenderOsoArg(float voltaje){

  analogWrite(pinOsoArg, voltaje*255);

  }

  void prenderPorcentaje40Arg() {
  digitalWrite(pinPorcentaje40VA, HIGH);
}

void prenderPorcentaje60Arg(float voltaje) {
  analogWrite(pinPorcentaje60VA, voltaje*255);
}

void prenderPorcentaje80Arg(float voltaje) {
  analogWrite(pinPorcentaje80VA, voltaje*255);
}

void prenderPorcentaje100Arg(float voltaje) {
  analogWrite(pinPorcentaje100VA, voltaje*255);
}



void prenderPorcentaje60Fra() {
  digitalWrite(pinPorcentaje60VF, 1);
}

void prenderPorcentaje80Fra(float voltaje) {
  analogWrite(pinPorcentaje80VF, voltaje*255);
}

void prenderPorcentaje100Fra(float voltaje) {
  analogWrite(pinPorcentaje100VF, voltaje*255);
}

void prenderObligatorio(){
digitalWrite(pinObligatorioF,HIGH);
  
}


void prenderRecomendado(){
digitalWrite(pinRecomendadoF,HIGH);
  
}










void apagarOsoArg(){

  analogWrite(pinOsoArg, 0);

  }

  void apagarPorcentaje40Arg() {
  digitalWrite(pinPorcentaje40VA, LOW);
}

void apagarPorcentaje60Arg() {
  analogWrite(pinPorcentaje60VA, 0);
}

void apagarPorcentaje80Arg() {
  analogWrite(pinPorcentaje80VA, 0);
}

void apagarPorcentaje100Arg() {
  analogWrite(pinPorcentaje100VA, 0);
}



void apagarPorcentaje60Fra() {
  digitalWrite(pinPorcentaje60VF, 0);
}

void apagarPorcentaje80Fra() {
  analogWrite(pinPorcentaje80VF, 0);
}

void apagarPorcentaje100Fra() {
  analogWrite(pinPorcentaje100VF, 0);
}

void apagarObligatorio(){
digitalWrite(pinObligatorioF,LOW);
  
}


void apagarRecomendado(){
digitalWrite(pinRecomendadoF,LOW);
  
}



