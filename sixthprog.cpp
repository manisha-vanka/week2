/* given a single linked list, print the N element from the end of the linked list.
 example 1->2->3->4->5 and 2, output is 4*/
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
{int count;
node *first;
public:linklist()
{
first=NULL;count=0;}
void insert(int x);
void display();
void delet(int n);
};
void linklist::insert(int x)
{
node *temp=new node();
temp->data=x;
if(first==NULL){count++;
temp->link=NULL;
first=temp;
}
else
{
temp->link=first;
first=temp;count++;
}
}
void linklist::delet(int n)
{int i,s=count-n;
node *p,*q;
if(s==1)
{p=first;
first=first->link;
delete p;}
else{
for(i=0,p=first;i<s;i++)
{q=p;
p=p->link;}
q->link=p->link;
delete p;
}}
void linklist::display()
{
node *temp;
temp=first;cout<<count;
while(temp)
{
cout<<temp->data;cout<<"->";
temp=temp->link;
}
}
int main()
{
linklist ll;
ll.insert(2);
ll.insert(3);
ll.insert(5);
ll.insert(6);
ll.display();
ll.delet(4);
ll.display();}


