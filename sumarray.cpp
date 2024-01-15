#include <iostream>
using namespace std;

int sumArr(int arr[],int n){
int sum=0;
for(int i=0;i,n;i++){
	sum+=arr[i];
}
return sum;
}

int main(){
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"sum of all elements of array"<<sumArr(a,n)<<endl;
}
