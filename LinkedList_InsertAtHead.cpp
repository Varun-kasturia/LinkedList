#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node* next;

	node( int d )
	{
		data=d;
		next=NULL;
	}
};

void InsertAtHead(node*&head,int data)
{

	node* n=new node(data);
	n->next=head;
	head=n;

}

void print(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" -> ";
		head=head->next;
	}
}

int main()
{
	node* head=NULL;
	InsertAtHead(head,4);
	InsertAtHead(head,5);
	InsertAtHead(head,6);
	InsertAtHead(head,7);
	print(head);
	return 0;
}