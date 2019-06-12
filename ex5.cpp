//override
#include<iostream>
using namespace std;

int dobro(int i){
	return 2*i;
}

float dobro(float i){
	return 2*i;
}

int main(){
	float f = 2.51;
	int i =10;
    
    cout<< dobro(f)<<endl<<dobro(i);
    
    
    
}
