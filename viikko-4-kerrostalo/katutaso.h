#ifndef KATUTASO_H
#define KATUTASO_H
#include <iostream>
using namespace std;

#include "kerros.h"
#include "asunto.h"



class Katutaso : public Kerros
{
public:
    Katutaso();
    void maaritaAsunnot();
    double laskeKulutus(double);
   virtual void maarita(int, int);

private:

    Asunto as1;
    Asunto as2;
};

#endif // KATUTASO_H
