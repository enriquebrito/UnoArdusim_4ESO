# UnoArdusim_4ESO
Conjunto de prácticas adaptadas al currículo de 4º ESO realizadas con Arduino.
Se dispone del material de soporte para realización de docencia presencial o para poder realizar tele enseñanza utilizando simulación.

En este repositorio se encuentran los ficheros necesarios apra poder realizar dicha simulación con UnoArdusim. En esta descripción también se enlaza a la simulación con Tinkercad de todas las sesiones de trabajo.

Como es evidente, las simulaciones en UnoArdusim están adpatadas a las posibilidades de simulación de elementos hardware que ofrece. En Tinkercad está simulado un montaje que se puede realizar en laboratorio, como de hecho así ha sido en sesiones prácticas impartidas.

Para poder utilizarlas se debe descargar primero el simulador UnoArdusim, desarrollado por el profesor Stan Simmons de la universidad de Queens, Ontario (Canadá).

Para ello, se debe ir a su web:
https://www.sites.google.com/site/unoardusim/services
y descargar la última versión.
En el momento de crear este repositorio la versión más reciente es la 2.7.1, con la que se han creado estas prácticas.
Para comodidad, se adjunta a este repositorio una copia de esta versión del simulador
https://github.com/enriquebrito/UnoArdusim_4ESO/blob/master/UnoArduSimV2.7.1.zip
(Cuando se escriben estas líneas, se ha liberado la versión 2.8.0 de UnoArdusim pero se ha comprobado que, debido al uso de la localización al español, los ficheros de configuración aquí facilitados no son compatibles con esa versión -hay cambios en la forma de traducirlos-. Esto no sucedería de haber usado el interfaz en inglés. Se ha reportado al Profesor Simmons esta circunstancia. La solución que aporta sería usar la versión 2.7.1 en español y cargar configuración; pasar a inglés y exportarla para que luego la versión 2.8.0 la lea, si está en inglés.
Por tanto, para facilitar el uso, se añaden los ficheros de configuración de elementos a simular con UnoArdusim configurado en inglés. Son los ficheros que terminan en __en.txt_)

**¿Cómo usar las prácticas?**

Una vez descargado el simulador y descomprimido en un directorio del ordenador (es una aplicación "portable") lo ejecutamos.
Primero en CONFIG->PREFERENCES marcamos que queremos simular Arduino V3 marcando el radio button correspondiente. También podemos seleccionar el idioma del interfaz. Esto es lo mínimo a configurar. Se recomienda revisar la ayuda disponible desde el menú del propio simulador para aprender a usar todas sus posibilidades.

_Configurando el hardware a simular_

La parte derecha del simulador Ardusim muestra los elementos hardware que queremos simular. Se debe cargar la configuración mediante el fichero _.txt_ creado para cada práctica, navegando al directorio correspondiente de este repositorio (o al correspondiente de la descarga que se haya realizado en el propio PC). Usamos el menú _Configurar-> "I/O" Dispositivos_ y en la ventana que sale, damos al botón Cargar para navegar al directorio donte tenemos la práctica correspondiente. Seleccionamos el fichero que aparece y luego pulsamos OK. Veremos UnoArdusim con el harware que queremos simular en la parte derecha correctamente configurado.
Una vez cargada la configuración del hardware, debemos cargar el código _.INO_ desde el menú _Archivo_ navegando al correspondiente código.

_Ejecutar la simulación_

Para ejecutar la simulación se debe pulsar el icono con la flecha verde hacia abajo o ir al menú _jecutar->Ejecutar_ (equivalente a pulsar la tecla F9)
Se para la simulación con el icono STOP, menú _Ejecutar->Detener_ o pulsando F10.

