#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
};
node* head=NULL;
void inserter(int data)
{
   node *temp1;
   temp1=new node();
   temp1->data=data;
   temp1->next=head;
   head=temp1;

}
void reverser()
{
    node* nexter=head->next;
    node* prev=head;
    head->next=NULL;

    while (nexter!=NULL)
    {
        head=nexter;
        nexter=nexter->next;
        head->next=prev;
        prev=head;
    }
}
void printer(node* head)
{
    node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
void recur_reverse(node *p)
{
    if (p->next==NULL)
        {
            head=p;
            return;
        }
    else
    {
        recur_reverse(p->next);
        node* temp=p->next;
        temp->next=p;
        p->next=NULL;
    }
}
int main()
{
    inserter(1);
    inserter(2);
    inserter(3);
    inserter(4);
    printer(head);
    reverser();
    printer(head);
    recur_reverse(head);
    printer(head);

    return 0;
}

