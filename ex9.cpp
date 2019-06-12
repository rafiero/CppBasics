//alocacao nem delete
#include<iostream>
using namespace std;

struct x{
	int a;
	float y;
}*p;

int main(){
    int *s = new int[10];
    s[1] = 12345;
    cout<<s[1]<<endl;
    delete s;
    cout<<s[1]<<endl;
    
    p = new x;
    p->a = 10;
    p->y = 12.34;
    cout<<p->a<<endl<<p->y<<endl;
    delete p;
    cout<<p->a<<endl<<p->y<<endl;
}
