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
void DeleteAtHead(node*&head)
{
	if(head==NULL)
	{
		return;
	}
	node*temp=head;
	head=head->next;
	delete temp;
	return;
}

void DeleteAtMiddle(node*&head,int p)
{
	if(p==1)
	{
		DeleteAtHead(head);
		return;
	}
	node*temp=head;
	int k=1;
	while(k!=p-1)
	{
		temp=temp->next;
		k=k+1;
	}
	delete temp->next;
	temp->next=temp->next->next;
	
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
	DeleteAtMiddle(head,3);
	DeleteAtMiddle(head,1);

	print(head);
	
	return 0;
}