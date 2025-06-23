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
	int x=a[n-1];
	for(int i=n-1;i>0;i--)
	  a[i]=a[i-1];
	a[0]=x;
	cout<<"Vector rotado: ";
	for (int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
