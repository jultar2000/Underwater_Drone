#include "Wektor.cpp"



template class Wektor<double,3>;

template std::istream & operator >> (std::istream &Strm, Wektor<double,3> & Wek);

template std::ostream& operator << (std::ostream &Strm, const Wektor<double,3> &Wek);




template class Wektor<double,5>;

template std::istream & operator >> (std::istream &Strm, Wektor<double,5> & Wek);

template std::ostream& operator << (std::ostream &Strm, const Wektor<double,5> &Wek);


