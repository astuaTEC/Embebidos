# Preguntas
### ¿Qué pasos debe seguir antes de escribir o leer de un puerto de entrada/salida general (GPIO)? 

1. Identificar los pines correspondientes, en este caso de la RPi 2, que cuenta con 40 GPIOs.
2. Obtener el voltaje de operación de los pines.
3. Seleccionar el o los pines a usar.
4. Definir el modo de operación del pin (Entrada/Salida).
5. Configurar las direcciones del puerto, donde se reciben o se envían los datos.
6. Según el modo elegido y el lenguaje/biblioteca que se use, se debe leer o escribir en GPIO.

[Referencia](https://solectroshop.com/es/content/60-5-pines-gpio-y-su-programacion)


### ¿Qué comando podría utilizar, bajo Linux, para escribir a un GPIO específico?

En linux, de forma predeterminada, el acceso a los pines no está disponible, por lo que debemos habilitarlo. 
De modo que se hace uso de un archivo llamado export para este propósito. Escribir en este archivo hará que el kernel nos proporcione el pinout apropiado del procesador. Por consiguiente, si se quiere hacer uso de un pin llamado GPIO21, se deberá ejecutar un comando como el siguiente:

`echo 21 > /sys/class/gpio/export`

De este modo tendremos habilitado el acceso a este GPIO, y seguidamente se pueden ejecutar los siguientes comandos para modificarlo:

`echo 1 > /sys/class/gpio/gpio21/value` (Para asignarlo en 1)

`echo 0 > /sys/class/gpio/gpio21/value` (Para asignarlo en 0)

[Referencia](https://solectroshop.com/es/content/60-5-pines-gpio-y-su-programacion)

# GPIO Manager Library

Esta biblioteca ya cuenta con todos los archivos necesarios para simplemente usarlos en la raspberry pi 2 model B.

Solamente deberá seguir los siguientes pasos:

- Abrir una terminal en el directorio `Taller-7`.
- Insertar la tarjeta micro SD en su computadora.
- Escribir el comando `lsblk` para ver los discos conectados a la computadora y con ello encontrar la tarjeta micro SD. Usualmente sale como `/dev/sdb` (en mi caso era `/media/samas/root`).
- Escribir el siguiente comando: `sudo cp -r build/usr/* /media/samas/root` (Verificar la localización de la SD).
- Extraer la tarjeta SD de la computadora e insertarla en la raspberry pi 2. Encienda la raspberry pi 2 y como usuario coloque `root`.
- Para comprobar el programa de prueba escriba los siguientes comandos: `cd /`, `cd bin` y `./test`
- Los pines utilizados son el gpio 4 y el gpio 17.

## Uso de Auto-tools
La librería se creó usando Auto-tools y acá se encuentran todos los archivos necesarios para su construcción.

Se usaron los comandos (dentro de la carpeta `Taller-7`):
```
$ autoreconf --install
$ mkdir build
$ cd build
$ mkdir usr
$ ../configure --prefix=/home/samastua/Documents/TEC/Embebidos/Git/Taller-7/build/usr/ --host=arm-poky-linux-gnueabi
$ make
$ make install
```
Para el desarrollo cruzado se usó la bandera `--host` y el ambiente de compilación se estableció con `. /opt/poky/3.1.21 environment-setup-cortexa7t2hf-neon-vfpv4-poky-linux-gnueabi`

Además se creó el paquete de código con la librería. Lo podrá encontrar dentro en la ruta `build/libgpiomanager-1.0.tar.gz`

## Estudiantes
---
* Saymon Astúa Madrigal - 2018143188
* Martín Calderón Blanco - 2016163112
* Agustín Venegas Vega - 2018250621
---