#include<iostream>
using namespace std;
class node{
	public:
		int data;
		//children
		node* left;
		node* right;
		
		//default constructor;
		node(int val){
			data=val;
			left=NULL;
			right=NULL;
		}
};

class bist{
	public:
		node* root;
		//default;
		bist(){
			root=NULL;
		}
		void insertHelper(node* curr, int value){
			
			//current NULL, insert
			if (curr==NULL){
				curr=new node(value);
				if (root==NULL){
					root=curr;
				}
				
				return;
			}
			//else compare and go to left or right
			else{
				if(curr->data>value){
					if (curr->left==NULL) curr->left=new node(value);	
					else insertHelper(curr->left, value);
				}
				else{
					if (curr->right==NULL) curr->right=new node(value);	
					else insertHelper(curr->right, value);
				}
			}
			//value < current->data   ...   move left  recurse
			//else   ...   move right  recuse
			
		}
		void insert(int value){
			insertHelper(root, value);
		}
		void display2(node* curr){
			//base condition
			if (curr==NULL)return;
			else{
				display2(curr->left);
				cout<<curr->data<<", ";
				display2(curr->right);
			}
		}
		
		void display(){
			display2(root);
		}
		
		node display_Fancy(int spaces){
			//increase the number of spaces
			//dispaly right
			//print the required space
			//display curr
			//display left
			//
		}
		node* search(int value){
			if (root->data==value){
				return root;
			}
			else if()
		}
		//next class- friday
		//height();
		//delNode();
};

int main(){
	bist b1;
	b1.insert(10);
	b1.insert(5);
	b1.insert(-1);
	b1.insert(100);
	b1.insert(7);
	b1.display();
}
