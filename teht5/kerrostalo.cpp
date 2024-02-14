#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout <<"Kerrostalo luotu"<< endl;
    cout <<"Maaritellaan koko kerrostalon kaikki asunnot"<< endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kokonaisKulutus=eka->laskeKulutus(hinta)+toka->laskeKulutus(hinta)+kolmas->laskeKulutus(hinta);
    return kokonaisKulutus;

}
