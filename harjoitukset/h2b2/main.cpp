#include <iostream>
#include "tuote.h"
#include <vector>

using namespace std;

int main()
{
    /*//tehtävä2 alkaa
    vector<Tuote> tuoteLista;
    tuoteLista.emplace_back("Taulu-tv",1250.99);
    tuoteLista.emplace_back("Kahvinkeitin",79.99);
    tuoteLista.emplace_back("Sohva", 2799);

    for(Tuote a : tuoteLista){
        a.tulostaTiedot();
    }
    //tehtävä2 loppuu
    */
    vector<Tuote> tuoteLista;
    string annettu_nimi;
    double annettu_hinta;
    for(int x=1; x<=5; x++){
        cout<<"nimi: ";
        cin>>annettu_nimi;
        cout<<"hinta: ";
        cin>>annettu_hinta;
        tuoteLista.emplace_back(annettu_nimi, annettu_hinta);
    }

    for(Tuote a: tuoteLista){
        a.tulostaTiedot();
    }

    return 0;
}
