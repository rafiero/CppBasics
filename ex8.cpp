//parametros padrao
#include<iostream>
using namespace std;

int soma(int i = 2, int j = 3, int k = 4){
	return i+j+k;
}

int main(){
    cout<<soma()<<endl<<soma(3)<<endl<<soma(3, 4)<<endl<<soma(3, 4, 5)<<endl;    
}
