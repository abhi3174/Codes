#include<iostream>
using namespace std;


int arr[]={'a','e','i','o','u'};
int no[]={'1','2','3','4','5','6','7','8','9','0'};//array for other inputs
int main(){
	int i;
	int j=0;
	char x;
	cin>>x;
	cout<<endl<<x;
	for(i=0;i<=5;i++){
		if(arr[i]==x){
			cout<<endl<<"vowel";
			j++;
		}
		else if(no[i]==x){
			cout<<"neither vowel nor constant"<<endl;
			break;
		}
		else{
			cout<<endl<<"consonat";
			break;
		}
	}
	
	
}
