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
* Martín Calderón Blanco - 2016
* Agustín Venegas Vega - 2018
---