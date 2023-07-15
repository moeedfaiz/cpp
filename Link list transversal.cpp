#include<iostream>
using namespace std;
struct node
{
	int data;
	node * next;
};
void search(node * n , int num)
{
	while(n->data != num)
	{
		n=n->next;
		if(n==NULL)
		{
			cout<<"Data Not Found"<<endl;
			break;
		}
	}
	if(n->data = num)
	{
		cout<<"Data is found!"<<endl;
	}
}
int main()
{
	node* head = new node;
	node* n1 = new node;
	node* n2 = new node;
	node* n3 = new node;
	head->data = 1;
	n1->data = 2;
	n2->data = 3;
	n3->data = 4;
	head->next=n1;
	n1->next=n2;
	n2->next=n3;
	n3->next=NULL;
	
	search(head , 4);
	
	search(head , 131);
}
