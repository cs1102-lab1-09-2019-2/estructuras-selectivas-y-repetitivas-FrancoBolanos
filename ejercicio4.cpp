#include <iostream>

using namespace std;

void menu(){
    cout<<"Tipo de entrada\n";
    cout<<"1. Super Vip     precio 212\n";
    cout<<"2. Vip           precio 170\n";
    cout<<"3. Preferencial  precio 136\n";
    cout<<"4. General       precio 59\n";

}

int main() {
    int opcion, precio=0;
    double precio_dscto, proceso;
    char cliente;
    do {
        menu();
        cout<<"Seleccione el tipo de entrada: ";
        cin>>opcion;
    } while (opcion<1 or opcion>4);
    do {
        cout<<"Es cliente claro <S, s, N, n>: ";
        cin>>cliente;
    } while (cliente !='S' and cliente !='s' and cliente!='N' and cliente!='n');

    switch (opcion) {
        case 1: precio=212;
        break;
        case 2: precio=170;
        break;
        case 3: precio=136;
        break;
        case 4: precio=59;
        break;
        default: break;
    } if (cliente=='S' or cliente=='s') {
        precio_dscto=precio*0.8;
        proceso=precio_dscto*100;
        precio_dscto=proceso/100;
        cout<<"Monto a pagar: "<<precio_dscto<<"\n";
    } else {
        cout<<"Monto a pagar: "<<precio<<"\n";
    }
    return 0;
}