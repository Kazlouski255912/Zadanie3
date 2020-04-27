#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic

__start__: system_of_equations
	./system_of_equations

system_of_equations: obj/main.o obj/Uklad.o obj/macierz.o obj/wektor.o
	g++ -Wall -pedantic -o system_of_equations obj/main.o obj/wektor.o\
                                   obj/macierz.o obj/Uklad.o

obj/main.o: src/main.cpp inc/Uklad.hh inc/macierz.hh inc/wektor.hh\
        inc/size.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Uklad.o: src/Uklad.cpp inc/Uklad.hh
	g++ ${CPPFLAGS} -o obj/Uklad.o src/Uklad.cpp

obj/macierz.o: src/macierz.cpp inc/macierz.hh 
	g++ ${CPPFLAGS} -o obj/macierz.o src/macierz.cpp

obj/wektor.o: src/wektor.cpp inc/wektor.hh inc/size.hh
	g++ ${CPPFLAGS} -o obj/wektor.o src/wektor.cpp

clean:
	rm -f obj/*.o system_of_equations
