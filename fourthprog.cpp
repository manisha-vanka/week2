 /*given a single, sorted, circular linked list and a value, insert the value as 
a new node at the appropriate location (to keep the linked list sorted). example
 1->2->4->1 and value 3 output shoudl be 1->2->3->4->1*/
 #include<iostream>
using namespace std;
class linklist;
class node
{
friend class linklist;
int data;
node *link;
};
class linklist
{
node *head;
public:linklist()
{
head=NULL;}
void insert(int x);
void display();
};
void linklist::insert(int x)
{
node *temp=new node();
temp->data=x;
if(head==NULL){
head=new node();
head->link=temp;
temp->link=head;}
else
{node *t,*p;
t=head->link;
while(t!=head){if(t->data<x){p=t;t=t->link;}}
p->link=temp;
temp->link=t;
}
}
void linklist::display()
{
node *temp;
temp=head->link;
while(temp!=head)
{
cout<<temp->data;
cout<<"->";
temp=temp->link;
}
cout<<head->link->data;
}
int main()
{
linklist ll;
ll.insert(1);
ll.insert(2);
ll.insert(3);
ll.insert(4);
ll.display();
}


