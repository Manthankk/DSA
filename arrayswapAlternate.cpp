#include<iostream>
using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<< " ";
	}
}

void swapAlternate(int arr[],int size){
	for(int i=0;i<size;i+=2){
		if(i+1<size){
			swap(arr[i],arr[i+1]);
		}
	}
}

int main(){
	
	int even[8]={5,2,4,6,8,1,66,9};
	int odd[5]={11,44,55,22,33};
	
	swapAlternate(even,8);
	printArray(even,8);
	
	return 0;
	
	
}
