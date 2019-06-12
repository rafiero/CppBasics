//alocacao de memoria malloc
//igual C, se for usar malloc melhor usar C
#include<iostream>
using namespace std;

int main(){
	int *s = (int *)malloc(sizeof(int) * 10);
	s[1] = 12345;
	cout<<s[1]<<endl;
	free(s);
	cout<<s[1]<<endl;
	
}
