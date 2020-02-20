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

void DeleteAtTail(node*&head)
{
	node* temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	delete temp->next;
	temp->next=NULL;
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

	DeleteAtTail(head);
		DeleteAtTail(head);

	print(head);

	return 0;
}