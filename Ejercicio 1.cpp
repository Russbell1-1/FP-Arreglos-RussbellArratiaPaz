#include<iostream>
using namespace std; 

int main(){
	char Oracion[1000];
	
	cout<<"Ingrese la oracion: ";
	cin.getline(Oracion,1000);
	
	Oracion[0]=toupper(Oracion[0]);
	
	for (int i=1;Oracion[i]!='\0';i++){
		if (Oracion[i]==' '){
			Oracion[i+1]=toupper(Oracion[i+1]);
		}
	}
	
	cout<<Oracion<<endl;
	
	return 0;
}
