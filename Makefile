main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o

main.o: main.cpp

unindent.o: unindent.cpp funcs.h

indent.o: indent.cpp funcs.h

clean:
	rm -f main unindent main.o unindent.o indent.o indent 