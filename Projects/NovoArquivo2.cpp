#include <iostream>

using namespace std; 

int main() 
{
 int i, j,k;
 for(j=7, i=1 ;i<=9; i=i+2){
  for(k=0;k<3;k++){
   cout << "I="<< i <<" J="<<j-k<<endl;
  }
 }
    return 0; 
} 