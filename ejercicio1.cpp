#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n_alumnos, contador=0;
    int PC1, PC2, PC3, PC4, PY, E1, E2;
    float promedio;
    string mensaje;
    int opcion;


    do {
        cout<<"Numero de alumnos: ";
        cin>>n_alumnos;
    } while (n_alumnos<=3 or n_alumnos>30);

    while (contador<n_alumnos) {
        contador++;
        cout << "\nAlumno numero " << contador;
        do {
            cout << "\nPractica 1: ";
            cin >> PC1;
        } while (PC1 < 0 or PC1 > 20);
        do {
            cout << "Practica 2: ";
            cin >> PC2;
        } while (PC2 < 0 or PC2 > 20);
        do {
            cout << "Practica 3: ";
            cin >> PC3;
        } while (PC3 < 0 or PC3 > 20);
        do {
            cout << "Practica 4: ";
            cin >> PC4;
        } while (PC4 < 0 or PC4 > 20);
        do {
            cout << "Proyecto: ";
            cin >> PY;
        } while (PY < 0 or PY > 20);
        do {
            cout << "Examen 1: ";
            cin >> E1;
        } while (E1 < 0 or E1 > 20);
        do {
            cout << "Examen 2: ";
            cin >> E2;
        } while (E2 < 0 or E2 > 20);

        promedio=(0.05*PC1+0.1*PC2+0.1*PC3+0.15*PC4+0.2*PY+0.2*E1+0.2*E2);
        cout<<"\nSu promedio es "<<promedio<<"";

        if (promedio<=20 and promedio>=12) {
            cout<<"\nUD asistirá al";
        }
        if (promedio>=18 and promedio<=20) {
            cout<<"ACM – ICPC International Collegiate Programming Contest\n";
        } else if (promedio>=15 and promedio<=17.99) {
            cout<<"Imagine Cupn\n";
        } else if (promedio>=12 and promedio<=14.99) {
            cout<<"Hackathon de Miraflores\n";
        } else if (promedio<12) {
            cout<<"\nNecesita mejorar\n";
        }
    }
    return 0;
}