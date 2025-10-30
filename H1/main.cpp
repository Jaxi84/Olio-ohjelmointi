#include <iostream>

using namespace std;
int a, b;
float result;
void calcSum(int a, int b);
void calcDiv(int a, int b);
int retSum(int a, int b);
float retDiv(int a, int b);

int main()
{

    cout << "Anna ensimmainen luku" << endl;
    cin >>a;
    cout << "Anna toinen luku" << endl;
    cin >>b;
    cout <<"eka luku: "<<a<<", toka luku: "<<b<< endl;
    calcSum(a, b);
    calcDiv(a, b);
    cout <<"retSUM palauttaa summan: " << retSum(a, b) << endl;
    cout <<"retDiv palauttaa seuraavan osamaaran " << endl;

    try {
        result = retDiv(a,b);
        cout << a << "/" <<  b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }
    return 0;
}

void calcSum(int a, int b){
    int c = a+b;
    cout<<"lukujen "<<a<<" ja "<<b<<" summa on: "<<c<<endl;
}


void calcDiv(int a, int b) {
    //    if (b <= 0) {
    //        throw runtime_error("jakaja ei saa olla negatiivinen."); //tai nolla, eli jakajan pitää olla suurempi kuin nolla
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla.");
    } else {
        int c = a / b;
        cout << "lukujen " << a << " ja " << b << " jakojaannos on: " << c << endl;
    }
}


int retSum(int a, int b){
    return a + b;
}

float retDiv(int a, int b){
    return (float)a / b;
}

