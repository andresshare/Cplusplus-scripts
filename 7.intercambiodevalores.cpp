#include <iostream>
using namespace std;
 int main()
 {
 	
	 int x,y,aux;
	 cout<<"Digite el valor de x";
	 cin>>x;
	 cout<<"Digite el valor de y";
	 cin>>y;
	 
	 aux= x;
	 x=y;
	 y=aux;
	 
	 cout<<"El  valor es:"<<x<<endl;
	 cout<<"El nuevo valor es:"<<y<<endl;
	 
	 return 0;
 }
