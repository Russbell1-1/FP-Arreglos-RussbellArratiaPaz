#include<iostream>
using namespace std;

void mcpy(char a[],char b[]){
	int i=0;
	while(b[i]!='\0'){a[i]=b[i];i++;}
	a[i]='\0';
}

int main(){
	char a[100],b[100];
	cout<<"Cadena origen: ";
	cin.getline(b,100);
	mcpy(a,b);
	cout<<"Cadena copiada: "<<a<<endl;
	return 0;
}
