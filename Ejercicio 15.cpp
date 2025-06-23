#include<iostream>
using namespace std;

int mcmp(char a[],char b[]){
	int i=0;
	while(a[i]!='\0'&&b[i]!='\0'){
		if(a[i]<b[i])return -1;
		if(a[i]>b[i])return 1;
		i++;
	}
	if(a[i]=='\0'&&b[i]=='\0')return 0;
	if(a[i]=='\0')return -1;
	return 1;
}

int main(){
	char a[100],b[100];
	cout<<"Cadena 1: ";
	cin.getline(a,100);
	cout<<"Cadena 2: ";
	cin.getline(b,100);
	int r=mcmp(a,b);
	cout<<"Resultado: "<<r<<endl;
	return 0;
}
