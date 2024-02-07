#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
}

double Katutaso::laskeKulutus(double)
{
    cout << "Kulutus 404" << endl;
}

void Katutaso::maarita(int asukasmaara,int neliot)
{
    asukasmaara = 2;
    neliot = 100;

    cout << "Asunto maaritetty: asukkaita= " << asukasmaara
         << " " << "nelioita= " <<  neliot << endl;
}
