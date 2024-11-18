#include <iostream>

using namespace std;

int main(){

    int n, x, soma=0;

    for(n = 1; n <= 6; n++){

        cin >> x;
        if(x > 0)
            soma++;
    }

    cout << soma << "valores positivos" << endl;

    return 0;
}