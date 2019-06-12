//output
#include<iostream>
using namespace std;
int main(){
    char *s =  "xxxyyy";
    int i = 16;
    float f = 12.3456789;

	cout<<i;
    cout<< "abcdefghijklmnopqrstuvwxyz"<<endl;

    cout<<i<<endl;
    cout.width(4);
    cout.fill('_');
    cout<<i<<endl;
    cout<<i<<endl;
    cout<<dec<<i<<endl;
    cout.precision(3);
    cout<<scientific<<f<<endl;
    cout<<fixed<<f<<endl;
    
}
