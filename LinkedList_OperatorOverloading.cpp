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
	cout<<endl;
}
void Input(node*&head)
{
	int data;
	cin>>data;
	while(data!=-1)
	{
		InsertAtHead(head,data);
		cin>>data;
	}
	return;
}

istream& operator>>(istream & is,node*&head)
{
	Input(head);
	return is;
}
ostream& operator<<(ostream & os,node*&head)
{
	print(head);
	return os;
}

int main()
{
	node* head=NULL;
	cin>>head;
	cout<<head;
	
	return 0;
}