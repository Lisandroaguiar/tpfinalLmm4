import processing.serial.*;

import processing.sound.*;
Serial miSerial;
SoundFile sonidoError;
int valorNumerico=0;
void setup(){
miSerial=new Serial(this);
sonidoError=new SoundFile(this,"sonidoError.wav");
}

void draw(){
if(miSerial.available()>0){
String valorEnTexto=miSerial.readStringUntil('\n'); //Pide un valor cada vez que lee un espacio
if(valorEnTexto != null){
  valorNumerico=int(trim(valorEnTexto)); // trim solo saca los espacion en blanco del string

}
}


if(valorNumerico==17){
if(!sonidoError.isPlaying()){
  sonidoError.play();

}
}
println(valorNumerico);
}
