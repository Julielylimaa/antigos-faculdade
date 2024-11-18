#include<iostream>
#include<climits>

using namespace std;

void func1(){

	cout << "Inside Func1" << endl;
	
	for(int i = 0; i < INT_MAX; i++);
	
}
void func3(){

	cout << "Inside Func3" << endl;
	
	for(int i = 0; i < INT_MAX; i++);
	
}
void func2(){

	cout << "Inside Func2" << endl;
	
	for(int i = 0; i < INT_MAX; i++);
	
	func3();
}

int main()
{
	cout << "Inside main" << endl;
	
	for(int i = 0; i < INT_MAX; i++);
	
	func1();
	func2();
	
	cout<<"Fim da main"<<endl;	
	return 0;
}
