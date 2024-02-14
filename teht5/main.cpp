#include <iostream>
#include <iostream>
#include "asunto.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    Kerrostalo *kerrostalo = new Kerrostalo();
    cout<<"Koko kerrostalon kulutus "<<kerrostalo->laskeKulutus(1)<<endl;
    return 0;

}
