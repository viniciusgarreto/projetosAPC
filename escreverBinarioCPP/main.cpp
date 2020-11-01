#include <iostream>
#include <vector>

int main() {

    using namespace std;

    int contador;
    int numeroDecimal;
    int numeroBinario[8];
    cin >> numeroDecimal;

    for(contador = 0; contador <= 7 ; contador++){

        if(numeroDecimal >= 1){
            numeroBinario[contador] = (numeroDecimal%2);
            numeroDecimal /= 2;
        }
        else{
            numeroBinario[contador] = 0;
        }
    }

    for( int contador=7;contador>=0;contador--)
    {
        cout<<numeroBinario[contador];
    }
    cout << endl;

    return 0;
}