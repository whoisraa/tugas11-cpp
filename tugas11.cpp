#include <iostream>
using namespace std;

int segitiga(int alas, int tinggi){
	int luas = (alas*tinggi)/2;
	return luas;
}

int main(){
	int a,t;
	cout<<"Inputkan alas segitiga : ";
	cin>>a;
	cout<<"Inputkan tinggi segitiga : ";
	cin>>t;
	cout<<"Luas Segitiga Adalah : "<<segitiga(a,t);
}
