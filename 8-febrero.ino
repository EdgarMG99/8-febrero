int Rojo=13;
int Verde=12;
int Azul=11;
int Tr;
int Tv;
int Ta;

void setup(){

Serial.begin(9600);
Serial.println("¿Cuanto tiempo estara prendido el led Rojo?");
while (Serial.available()==0){
}
Tr=Serial.parseInt();
pinMode(Rojo,OUTPUT);

Serial.begin(9600);
Serial.println("¿Cuanto tiempo estara prendido el led Verde?");
while (Serial.available()==0){
}
Tv=Serial.parseInt();
pinMode(Verde,OUTPUT);

Serial.begin(9600);
Serial.println("¿Cuanto tiempo estara prendido el led Azul?");
while (Serial.available()==0){
}
Ta=Serial.parseInt();
pinMode(Azul,OUTPUT);
}

void loop();{

digitalWrite(Rojo,HIGH);
delay(Tr);
digitalWrite(Rojo,LOW);
delay(Tr);
digitalWrite(Verde,HIGH);
delay(Tv);
digitalWrite(Verde,LOW);
delay(Tv);
digitalWrite(Azul,HIGH);
delay(Ta);
digitalWrite(Azul,LOW);
delay(Ta);
}
