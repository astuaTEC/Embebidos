# Instrucciones para ejecutar el programa

## Construcción de la librería a partir de una distribución .tar.gz

Deberá copiar el archivo build/liboperaciones-1.0.tar.gz en el directorio de su preferencia:

Ej: Desktop

Luego deberá descomprimir el .tar.gz con el comando

```
tar -xvf liboperaciones-1.0.tar.gz
```

![Descomprimir](https://res.cloudinary.com/dnxt7nqdg/image/upload/v1678463739/Taller-4-Embebidos/Screenshot_from_2023-03-10_09-55-17_ie8na8.png)


Navegue dentro de la carpeta liboperaciones-1.0

```
cd liboperaciones-1.0
```

Deberá correr el siguiente comando:

```
autoreconf --install
```

## Probar la librería

Dentro de liboperaciones-1.0 deberá seguir los siguientes comandos:

```
mkdir build
cd build
mkdir usr
```

Una vez dentro de build, deberá ejecutar el siguiente comando:

```
../configure --prefix=/home/<user>/Desktop/liboperaciones-1.0/build/usr/
```
**Nota: Deberá sustituir `<user>` por su usuario correspondiente**

![Configure](https://res.cloudinary.com/dnxt7nqdg/image/upload/v1678464127/Taller-4-Embebidos/Screenshot_from_2023-03-10_10-01-38_fmgozq.png)



Luego ejecute los siguientes comandos (dentro de build):

```
make
make install
cd usr
ls
```
![Resultado](https://res.cloudinary.com/dnxt7nqdg/image/upload/v1678464442/Taller-4-Embebidos/Screenshot_from_2023-03-10_10-07-09_qjjlcs.png)


Para ejecutar la prueba, ejecute el siguiente comando (correrá un ejecutable):

```
./bin/operaciones
```

![Ejecutable](https://res.cloudinary.com/dnxt7nqdg/image/upload/v1678464597/Taller-4-Embebidos/Screenshot_from_2023-03-10_10-09-21_ow9yvt.png)
