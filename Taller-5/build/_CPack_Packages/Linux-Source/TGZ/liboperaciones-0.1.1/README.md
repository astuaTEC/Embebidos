# Instrucciones para ejecutar el programa

## Construcción de todos los archivos necesarios

Para ello solamente necesita asegurarse de estar en la carpeta base del proyecto, abrir una terminal y ejecutar el siguiente comando:

```
cd build
cmake ../ -DCMAKE_INSTALL_PREFIX:PATH=/home/samastua/Documents/TEC/Embebidos/Git/Taller-5/build/usr
```
En donde **PATH** deberá ser cambiado de acuerdo a la máquina respectiva del usuario.

Luego deberá ejecutar los siguientes comandos para instalar la biblioteca (dentro de **build**).

```
make
make install
```

Y para comprobar el ejecutable, solo ejecute lo siguiente (dentro de **build**):

```
cd usr/bin && ./calculadora
```
