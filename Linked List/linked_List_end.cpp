#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
        data= value;
        next= NULL;

    }
};
int main()
{
    
    node *head ,*tail;
    head=tail= NULL;  
  
    int arr[]={2,3,4,5,6};
    
    for(int i=0;i<5;i++)
    {

        if(head==NULL)
        {
            head=new node(arr[i]);
            tail=head;
        }
        else
        {
            tail->next=new node(arr[i]);
            tail=tail->next;

        }

    }
        
    
    node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
