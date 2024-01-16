#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int etsittava_luku;
int pelaajan_arvaus;

int arvauspeli(){

    srand(time(0));
    etsittava_luku = rand() % 20+1;

    while (true){

        cout << "Arvaa luku: " << endl;
        cin >> pelaajan_arvaus;

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
}

int main()
{
    arvauspeli();
    return 0;
}
