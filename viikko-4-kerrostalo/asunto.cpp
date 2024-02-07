#include "asunto.h"

Asunto::Asunto()
{
    cout << "Asunto luotu" << endl;
}

void Asunto::maarita(int asukasmaara, int neliot)
{
    asukasmaara = 2;
    neliot = 100;

    cout << "Asunto maaritetty: asukkaita= " << asukasmaara
         << " " << "nelioita= " <<  neliot << endl;
}

double Asunto::laskeKulutus(double)
{
    cout << "Asunnon kulutus, kun hinta=1 on 200" << endl;
}
