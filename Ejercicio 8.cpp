#include<iostream>
using namespace std;

int main(){
	int a[10];
	cout<<"Ingrese las 10 cifras:\n";
	for(int i=0;i<10;i++){
		cout<<"Cifra "<<i+1<<": ";
		cin>>a[i];
	}
	bool c=1;
	for(int i=0;i<5;i++)
		if(a[i]!=a[9-i]){
		c=0;
		break;
		}
	
}
