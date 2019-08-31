#include <iostream>

using namespace std;

double puntaje(double &p, double &t) {
    double PF;
    PF=max(((3*p)/10),(p-((p/250)*t)));
    return PF;
}


int main() {
    double a,b,c,d,PF_A, PF_J;
    do {
    cout<<"Puntaje del problema resuelto por Alessia: ";
    cin>>a;} while (a<=200 or a>=3500);
    do {
    cout<<"Puntaje del problema resuelto por Jasmin: ";
    cin>>b;} while (b<=200 or b>=3500);
    do{
    cout<<"Tiempo que tardò ALessia en reslover el problema: ";
    cin>>c;} while (c<=0 or c>=180);
    do {
    cout<<"Tiempo que tardò Jasmin en resolver el problema: ";
    cin>>d;} while (d<=0 or d>=180);

    PF_A=puntaje(a,c);
    PF_J=puntaje(b,d);

    if (PF_A>PF_J){
        cout<<"\nAlessia\n";
    } else if (PF_J>PF_A){
        cout<<"\nJasmin\n";
    } else {
        cout<<"\nEmpate\n";
    }
    return 0;
}