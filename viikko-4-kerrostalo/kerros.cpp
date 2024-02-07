#include "kerros.h"

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}

 void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double)
{
    cout << "laskeKulutus" << endl;
    return 0;
}

void Kerros::maarita(int asukasmaara, int neliot)
{
   /* as1.maarita(asukasmaara, neliot);
    as2.maarita(asukasmaara, neliot);
    as3.maarita(asukasmaara, neliot);
    as4.maarita(asukasmaara, neliot);
*/
}
