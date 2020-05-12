#include<iostream>
using namespace std;


struct node {
	int data;
	node* right;
	node* left;
};

node* createnode(int n){
	node * temp=new node();
	temp->data=n;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node* root=createnode(20);


node* insert(node* d,int n){
	if(d==NULL){
		node* temp=createnode(n);
		return temp;
	}
	else if(n < d->data){
		d->left=insert(d->left,n);
	}
	else if(n > d->data){
		d->right=insert(d->right,n);
	}
	return d;
}
void preorder(node* n){
	if(n!=NULL){
		
		preorder(n->left);
		cout<<n->data<<endl;
		preorder(n->right);
	}
}
	
void search(int o){
		node* temp=root;
		if(o==root->data){
			cout<<"ROOT";
		}
		else{
			cout<<"ROOT ";
			int k=root->data;
			while(k!=o){
				if(o<k){
					cout<<"L ";
					temp=temp->left;
					k=temp->data;
				}
				else{
					cout<<"R ";
					temp=temp->right;
					k=temp->data;
				}
			}
		}
	}

int main(){
	int a;
	string j;
	//cin>>a;
	
		node* n1=insert(root,15);
		node* n2=insert(root,27);
		node* n3=insert(root,12);
		node* n4=insert(root,24);
		node* n5=insert(root,29);
		node* n6=insert(root,49);
		node* n7=insert(root,59);
		node* n8=insert(root,9);
		//node* n6=insert(root,210);
	
	node* k=root;
	preorder(k);
	search(24);
}
