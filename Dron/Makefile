
#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic

_start_: dron
	./dron

dron: obj/example.o  obj/Dr3D_gnuplot_api.o obj/Wektor.o obj/Macierz.o obj/MacierzOB.o obj/Prostopadloscian.o
	g++ -Wall -pedantic -o dron obj/example.o obj/Dr3D_gnuplot_api.o obj/MacierzOB.o obj/Prostopadloscian.o -lpthread

obj/example.o: src/example.cpp 
	g++ ${CPPFLAGS} -o obj/example.o src/example.cpp

obj/Dr3D_gnuplot_api.o: src/Dr3D_gnuplot_api.cpp inc/Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o obj/Dr3D_gnuplot_api.o src/Dr3D_gnuplot_api.cpp

obj/Dr3D_gnuplot_api.hh: inc/Draw3D_api_interface.hh
	touch inc/Dr3D_gnuplot_api.hh

obj/Macierz.o: src/Macierz.cpp src/MacierzC.cpp inc/Macierz.hh 
	g++ ${CPPFLAGS} -o obj/Macierz.o src/MacierzC.cpp

obj/Prostopadloscian.o: src/Prostopadloscian.cpp inc/Prostopadloscian.hh
	g++ ${CPPFLAGS} -o obj/Prostopadloscian.o src/Prostopadloscian.cpp

inc/Prostopadloscian.hh: inc/Obiekt3D.hh	
	touch inc/Prostopadloscian.hh

obj/MacierzOb.o: src/MacierzOB.cpp inc/MacierzOB.hh
	g++ ${CPPFLAGS} -o obj/MacierzOb.o src/MacierzOB.cpp

obj/Wektor.o: src/Wektor.cpp src/WektorC.cpp inc/Wektor.hh
	g++ ${CPPFLAGS} -o obj/Wektor.o src/WektorC.cpp




clean:
	rm -f obj/*.o dron