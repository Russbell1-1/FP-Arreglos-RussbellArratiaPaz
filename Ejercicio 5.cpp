#include<iostream>
using namespace std;

int main(){
	int n,x,mn,mx,r1=1,r2=1;
	cout<<"Cantidad de numeros: ";
	cin>>n;
	cout<<"Numero: ";
	cin>>x;
	mn=mx=x;
	for(int i=1;i<n;i++){
		cout<<"Numero: ";
		cin>>x;
		if(x>mx){mx=x;r1=1;}
		else if(x==mx)r1++;
		if(x<mn){mn=x;r2=1;}
		else if(x==mn)r2++;
	}
	cout<<"Mayor: "<<mx<<" Rep: "<<r1<<endl;
	cout<<"Menor: "<<mn<<" Rep: "<<r2<<endl;
	return 0;
}
