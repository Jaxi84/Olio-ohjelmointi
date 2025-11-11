#include "tuote.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Tuote> tuoteLista;

    tuoteLista.emplace_back("Lamppu", 40);
    tuoteLista.emplace_back("Leivänpaahdin", 20);
    tuoteLista.emplace_back("TV", 1099);
    tuoteLista.emplace_back("PS5 pro", 749.99);
    tuoteLista.emplace_back("Hiiri", 69.95);

 /*   //asetetaan aluksi kalleimaksi ekan alkion hinta
    double kallein=tuoteLista[0].getHinta();
    int indeksi_kallein=1;

    for(Tuote alkio:tuoteLista){
        if(alkio.getHinta() > kallein){
            kallein=alkio.getHinta();
            indeksi_kallein++;
        }
    }
    cout<<"Kallein tuote="<<tuoteLista[indeksi_kallein].getNimi()<<endl;
    cout<<"sen hinta="<<kallein<<endl;
*/

    //toinen tapa
    double kallein=tuoteLista[0].getHinta();
    int indeksi_kallein=0;

    for(int x=1; x<tuoteLista.size(); x++){
        if(tuoteLista[x].getHinta() > kallein){
            kallein=tuoteLista[x].getHinta();
            indeksi_kallein = x;
        }
    }
    cout<<"Kallein tuote="<<tuoteLista[indeksi_kallein].getNimi()<<endl;
    cout<<"sen hinta="<<tuoteLista[indeksi_kallein].getHinta()<<endl;
    return 0;
}
