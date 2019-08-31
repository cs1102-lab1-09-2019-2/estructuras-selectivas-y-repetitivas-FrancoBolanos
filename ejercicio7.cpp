#include <iostream>

using namespace std;

int main() {
    int P, autorizacion, CITV, SOAT;


    do {
    cout<<"Ingresar numero de identificaciòn vàlido: ";
    cin>>P;
    } while (P<=11111111 or P>=99999999);

    autorizacion=P%100;
    CITV=(P - autorizacion)/100%10;
    SOAT=(P - CITV)/1000%10;

    if (SOAT%2==0) {
        cout<<"\nSOAT:Vigente\n";
    } else {
        cout<<"\nSOAT:Vencido\n";
    }
    if (CITV%2==0) {
        cout<<"CITV:Vigente\n";
    } else {
        cout<<"CITV:Vencido\n";
    }
    if (autorizacion%3==0) {
        cout<<"AUTORIZADO:Si\n";
    } else {
        cout<<"AUTORIZADO:No\n";
    }
    cout<<endl;
    return 0;
}

