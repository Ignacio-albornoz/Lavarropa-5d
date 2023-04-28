#include <iostream>

using namespace std;

//tipoDeVariable nombreVariable = valorInicial

int main(){
    
    int N, LA, LB, SB, SA;

    cin >> N;
    cin >> LA >> LB;
    cin >> SA >> SB;

    if(N >= LA && N <= LB && N >= SA && N <= SB ){
        cout << "Posible" << endl;
    } else {
        cout << "Imposible" << endl;
    }
}