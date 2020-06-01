# UnoArdusim_4ESO
Conjunto de prácticas realizadas con UnoArdusim, adaptadas al currículo de 4 ESO.

Para poder utilizarlas se debe descargar primero el simulador UnoArdusim, desarrollado por el profesor Stan Simmons de la universidad de Queens, Ontario (Canadá).

Para ello, se debe ir a su web:
https://www.sites.google.com/site/unoardusim/services
y descargar la última versión.
En el momento de crear este repositorio la versión más reciente es la 2.7.1, con la que se han creado estas prácticas.

**¿Cómo usar las prácticas?**

Una vez descargado el simulador y descomprimido en un directorio del ordenador (es una aplicación "portable") lo ejecutamos.
Primero en CONFIG->PREFERENCES marcamos que queremos simular Arduino V3 marcando el radio button correspondiente. También podemos seleccionar el idioma del interfaz. Esto es lo mínimo a configurar. Se recomienda revisar la ayuda disponible desde el menú del propio simulador para aprender a usar todas sus posibilidades.

_Configurando el hardware a simular_

La parte derecha delsimulador Ardusim muestra los elementos hardware que queremos simular. Se debe cargar la configuración mediante el fichero .txt cvreado para cada práctica, navegando al directorio correspondiente de este repositorio (o al correspondiente de la descarga que se haya realizado en el propio PC).
Una vez cargada la configuración del hardware, debemos cargar el código.INO desde el menúa Archivo, navegando al correspondiente código.

_Ejecutar la simulación_

Para ejecutar la simulación se debe pulsar el icono con la flecha verde hacia abajo o ir al menú Ejecutar->Ejecutar (equivalente a pulsar la tecla F9)
Se para la simulación con el icono STOP, menú Ejecutar-ZDetener o pulsando F10.

Podemos ejecutar paso a paso, animar la ejecución (se irá resaltando la línea de código que se está ejecutando, o hacerlo a cámara lenta. Para más información, consultar la ayuda del propio simulador.

Si queremos resetear la simulación, debemos pulsar el icono de la flehca blanca hacia abajo o ir a menú Ejecutar->Reiniciar.

**Las prácticas**

Vamos a describir en qué consisten las prácticas.

- 1 - LEDs

  * 1 - BLINK
  
  Este es la práctica primera que se suele hacert cargando el ejemplo BLINK desde el IDE de Arduino. Se simula ese led y se carga el código ejemplo.
  Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/2gO5d2Biaxt
  
  * 2 - LEDs SEMÁFORO
  
  En este caso se simulan trtes leds, que podrían ser un semáforo, en los que se van encendiendo alternativamente de rojo a verde y después de verde a rojo, en bucle.
  Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/hQvPtCJtsZs

  
- 2 - PULSADOR

  * 3 - LED PULSADOR
  
  Tenemos un LED que está encendido mientras no actuemos sobre el pulsador, que lo apaga.
  Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/bXTOSWr75jv

  
  * 4 - LED PULSADOR PWM
  
  En este caso, si no actuamos sopbre el pulsador, el LED permanece encendido. Al actuar sobre el pulsador, modulamos con PWM la intensidad de luz del LED. En este caso, UnoArdusim no permite modular esta intensidad, pero en la consula que hay a la izquierda debajo del código fuente podemos observar el cambio de valor que genera el PWM de 0 a 255. Visualmente, el LED parpadea.
  Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/eJzoLHgI9Oz
  
- 3 - SERVO

  * 5 - SERVOMOTOR
  
 En esta simulación el servomotor se mueve controlador por un bucle de lado a lado.
 Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/fiZxDH31JXX
  
  * 6 - SERVOMOTOR POTENCIÓMETRO
  
  Ahora actuamos controlando la posición del motro con el deslizador qeu simula el uso de un potenciómetro. Cabe destacar que en un montaje real necesitaríamos una resistencia de pullup o pulldown para realizar correctamente este montaje.
  Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/5yJekbxJyLV
  
  
- 4 - LDR y BUZZER

  * 7 - LDR CALIBRADO
  
  Simulación de lo que sería calibrar un montaje con un LDR para saber el nivel de luz que detecta. Dado que UnoArdusim no tiene disponible la simulación de un LDR se utiliza como alternativa un deslizador horizontal. Se presenta un módulo de conexión serie que no muesta los mensajes de la consola serie. También podemos abrir una consola seria para verlo mejor en Ventanas->"Serial" monitor.
  Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/l2MyUeYhikM

  
  * 8 LDR ZUMBADOR
  
  Ahora que hemos "calibrado" nuestro montaje, si detectamos luz por encima del umbral definido en el código hacemos sonar un zumbaor.
  Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/bAL9Fdr37Ik
  
- 5 - MOTOR DC

  * 9 - MOTOR DC MOSFET
  
  En realidad se quería simular un montaje con un MOSFET cuya puerta se controla desde un pind de Ardunio y que sirve para hacer funcionar un motro DC. Dado que UnoArdusim no dispone de MOSFET se simula simplemente con el motor. En esta práctica se varía mediando bucle FOR su velocidad de mínimo a máximo y viceversa.
  Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/5IRpxlyDyxA

  
  * 10 - MOTOR DC MOSFET POTENCIÓMETRO
  
  Ahora regulamos con un potenciómetro (simulado por un deslizador) la velocidad de giro del motor.
  Esta práctica se puede ver simulada con Tinkercad en https://www.tinkercad.com/things/cRiJl97Vo3M
  




