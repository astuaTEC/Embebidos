# Taller 10: Drivers 3

Para la evaluación de este tutorial se deberá crear un driver nuevo de GPIO, que permita: configurar el GPIO en cualquiera de todos los modos disponibles (entrada, salida o funciones especiales), leer y desplegar el modo actual, leer y desplegar el nivel lógico del GPIO, y escribir un valor al GPIO. Esto se debe realizar para al menos 8 GPIOs diferentes, tanto de manera individual (para un GPIO especı́fico) como grupal (para los 8 GPIOs simultáneamente), en el mismo controlador. Deberá abstraer las funcionalidades del controlador en una biblioteca. Además deberá implementar un archivo de prueba que verifique el funcionamiento de la biblioteca del controlador. Debe seguir la estructura estándar (lib, src, etc), ası́ como utilizar algún gestor de compilación (autotools, cmake, etc).

# Uso de Auto-tools

La librería se creó usando Auto-tools y acá se encuentran todos los archivos necesarios para su construcción.

Se usaron los comandos (dentro de la carpeta `Taller-10/library`):
```
$ autoreconf --install
$ mkdir build
$ cd build
$ mkdir usr
$ ../configure --prefix=/home/samastua/Documents/TEC/Embebidos/Git/Taller-10/library/build/usr/ --host=arm-poky-linux-gnueabi
$ make
$ make install
```
Para el desarrollo cruzado se usó la bandera `--host` y el ambiente de compilación se estableció con `. /opt/poky/3.1.21 environment-setup-cortexa7t2hf-neon-vfpv4-poky-linux-gnueabi`

**Nota:** la bandera `--prefix` deberá ser actualizada con la ruta correspondiente dentro de su computadora.

Además se creó el paquete de código con la librería. Lo podrá encontrar dentro en la ruta `library/build/libgpio-1.0.tar.gz`

---

<div align="center"> 
Saymon Astúa Madrigal - 2018143188

**Instituto Tecnológico de Costa Rica**
</div>