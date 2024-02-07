#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
using namespace std;



int main()
{
    //Asunto asunto;
   /* asunto.maarita(2, 100);
    asunto.laskeKulutus(50);
*/



    Katutaso katutaso;
    katutaso.maaritaAsunnot();


    Kerros kerros;
    kerros.maaritaAsunnot();

    //katutaso.maarita(2,100);

    //katutaso.laskeKulutus(50);
   // asunto.maarita(2, 100);




    return 0;
}
