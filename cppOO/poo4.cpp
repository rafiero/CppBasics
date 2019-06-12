//Orientacao a objeto III - Descendencia
#include<iostream>
using namespace std;


//quando uma classe herda caracteristicas (campos e funçoes) de outras classes, chamadas superclasses. A clase que herda é chamada de subclasse
//protected só subclasse que podem usar
//construtores da superclasse podem ser chamados na subclasse
//destrutores da superclasse são chamados automaticamente dps dos destrutores da subclasse

class pessoa{
	protected: string nome;
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

class aluno: public pessoa{
	int RA;
	public: aluno(string nome1 = "*", int RA1 = 0){
		nome = nome1;
		RA = RA1;
	}
	int leRA(){
		return RA;
	}
	void alteraRA(int novoRA){
		RA = novoRA;
	}
	~aluno(){
		cout<<"@";
	}
};

int main(){
    aluno a1, a2("Rafael");//sobrecarga de parametros
    aluno *ad = new aluno("Pedro");
    
    a1.alteraRA(123);
    a2.alteraRA(321);
    ad->alteraRA(555);
    
    cout<<a1.leNome()<<endl<<a1.leRA()<<endl;    
    cout<<a2.leNome()<<endl<<a2.leRA()<<endl;    
    cout<<ad->leNome()<<endl<<ad->leRA()<<endl;
    
    delete ad;
}
