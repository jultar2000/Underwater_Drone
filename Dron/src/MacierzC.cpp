#include "Macierz.cpp"






template class Macierz<double,3>;

template std::istream & operator >> (std::istream &Strm, Macierz<double,3> & Wek);

template std::ostream& operator << (std::ostream &Strm, const Macierz<double,3> &Wek);



template class Macierz<double,5>;

template std::istream & operator >> (std::istream &Strm, Macierz<double,5> & Wek);

template std::ostream& operator << (std::ostream &Strm, const Macierz<double,5> &Wek);
