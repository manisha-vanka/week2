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
void insert();
void display();
};
void linklist::insert(int x)
{
node *temp=new node();
temp->data=x;
if(first==NULL)
temp->link=NULL;
first=temp;
else
{
temp->link=first;
first=temp;
}
}
void linklist::display()
{
node *temp;
temp=first;
while(temp)
{
cout<<temp->data;
temp=temp->link;
}
}
int main()
{
linklist ll;
int a,b;
cin>>a;
while(a!=0)
{b=a%10;
ll.insert(b);
a=a/10;
}
}


