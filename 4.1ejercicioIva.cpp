#include <iostream>
using namespace std;
int main()
{
	float precio, iva;
	
	cout<<"Digite el precio del producto: ";
	cin>>precio;
	iva = precio * 16 /100;
	iva = precio+iva;
	cout<<"El precio con iva del 16% es:"<<iva;
	
	
	
}
