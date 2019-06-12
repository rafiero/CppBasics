//funcao referencia
#include<iostream>
using namespace std;

void f(int &i){
	i = 10;
}

int main(){
    int j = 16;
    
    f(j);
    cout<<j;
    
}
