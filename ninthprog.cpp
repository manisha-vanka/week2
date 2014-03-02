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
void display();
void median();
};
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
void linklist::median()
{
    int count,i,j;
    node *p,*q;
    for(p=first;p!=NULL;p=p->link)count++;
    if(count%2!=0){
    j=(count+1)/2;
    for(i=1,p=first;i<j;i++){p=p->link;};
    cout<<p->data;}
    else{j=count/2;
    for(i=1,p=first;i<=j;i++)
        {q=p;p=p->link;
    }
    cout<<(p->data+q->data)/2;}
}
void linklist::display()
{
node *temp;
temp=first;
while(temp)

{
cout<<temp->data;
cout<<"->";
temp=temp->link;
}
}
int main()
{
linklist ll;
ll.insert(3);
ll.insert(2);
ll.insert(4);
ll.insert(1);
ll.insert(5);
ll.display();
cout<<"\n";
cout<<"median is ";
ll.median();
}


