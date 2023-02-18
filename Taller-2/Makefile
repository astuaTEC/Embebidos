

static: libStatic
		gcc -static calculadora.c -L. -l MathCE -o calc_static

libStatic: pre-libStatic
		ar rcs libMathCE.a libMathCE.o

pre-libStatic: mathCE.c
		gcc -c mathCE.c -o libMathCE.o

dynamic: libDynamic
		gcc calculadora.c -o calc_dynamic -L. -lMathCE

libDynamic: pre-libDynamic
		gcc -shared -Wl,-soname,libMathCE.so.1 -o libMathCE.so.1.0 mathCE.o

pre-libDynamic: libStatic
		gcc -c -fPIC mathCE.c -o mathCE.o


clear:
		rm *.o *.a *.so.1.0