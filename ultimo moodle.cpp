#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float A, R;
    
    cin >> R;
    
    A = 3.14159 * (pow (R, 2));
    
    
    cout << fixed << setprecision (4);
    cout << "A="<< A << endl;
    
    
    return 0;
}