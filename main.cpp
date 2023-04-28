#include <iostream>

using namespace std;

//tipoDeVariable nombreVariable = valorInicial

int main(){
    
    int N, LA, LB, SB, SA;

    cin >> N;
    cin >> LA >> LB;
    cin >> SA >> SB;

    if (N >= LA) {
        if (N <= LB) {
            if (N >= SA) {
                if (N <= SB) {
                    cout << "Posible" << endl;
                } else {
                    cout << "Imposible" << endl;
                }
            } else {
                cout << "Imposible" << endl;
            }
        } else {
            cout << "Imposible" << endl;
        }
    } else {
        cout << "Imposible" << endl;
    }

}