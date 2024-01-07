#include<iostream>
using namespace std;

int main(){
	int a,b;
	
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
	
	char op;
	cout<<"enter the operation you want to perform";
	cin>> op;
	
	switch(op){
		case '+':cout<<(a+b)<<endl;
		break;
		case '-':cout<<(a-b)<<endl;
		break;
		case '*':cout<<(a*b)<<endl;
		break;
		case '/':cout<<(a/b)<<endl; 
		break;
		case '%':cout<<(a%b)<<endl;
		break;
		default:cout<<"default"<<endl;
		break;
	}
	cout<<endl;
	return 0;
	

}
