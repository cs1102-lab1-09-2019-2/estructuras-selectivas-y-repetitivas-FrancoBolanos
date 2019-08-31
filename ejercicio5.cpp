#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    double N,xi,sumatoria=0,sumatoria_cuadrada=0, d_estandar;
    int i=0;

    cout<<"N: ";
    cin>>N;
    while (i<N) {
        cout<<"x"<<i+1<<": ";
        cin>>xi;
        sumatoria+=xi;
        sumatoria_cuadrada+=pow(xi,2);
        i++;
    }
    d_estandar=sqrt((sumatoria_cuadrada/N)-(pow(sumatoria/N,2)));
    cout<<"sd: "<<d_estandar<<"\n";
    return 0;
}