//Orientacao a objeto I
#include<iostream>
using namespace std;


//pode substituir struct por class, mas dai as variaveis ficam todas private 
struct pessoa{
	string nome;
	void alteraNome(string s);
	string leNome();
	
};

string pessoa::leNome(){
	return nome;
}

void pessoa::alteraNome(string s){
	nome = s;
}
int main(){
    pessoa p;
    pessoa *pd = new pessoa;
    
    p.alteraNome("Joao");
    cout<<p.nome<<endl;
    cout<<p.leNome()<<endl;
    
    (*pd).alteraNome("MARIA");
    cout<<(*pd).nome<<endl;
    cout<<(*pd).leNome()<<endl;
    
    pd->alteraNome("MARIA");
    cout<<pd->nome<<endl;
    cout<<pd->leNome()<<endl;
    
    
}
