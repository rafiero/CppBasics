//override
#include<iostream>
using namespace std;

struct pessoa{
	string nome;
};

pessoa& operator+=(pessoa &p1, pessoa &p2){
	p1.nome = p1.nome +p2.nome;
	return p1;
}
int main(){
	struct pessoa p1, p2;
	
	p1.nome = "JOAO";
	p2.nome = "MARIA";
	p1+=p2;   
    cout<<p1.nome<<endl;
}
