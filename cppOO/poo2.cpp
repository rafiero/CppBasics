//Orientacao a objeto II
#include<iostream>
using namespace std;


//pode substituir struct por class, mas dai as variaveis ficam todas private 
class pessoa{
	string nome;
	public: void alteraNome(string s){
		nome = s;
	}
	public: string leNome(){
		return nome;
	}
	
};

int main(){
    pessoa p;
    pessoa *pd = new pessoa;
    
    p.alteraNome("Joao");
    cout<<p.leNome()<<endl;
    
    (*pd).alteraNome("MARIA");
    cout<<(*pd).leNome()<<endl;
    
    pd->alteraNome("MARIA");
    cout<<pd->leNome()<<endl;
    
    
}
