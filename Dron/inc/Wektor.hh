#ifndef WEKTOR_HH
#define WEKTOR_HH

#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */

template<class Typ, int SWymiar>
class Wektor
{
protected:
Typ tab[SWymiar];
public:

Wektor();

Typ & operator[] (int index) ;

const Typ & operator[](int index) const ; 

Wektor<Typ,SWymiar> operator+ (const Wektor<Typ,SWymiar> &  W2) const ;

Wektor<Typ,SWymiar> operator- (const  Wektor<Typ,SWymiar> & W2) const ;

Typ operator* (const Wektor<Typ,SWymiar> & W2) const ;

Wektor<Typ,SWymiar> operator* (Typ l2) const ; 

Wektor<Typ,SWymiar> operator/ (Typ l2) const ; 

bool operator== (const Wektor<Typ,SWymiar> & W2) const;

bool operator!= (const Wektor<Typ,SWymiar> & W2) const;

};

template<typename Typ, int SWymiar>
std::istream& operator >> (std::istream &Strm, Wektor<Typ,SWymiar> &Wek);

template<typename Typ, int SWymiar>
std::ostream& operator << (std::ostream &Strm, const Wektor<Typ,SWymiar> &Wek);

typedef Wektor<double,3> Wektor3D;

#endif