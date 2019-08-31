#include <iostream>

using namespace std;

int main() {
    int N;
    cout<<"N: ";
    cin>>N;
    for (int i=1; i< N+1; ++i) {
        for (int j=1; j < N+1; ++j) {
            if (i%2==0){
                if (i%2==0 and j%2==0) {
                    cout << "#";
                } else {
                    cout << "@";
                }} else {
                if (i%2==0 or j%2==0) {
                    cout << "@";
                } else {
                    cout << "#";
                }}}cout << endl;}
    return 0;
}
