CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++17 

_start_: Dron
	./Dron

Dron: obj/Dr3D_gnuplot_api.o obj/example.o obj/Wektor.o obj/Macierz.o obj/Prostopadloscian.o obj/MacierzOB.o obj/Dron.o obj/Podloze.o obj/tafla_wody.o obj/Graniastoslup.o obj/Plaszczyzna.o
	g++ -o Dron obj/example.o obj/Dr3D_gnuplot_api.o obj/Wektor.o obj/Macierz.o obj/Prostopadloscian.o obj/MacierzOB.o obj/Dron.o obj/Podloze.o obj/tafla_wody.o obj/Graniastoslup.o obj/Plaszczyzna.o -lpthread

obj/example.o: src/example.cpp inc/Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o obj/example.o src/example.cpp

obj/Dr3D_gnuplot_api.o: src/Dr3D_gnuplot_api.cpp inc/Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o obj/Dr3D_gnuplot_api.o src/Dr3D_gnuplot_api.cpp

obj/Dron.o: src/Dron.cpp inc/Dron.hh 
	g++ ${CPPFLAGS} -o obj/Dron.o src/Dron.cpp

inc/Dron.hh: inc/interfejs.hh
	touch inc/Dron.hh

obj/Plaszczyzna.o: src/Plaszczyzna.cpp inc/Plaszczyzna.hh
	g++ ${CPPFLAGS} -o obj/Plaszczyzna.o src/Plaszczyzna.cpp

inc/Plaszczyzna.hh: inc/Obiekt3D.hh	
	touch inc/Plaszczyzna.hh

inc/Dr3D_gnuplot_api.hh: inc/Draw3D_api_interface.hh
	touch inc/Dr3D_gnuplot_api.hh

obj/Macierz.o: src/Macierz.cpp src/MacierzC.cpp inc/Macierz.hh
	g++ ${CPPFLAGS} -o obj/Macierz.o src/MacierzC.cpp

obj/Graniastoslup.o: src/Graniastoslup.cpp inc/Graniastoslup.hh
	g++ ${CPPFLAGS} -o obj/Graniastoslup.o src/Graniastoslup.cpp

inc/Graniostoslup.hh: inc/Obiekt3D.hh	
	touch inc/Graniostoslup.hh

obj/Podloze.o: src/Podloze.cpp inc/Podloze.hh
	g++ ${CPPFLAGS} -o obj/Podloze.o src/Podloze.cpp

inc/Podloze.hh: inc/Plaszczyzna.hh	
	touch inc/Podloze.hh

obj/tafla_wody.o: src/tafla_wody.cpp inc/tafla_wody.hh
	g++ ${CPPFLAGS} -o obj/tafla_wody.o src/tafla_wody.cpp	

inc/tafla_wody.hh: inc/Plaszczyzna.hh	
	touch inc/tafla_wody.hh

obj/MacierzOB.o:inc/Macierz.hh src/MacierzOB.cpp inc/MacierzOB.hh
	g++ ${CPPFLAGS} -o obj/MacierzOB.o src/MacierzOB.cpp

obj/Wektor.o: src/Wektor.cpp src/WektorC.cpp inc/Wektor.hh
	g++ ${CPPFLAGS} -o obj/Wektor.o src/WektorC.cpp

obj/Prostopadloscian.o: src/Prostopadloscian.cpp inc/Prostopadloscian.hh
	g++ ${CPPFLAGS} -o obj/Prostopadloscian.o src/Prostopadloscian.cpp

inc/Prostopadloscian.hh: inc/Obiekt3D.hh
	touch inc/Prostopadloscian.hh


clear:
	rm -f obj/*.o Dron