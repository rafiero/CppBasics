//operador &
#include<iostream>
using namespace std;

int &f(){
	static int i = 0;
	return i;
}

int main(){
	
    f() = 20;  // i = 20
    f()+=2; // i=i+2
    cout<< f();
    
    
}
