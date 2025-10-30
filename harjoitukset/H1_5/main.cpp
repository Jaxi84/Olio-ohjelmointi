#include <iostream>

using namespace std;
int tuplaa(int a);
void luvunTulostus(int);


int main() {
    int luku;
    int tulos;
    cout << "Anna kokonaisluku: " << endl;
    cin >> luku;
    tulos=tuplaa(luku);
    luvunTulostus(tulos);
    return 0;
}

int tuplaa(int a) { return 2 * a; }

void luvunTulostus(int b){
    cout << "Luku tuplattuna = " << b << endl;

}
