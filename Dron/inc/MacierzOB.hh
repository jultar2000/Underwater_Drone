#ifndef MACIERZOB_HH
#define MACIERZOB_HH


#include "Macierz.hh"



class MacierzOB : public Macierz<double,3> 
{ 
public:

MacierzOB();

MacierzOB(const Macierz<double,3> & M) : Macierz<double,3> (M) {};

};


#endif










