#include<iostream>
using namespace std;

int main(){
	int n,a[100],s1=0,s2=0;
	cout<<"Cantidad de elementos: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Valor "<<i<<": ";
		cin>>a[i];
		if(i%2==0)s1+=a[i];
		else s2+=a[i];
	}
	cout<<"Suma posiciones pares: "<<s1<<endl;
	cout<<"Suma posiciones impares: "<<s2<<endl;
	return 0;
}
