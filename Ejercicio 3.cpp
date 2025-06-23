#include<iostream>
using namespace std;

int main(){
	char letra[1000];
	char a;
	int cont=0;
	cout<<"Indique la letra de la que desea saber la concurrencia: ";
	cin>>a;
	cout<<"Indique la cadena de texto: ";
	cin.getline(letra,1000);
	
	for (int i=0;letra[i]!='\0';i++){
		if (letra[i]==a)
		   cont++;
	}
	
	cout<<"La incidencia de la letra es: "<<cont<<endl;
	 return 0;
	 
}
