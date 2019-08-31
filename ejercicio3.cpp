#include <iostream>

using namespace std;

int mayor(int &x,int &y){
    int resultado=0;
    if (x>y){
        resultado=x;
    } else if (y>x) {
        resultado=y;
    } else if (x==y) {
        resultado=x;
    }
    return resultado;
}

int main() {
    int n, i = 1, a, b;
    cout << "Ingresar cantidad de nùmeros:\n";
    cin >> n;
    cout << "Ingresar nùmeros:\n";
    cin >> b;
    while (i < n) {
        i++;
        cin >> a;
        b = mayor(a, b);
    }
    cout << "El valor máximo es: "<<b<<"\n";
    return 0;
}
