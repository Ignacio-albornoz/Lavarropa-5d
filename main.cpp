#include <iostream>

using namespace std;


int main(){
    
    int N, LA, LB, SB, SA;

    cout << "Numero de prendas: ";
    cin >> N;
    cout << "Cantidad de prendas MINIMA y MAXIMA aceptada por el secador: ";
    cin >> LA >> LB;
    cout << "Cantidad de prendas MINIMA y MAXIMA aceptada por el lavarropas: ";
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