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
int Length(node*head)
{
	int length=0;
	while(head!=NULL)
	{
		head=head->next;
		length=length+1;
	}
	return length;
}

void InsertAtHead(node*&head,int data)
{

	node* n=new node(data);
	n->next=head;
	head=n;

}
void DeleteAtHead(node*&head)
{
	if(head==NULL)
	{
		return;
	}
	node*p=head;
	head=head->next;
	delete p;
	return;
}


void print(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<endl;
}

int main()
{
	node* head=NULL;
	InsertAtHead(head,4);
	InsertAtHead(head,5);
	InsertAtHead(head,6);
	InsertAtHead(head,7);

	DeleteAtHead(head);

	print(head);

	return 0;
}