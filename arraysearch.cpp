#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of array-";
	cin>>n;
	int arr[n];
	for(int j=0;j<n;j++){
		cin>>arr[j];
	}
	int j1,count=0;
	cout<<endl<<"Enter the value to serch-";
	cin>>j1;
	for(int j=0;j<n;j++){
		if(arr[j]==j1){
			cout<<"The value is at-"<<j+1<<" postion in array"<<endl;
			count++;
		}
		
	}
	if(count==0){
			cout<<"Enter right value next time.";
		}
}
