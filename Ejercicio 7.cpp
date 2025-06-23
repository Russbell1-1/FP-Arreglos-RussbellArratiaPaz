#include<iostream>
using namespace std;

int main(){
	int n,a[100];
	cout<<"Cantidad de elementos: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Valor "<<i<<": ";
		cin>>a[i];
	}
	cout<<"Vector invertido: ";
	for(int i=n-1;i>=0;i--)
	cout<<a[i]<<" ";
	return 0;
}
