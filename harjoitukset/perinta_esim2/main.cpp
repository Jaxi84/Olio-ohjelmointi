#include "pesukone.h"
#include "televisio.h"
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

int main()
{
    Tuote objTuote("Sohva",999.99);
    Televisio objTelevisio("TV",850,55);
    Pesukone objPesukone("Pyykkikone",340.49, 1400, 10);
    objTuote.tulostaTiedot();
    objTelevisio.tulostaTiedot();
    objPesukone.tulostaTiedot();

    vector<Televisio> tvLista;
    tvLista.emplace_back("LG TV",999,75);
    tvLista.emplace_back("Samsung TV",1999,88);
    tvLista.emplace_back("Philips TV",699,60);

    cout<<"Televisio lista:"<<endl;
    for(Televisio tv: tvLista){
        tv.tulostaTiedot();
    }

    vector<Tuote*> tuoteLista;
    tuoteLista.push_back(&objTuote);
    tuoteLista.push_back(&objPesukone);
    tuoteLista.push_back(&objTelevisio);

    cout<<"Tuote lista:"<<endl;
    for(auto tuote: tuoteLista){
        tuote->tulostaTiedot();
    }
    //auto sanan ansiosta kääntäjä tunnistaa olion luokan
    //emplace_back luodana olio samantien
    //push_back jos olio on luotu etukäteen

    //smart pointterin käyttö
    vector<unique_ptr<Tuote>> tuoteVektori;
    tuoteVektori.emplace_back(make_unique<Tuote>("Tuoli",49));
    tuoteVektori.emplace_back(make_unique<Televisio>("Samsung",1999,99));
    tuoteVektori.emplace_back(make_unique<Pesukone>("AEG",499,1400,10));

    cout<<"Smart pointer esimerkki:"<<endl;
    for(auto& olio: tuoteVektori){
        olio->tulostaTiedot();
    }

    return 0;
}
