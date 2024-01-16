#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int etsittava_luku;
int pelaajan_arvaus;
int arvausten_maara = 0;


int game(int maxnum){

    srand(time(0));
    etsittava_luku = rand() % maxnum+1;

    while (true){


        cout << "Arvaa luku: " << endl;
        cin >> pelaajan_arvaus;
        arvausten_maara++;

        if (etsittava_luku < pelaajan_arvaus){
            cout << "Etsittava luku on pienempi." << endl;
        }
        else if (etsittava_luku > pelaajan_arvaus){
            cout << "Etsittava luku on suurempi." << endl;
        }
        else{
            cout << "Etsittava luku on yhtasuuri. Onnea!" << endl;
            break;
        }

        //cout << "etsittava luku on: " << etsittava_luku << endl;
    }
    return arvausten_maara;
}

int main()
{
    int maksimi_luku;
    cout << "Syota korkein etsittava luku: " << endl;
    cin >> maksimi_luku;
    game(maksimi_luku);

    cout << "Arvausten maara: " << arvausten_maara << endl;
    return 0;
}
