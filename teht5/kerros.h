#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>
using namespace std;

class Kerros
{
public:
    Kerros();
    virtual void maaritaAsunnot(void);
    double laskeKulutus(double);

private:
    Asunto * as1 = new Asunto();
    Asunto * as2 = new Asunto();
    Asunto * as3 = new Asunto();
    Asunto * as4 = new Asunto();
};

#endif // KERROS_H
