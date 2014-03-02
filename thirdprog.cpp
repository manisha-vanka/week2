 /*given a single, sorted linked list convert that into a single, sorted, circular
 linked list. for example 1->2->3->NULL should be 1->2->3->1*/
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
node *first;
public:linklist()
{
first=NULL;}
void insert(int x);
void convert();
void display();
};
void linklist::convert()
{
   node *temp;temp=first;
   while (temp->link)temp=temp->link;
   temp->link=first;
}
void linklist::insert(int x)
{
node *temp=new node();
temp->data=x;
if(first==NULL){temp->link=NULL;
first=temp;}
else
{node *t,*p;
t=first;if(first->data>x){temp->link=first;first=temp;}
else{
while(t){if(t->data<x){p=t;t=t->link;}}
p->link=temp;
temp->link=t;
}}
}
void linklist::display()
{
node *temp;
temp=first;
cout<<temp->data;
temp=temp->link;
cout<<"->";
while(temp!=first)

{
cout<<temp->data;
cout<<"->";
temp=temp->link;
}
cout<<temp->data;
}
int main()
{
linklist ll;
ll.insert(3);
ll.insert(2);
ll.insert(5);
ll.convert();
ll.display();
}


