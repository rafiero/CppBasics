//Orientacao a objeto III - Sobracaga de operadores
#include<iostream>
using namespace std;


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
	pessoa& operator<<(string s){
		nome+=s;
		return *this;
	}
	
	~pessoa(){
		cout<<"#";
	}	
};

ostream& operator<<(ostream& o, pessoa& p){
	o<<p.leNome();
	return o;
}


int main(){
    pessoa p("Pedro");
    pessoa *pd = new pessoa("Maria");
    
    p<<"abc";
    cout<<p<<endl;
    cout<<*pd<<endl;//pelo que eu entendi o operator fora da classe é pq se trata de um ponteiro
    delete pd;
    
}

