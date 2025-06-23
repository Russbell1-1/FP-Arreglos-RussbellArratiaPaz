#include<iostream>
using namespace std;

void mcat(char a[],char b[]){
	int i=0;
	while(a[i]!='\0')i++;
	int j=0;
	while(b[j]!='\0'){a[i]=b[j];i++;j++;}
	a[i]='\0';
}

int main(){
	char a[100],b[100];
	cout<<"Cadena 1: ";
	cin.getline(a,100);
	cout<<"Cadena 2: ";
	cin.getline(b,100);
	mcat(a,b);
	cout<<"Resultado: "<<a<<endl;
	return 0;
}