Podemos ejecutar paso a paso, animar la ejecución (se irá resaltando la línea de código que se está ejecutando, o hacerlo a cámara lenta. Para más información, consultar la ayuda del propio simulador.

Si queremos resetear la simulación, debemos pulsar el icono de la flehca blanca hacia abajo o ir a menú _Ejecutar->Reiniciar_.

## Las prácticas

Vamos a describir en qué consisten las prácticas.


#### 1 - LEDs

La documentación que se puede usar en una clase presencial es esta:
https://github.com/enriquebrito/UnoArdusim_4ESO/blob/master/PRACTICAS/1-LEDs/LEDs.pdf

* 1 - BLINK
Este es la práctica primera que se suele hacer cargando el ejemplo BLINK desde el IDE de Arduino. Se simula ese led y se carga el código ejemplo.
Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/2gO5d2Biaxt

* 2 - LEDs SEMÁFORO
En este caso se simulan tres leds, que podrían ser un semáforo, en los que se van encendiendo alternativamente de rojo a verde y después de verde a rojo, en bucle.
Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/hQvPtCJtsZs


#### 2 - PULSADOR

La documentación que se puede usar en una clase presencial es esta:
https://github.com/enriquebrito/UnoArdusim_4ESO/blob/master/PRACTICAS/2-PULSADOR/PulsadorArduino.pdf

* 3 - LED PULSADOR
Tenemos un LED que está encendido mientras no actuemos sobre el pulsador, que lo apaga.
Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/bXTOSWr75jv

* 4 - LED PULSADOR PWM
En este caso, si no actuamos sopbre el pulsador, el LED permanece encendido. Al actuar sobre el pulsador, modulamos con PWM la intensidad de luz del LED. En este caso, UnoArdusim no permite modular esta intensidad, pero en la consula que hay a la izquierda debajo del código fuente podemos observar el cambio de valor que genera el PWM de 0 a 255. Visualmente, el LED parpadea.
Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/eJzoLHgI9Oz


#### 3 - SERVO

La documentación que se puede usar en una clase presencial es esta:
https://github.com/enriquebrito/UnoArdusim_4ESO/blob/master/PRACTICAS/3-SERVO/ArduinoServo.pdf

* 5 - SERVOMOTOR
En esta simulación el servomotor se mueve controlador por un bucle de lado a lado.
Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/fiZxDH31JXX

* 6 - SERVOMOTOR POTENCIÓMETRO
Ahora actuamos controlando la posición del motor con el deslizador qeu simula el uso de un potenciómetro. Cabe destacar que en un montaje real necesitaríamos una resistencia de pullup o pulldown para realizar correctamente este montaje.
Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/5yJekbxJyLV
  
  
#### 4 - LDR y BUZZER

La documentación que se puede usar en una clase presencial es esta:
https://github.com/enriquebrito/UnoArdusim_4ESO/blob/master/PRACTICAS/4-LDRyBUZZER/LDRyBuzzer.pdf

* 7 - LDR CALIBRADO
Simulación de lo que sería calibrar un montaje con un LDR para saber el nivel de luz que detecta. Dado que UnoArdusim no tiene disponible la simulación de un LDR se utiliza como alternativa un deslizador horizontal. Se presenta un módulo de conexión serie que no muesta los mensajes de la consola serie. También podemos abrir una consola serie para verlo mejor en Ventanas->"Serial" monitor.
Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/l2MyUeYhikM

* 8 LDR ZUMBADOR
Ahora que hemos "calibrado" nuestro montaje, si detectamos luz por encima del umbral definido en el código hacemos sonar un zumbaor.
Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/bAL9Fdr37Ik


#### 5 - MOTOR DC

La documentación que se puede usar en una clase presencial es esta:
https://github.com/enriquebrito/UnoArdusim_4ESO/blob/master/PRACTICAS/5-MOTOR_DC/MotorDC_IRF510.pdf

* 9 - MOTOR DC MOSFET
En realidad se quería simular un montaje con un MOSFET cuya puerta se controla desde un pin de Ardunio y que sirve para hacer funcionar un motor DC. Dado que UnoArdusim no dispone de MOSFET, se simula simplemente con el motor. En esta práctica se varía mediante bucle FOR su velocidad de mínimo a máximo y viceversa.
Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/5IRpxlyDyxA

* 10 - MOTOR DC MOSFET POTENCIÓMETRO
Ahora regulamos con un potenciómetro (simulado por un deslizador) la velocidad de giro del motor.
Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/cRiJl97Vo3M
  
