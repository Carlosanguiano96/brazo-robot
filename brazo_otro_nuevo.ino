/*BRAZO ROBOTICO
 * MATERIA SISTEMAS PROGRAMABLES 
 * PROF.INGENIERO LEVY
 * 
 * INTEGRANTES 
 * ANGUIANO NUÑEZ CARLOS EBRIQUE DE JESUS 
 * BAIRON AREVALO ANTONIO
 * 
 * EL DESARROLLO DE ESTE PROYECTO CONSISTE EN LA ELABORACION DE UN BRAZO ROBOTICO 
 * CONTROLADO CON SERVOMOTORES PARA EFECTUAR UN MOVIMIETO CONTINUO
 * 
 * EN ESTE CASO USAMOS 5 SERVOMOTORES QUE SON CONTROLADOS DESDE UNA INTERFAZ DE JAVA 
 * DONDE UTILIZAMOS UNA LIBRERIA EXTRAIDA DESDE LA PAGINA 
 * http://panamahitek.com/tag/libreria-arduino-para-java/
 * LA CUAL NOS AYUDO A HACER POSIBLE ESTA CONEXION ENTRE ESTAS DOS TECNOLOGIAS
 * 
 * MATERIAL USADO
 * 
 * 5 MICRO SERVO 9600
 * TORNILLOS
 * CABLE MACHO-MACHO
 * CABLE MACHO-HEMBRA
 * LED
 * RESISTOR 10K
 * PROTOBOARD
 * CABLE SERIAL USB
 * ARDUINO UNO
 * ESTRUCTURA DE BRAZO ROBOTICO IMPRESO 3D
 */



// Incluímos la librería para poder controlar el servo
#include <Servo.h>
//#define DEBUG(a) Serial.println(a);

// Declaramos la variable para controlar nuestros servo-motores
Servo caderaS1;
Servo adelanteAtrasS2;
Servo hombro3;
Servo munecaS4;
Servo garraS5;
char data;
int entrada, entrada2,entrada3,entrada4,entrada5;


void setup() {
  // put your setup code here, to run once:
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con los pines 7,8,9,10,11
  caderaS1.attach(7);
  adelanteAtrasS2.attach(8);
  hombro3.attach(9);
  munecaS4.attach(10);
  garraS5.attach(11);

}

void loop() {
  // put your main code here, to run repeatedly:

base();
/*bases();
hombro();
mano();
garra();

*/
}

//METODO BASE QUE VA A RECIBIR LAS INSTRUCCIONES MANDADAS DESDE JAVA
void base(){
 //VERIFICAMOS QUE TENGAMOS  CONEXION CON JAVA
    if (Serial.available()>0)
   {
//LEEMOS EL DATO QUE ENVIA JAVA Y LO ASIGNAMOS ALA VARIABLE CHAR DATA     
      data =Serial.read();
   }

   //USANDO UN SWITCH SE HACE LA OPCION CORRESPONDIENTE
switch(data){
//CASO A
  case 'a' :{
//EL SERVO SE MUEVE A LA POSICION DE 0 GRADOS
    caderaS1.write(0);
    //SE ROMPE EL CICLO
    break;
  }
  //CASO B
  case 'b':{
    //EL SERVO SE MUEVE A LA POSICION DE 180 GRADOS
    caderaS1.write(180);
    break;
  }
  //CASO C
  case 'c':{
    //EL SERVO SE MUEVE A LA POSICION DE 30 GRADOS
    adelanteAtrasS2.write(30);
    break;
  }
  
  case 'd':{
    //EL SERVO SE MUEVE A LA POSICION DE 60 GRADOS
    adelanteAtrasS2.write(60);
    break;
  }
  
  case 'e':{
    //EL SERVO SE MUEVE A LA POSICION DE 70 GRADOS
    hombro3.write(70);
    break;
  }
  
  case 'f':{
    //EL SERVO SE MUEVE A LA POSICION DE 180 GRADOS
    hombro3.write(180);
    break;
  }
  
  case 'g':{
    //EL SERVO SE MUEVE A LA POSICION DE 0 GRADOS
    munecaS4.write(0);
    break;
  }
  
  case 'h':{
    //EL SERVO SE MUEVE A LA POSICION DE 180 GRADOS
    munecaS4.write(180);
    break;
  }
  
  case 'i':{
    //EL SERVO SE MUEVE A LA POSICION DE 50 GRADOS
    garraS5.write(50);
    break;
  }
  
  case 'j':{
    //EL SERVO SE MUEVE A LA POSICION DE 90 GRADOS
    garraS5.write(90);
    break;
  }

  //ESTE BOTON Para cualquier proceso e inicializa todos los servos a una poscision fija
  case 'k':{
     caderaS1.write(50);
     delay(50);
  adelanteAtrasS2.write(50);
  delay(50);
  hombro3.write(50);
  delay(50);
  munecaS4.write(50);
  delay(50);
  garraS5.write(50);
  delay(50);
  break;
  
}
   }
}

     
     
     

