#ifndef KATUTASO_H
#define KATUTASO_H
#include <iostream>
using namespace std;
#include "kerros.h"

class Katutaso : public Kerros
{
public:
    Katutaso();
    virtual void maaritaAsunnot(void) override;
    double laskeKulutus(double);

private:
    Asunto * as1 = new Asunto();
    Asunto * as2 = new Asunto();

};

#endif // KATUTASO_H
