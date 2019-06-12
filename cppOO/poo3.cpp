//Orientacao a objeto III - Construtor e Destrutor
#include<iostream>
using namespace std;


//pode substituir struct por class, mas dai as variaveis ficam todas private 
class pessoa{
	string nome;
	public: pessoa(string nome1 = "*"){ //construtor é executado no momento da instanciacao
		nome = nome1;				
	}
	public: void alteraNome(string s){
		nome = s;
	}
	public: string leNome(){
		return nome;
	}
	~pessoa(){
		cout<<"#";
	}
	
};

int main(){
    pessoa p1, p2("Rafael");//sobrecarga de parametros
    pessoa *pd = new pessoa("Pedro");
    
    cout<<p1.leNome()<<endl;    
    cout<<p2.leNome()<<endl;    
    cout<<pd->leNome()<<endl;
    
    delete pd;
}
