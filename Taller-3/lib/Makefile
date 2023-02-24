
main: libDynamic libStatic clear-obj
	
libStatic: pre-libStatic
		ar rcs liboperaciones.a liboperaciones.o

pre-libStatic: operaciones.c
		gcc -c operaciones.c -o liboperaciones.o

libDynamic: pre-libDynamic
		gcc -shared -Wl,-soname,liboperaciones.so.1 -o liboperaciones.so.1.0 operaciones.o

pre-libDynamic: operaciones.c
		gcc -c -fPIC operaciones.c -o operaciones.o

clear-obj:
		rm *.o

clear:
		rm *.o *.a *.so.1.0