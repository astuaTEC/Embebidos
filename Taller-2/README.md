# Instrucciones para ejecutar el programa

## Con librería estática

Para ello solamente ejecute los siguientes comandos:

```
make static
./calc_static
```

## Con librería dinámica

```
make dynamic
LD_LIBRARY_PATH=.
./calc_dynamic
```