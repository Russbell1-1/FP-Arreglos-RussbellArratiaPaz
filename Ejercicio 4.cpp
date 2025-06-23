#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n;
	string Nombres[100];
	cout<<"Ingrese la cantidad de nombres: ";
	cin>>n;
	cin.ignore();
	
	for(int i=0;i<n;i++){
		cout<<"Ingrese el nombre: ";
		getline(cin,Nombres[i]);
	} 
	string temp;
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(Nombres[i]>Nombres[j]){
				temp = Nombres[i];
				Nombres[i]=Nombres[j];
				Nombres[j]=temp;
			}
		}
	}
	cout<<"Los nombres ordenados quedarian: "<<endl;
	for (int i=0;i<n;i++){
		cout<<Nombres[i]<<endl;
	}
	return 0;
	
	
}
