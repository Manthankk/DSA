#include<iostream>
using namespace std;

bool isPrime(int n){
	//0 no prime
	//1 prime
	for(int i=2;i<n;i++){
		if(n%2==0){
			return 0;
		}
	}
		 return 1;
	
}
int main(){
		int n;
		cin>>n;
		
		if(isPrime(n)){
			cout<<"is a prime no"<<endl;;
		}
		else{
			cout<<"is a non prime no"<<endl;
		}
		
		return 0;
	}

