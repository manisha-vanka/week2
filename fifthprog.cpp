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
int search(int x);
void delet(int n);
void display();
};
void linklist::insert(int x)
{
node *temp=new node();
temp->data=x;
if(first==NULL){
temp->link=NULL;
first=temp;}
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
int linklist::search(int x)
{
count=0;
node *temp=first;
while(temp)
{
    if(temp->data==x){
count++;cout<<"element found";return count;}
    
else{count++;
temp=temp->link;}
}
if(!temp){cout<<"element not found\n";return -1;}
return count;
}
void linklist::delet(int n)
{
int i;

node *p,*q;
if(n==1)
{p=first;
first=first->link;
delete p;}
else{
for(i=0,p=first;i<n;i++)
{q=p;
p=p->link;}
q->link=p->link;
delete p;
}}
int main()
{
linklist ll;int s;
ll.insert(1);
ll.insert(2);
ll.insert(3);
ll.insert(4);
ll.display();
s=ll.search(7);
if(s>=1){
ll.delet(s);
ll.display();}


}


