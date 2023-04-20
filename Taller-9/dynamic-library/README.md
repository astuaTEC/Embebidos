# Taller 9: Drivers 2

Para la evaluación de este tutorial, se deberá implementar una biblioteca dinámica, para la
tarjeta raspberrypi, que permite la generación de números seudo-aleatorios, ası́ como la medición
de tiempos de ejecución, utilizando el driver diseñado anteriormente. Deberá implementarse un
archivo de prueba que verifique el funcionamiento de la biblioteca. Debe seguir la estructura
estándar (lib, src, etc), ası́ como utilizar algún gestor de compilación (autotools, cmake, etc).

# Uso de Auto-tools

La librería se creó usando Auto-tools y acá se encuentran todos los archivos necesarios para su construcción.

Se usaron los comandos (dentro de la carpeta `Taller-9/dynamic-library`):
```
$ autoreconf --install
$ mkdir build
$ cd build
$ mkdir usr
$ ../configure --prefix=/home/samastua/Documents/TEC/Embebidos/Git/Taller-9/dynamic-library/build/usr/ --host=arm-poky-linux-gnueabi
$ make
$ make install
```
Para el desarrollo cruzado se usó la bandera `--host` y el ambiente de compilación se estableció con `. /opt/poky/3.1.21 environment-setup-cortexa7t2hf-neon-vfpv4-poky-linux-gnueabi`

**Nota:** la bandera `--prefix` deberá ser actualizada con la ruta correspondiente dentro de su computadora.

Además se creó el paquete de código con la librería. Lo podrá encontrar dentro en la ruta `dynamic-library/build/libtimer-1.0.tar.gz`

---

<div align="center"> 
Saymon Astúa Madrigal - 2018143188

**Instituto Tecnológico de Costa Rica**
</div>