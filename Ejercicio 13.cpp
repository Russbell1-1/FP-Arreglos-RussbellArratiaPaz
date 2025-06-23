#include<iostream>
using namespace std;

void mcpy(char a[],char b[]){
	int i=0;
	while(b[i]!='\0'){a[i]=b[i];i++;}
	
}

int main(){
	char a[100],b[100];
	cout<<"Cadena origen: ";
	cin.getline(b,100);
	cout<<"Cadena donde que se reemplazara: ";
	cin.getline(a,100);
	mcpy(a,b);
	cout<<"\n--- Resultado ---"<<endl;
	cout<<"Cadena original: "<<b<<endl;
	cout<<"Cadena reemplazada: "<<a<<endl;
	return 0;
}
