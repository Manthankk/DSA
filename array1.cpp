#include<iostream>
using namespace std;

void printArray(int arr[],int size){
	cout<<"printing the array"<<endl;
	for(int i=0;i<size;i++){
	cout<<arr[i]<< " ";
	}
	cout<<"printing Done"<<endl;
	}
int main(){
	int number[15];
	cout<<"value at 14 index "<<number[14]<<endl;
	int second[3]={5,7,11}; 
	cout<<"value at second index"<<second[2]<<endl;
	int third[15]={2,7};
	
	int n = 15;
//	cout<<"printing the array"<<endl;
//	for(int i=0;i<n;i++){
//		cout<<third[i]<<" ";
//	}
printArray(third,15);
	cout<<endl<<"Everyrthing is fine"<<endl;
	return 0;
	
int fifth[10]={1};
n=10;
printArray(fifth,10);
int fithSize=sizeof(fifth)/sizeof(int);
cout<<"size of fifth "<<fithSize<<endl;
cout<<endl<<"everything is fine "<<endl;


char ch[5]={'a','b','c','d','e'};
cout<<ch[3] <<endl;

cout<<"printing the array"<<endl;
	for(int i=0;i<5;i++){
	cout<<ch[i]<< " ";
	}
	cout<<"printing Done"<<endl;
	

	return 0;
}


