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

void InsertAtTail(node*&head,int data)
{
	if(head==NULL)
	{
			InsertAtHead(head,data);
			return;
	}
	node* tail=head;
	while(tail->next!=NULL)
	{
		tail=tail->next;
	}
		node* n=new node(data);
		tail->next=n;
}

void InsertAtMiddle(node*&head,int data,int p)
{
	if(head==NULL||p==0)
	{
		InsertAtHead(head,data);
		return;
	}
	if(p>Length(head))
	{
		InsertAtTail(head,data);
		return;
	}
	else
	{
		node* mid=head;
	int temp=0;
	while(temp!=p)
	{
		temp++;
		mid=mid->next;
	}
	node* n=new node(data);
	n->next=mid->next;
	mid->next=n;
	}
}
bool Search(node*head,int key)
{
	if(head==NULL)
	{
		return false;
	}
	else if(head->data==key)
	{
		return true;
	}
	else
	{
		return Search(head->next,key);
	}
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

	//print(head);
		if(Search(head,5))
	{
		cout<<"Element Found"<<endl;
	}
	else cout<<"Element Not Found"<<endl;
	return 0;
}