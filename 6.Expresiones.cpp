#include <iostream>
using namespace std;

int main()
{
	
	float a,b,resultado=0;
	cout<<"Digite a: ";cin>>a;
	cout<<"Digite b:";cin>>b;
	
	resultado=(a/b)+1;
	
	cout.precision(2); //para redondear numeros 
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
		
}
