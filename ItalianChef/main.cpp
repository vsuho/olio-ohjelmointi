#include "chef.h"
#include <iostream>

using namespace std;

int main()
{
    Chef chef_1("Gordon Ramsay");
    chef_1.makeSalad();
    chef_1.makeSoup();

    Chef chef_2("Anthony Bourdain");
    chef_2.makeSalad();
    chef_2.makeSoup();
    return 0;
}
