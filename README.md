# BRAZO ROBÓTICO CON JAVA Y ARDUINO

# Nombre: carlos Enrique de Jesus Anguiano Nuñez

Fecha 17 de mayo de 2018

# Material
- Protobot
- Arduino genuino
- Partes del brazo impresas con impresora en 3D
- Cables
- Base de madera
- 5 servo motores 
- Pinzas para el brazo
- Motor a pasaos 
- Tornillos
- Desarmadores

# Objetivo

El objetivo de esta práctica es diseñar, armar y controlar un brazo robótico. El control será por medio de una conexión con Java y Arduino y permitirá realizar una serie de movimientos. 

# Desarrollo

Un servomotor (también llamado servo) es un dispositivo similar a un motor de corriente continua que tiene la capacidad de ubicarse en cualquier posición dentro de su rango de operación, y mantenerse estable en dicha posición o que ser controlado tanto en velocidad como en posición.
Es posible modificar un servomotor para obtener un motor de corriente continua que, si bien ya no tiene la capacidad de control del servo, conserva la fuerza, velocidad y baja inercia que caracteriza a estos dispositivos.

El motor paso a paso conocido también como motor de pasos es un dispositivo electromecánico que convierte una serie de impulsos eléctricos en desplazamientos angulares discretos, lo que significa que es capaz de girar una cantidad de grados (paso o medio paso) dependiendo de sus entradas de control. El motor paso a paso se comporta de la misma manera que un conversor digital-analógico (D/A) y puede ser gobernado por impulsos procedentes de sistemas digitales. Este motor presenta las ventajas de tener precisión y repetitividad en cuanto al posicionamiento. Entre sus principales aplicaciones destacan los robots, drones, radiocontrol, impresoras digitales, automatización, fotocomponedoras, preprensa, etc.

En esta práctica se creó un brazo robótico, dichas partes del brazo fueron impresas con impresora en 3D una vez que se tuvieron las partes del brazo el siguiente paso fue armarlo.
Se dividió el brazo en 5 partes. 
- Base: Aquí es donde va el motor a pasos puesto en la base de madera para que el brazo pueda girar 360 grados o si no un servomotor pero el giro será aproximadamente de 180 grados o más.
- Tronco: Va un servo motor, esta es la parte más importante del brazo ya que nos permite mover todo el brazo con las demás partes que lo integran.
- Cadera: Va otro servo motor, la cadera nos permite hacer un movimiento que mueve la muñeca y podamos tener, mejor precisión del agarre de las cosas.
- Muñeca: Con otro servo motor controlamos los giros de la muñeca.
- Garra: De igual forma se encuentra otro servo motor y controlamos los movimientos de abrir y cerrar de la garra
 
Cada parte del brazo tiene 2 botones que lo hacen funcionar y contamos con uno que hace los movimientos todos a la vez, este botón es el de limpiar. El programa de arduino lleva como nombre brazo-otro-nuevo y el de java lleva como nombre brazo, la librería que se uso para la conexión fue panamahiteck  


Todo esto se realizó con licencias de código abierto tanto como de Java y Arduino.

# CONCLUSIÓN

En lo personal esta práctica me gustó mucho ya que nos permitió conectar dos entornos distintos de programación y además de conocer a fondo la funcionalidad de los servomotores y del motor a pasos, a parte el mecanismo de un brazo robótico es muy interesante ya que tuvimos que hacerlo con impresión en 3D cosa que núnca había echo y la programación de igual manera estuvo interesante ya  que Arduino nos brinda muchas cosas para poder explotarlas y hacer cosas grandiosas.
