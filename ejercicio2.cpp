#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Ingresar tamaño del cuadrado:\n";
    cin>>n;
    for (int i=0; i< n; ++i) {
        for (int j=0; j < n; ++j) {
            if (i == 0 or i == n-1 or j == 0 or j==n-1 or i==j) {
                    cout << "*";
            } else {
                    cout << " ";
            }
        }
            cout << endl;
    }
    return 0;
}