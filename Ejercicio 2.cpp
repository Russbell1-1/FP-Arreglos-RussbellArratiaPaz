#include<iostream>
using namespace std;

int main(){
	char eco[1000];
	cout<<"Indique las palabras: ";
	cin.getline(eco,1000);
	
	for(int i=0;eco[i]!='\0';i++){
		if (eco[i]!=' '){
			cout<<eco[i];
		} else { 
	        cout<<endl;
		}
	}
	return 0;
}
