#include <iostream>
 
using namespace std;
 
int main() {
 
    int seg, min, hr;
    cin >> seg;
    
    hr = seg / 3600;
    min =(seg % 3600)/ 60;
    seg = (seg % 3600)% 60;
 
    cout << hr <<":" << min<< ":" << seg;
    return 0;
}