#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
int main() {
    node*head=NULL;
    int poss;
    if(poss==0){
    if(head==NULL)
    {
     delete head;
    }
    else
    {
        node*temp=head;
        head=head->next;
        delete temp;
        head->prev=NULL;
    }
}
    else{
        node*curr=head;
        while(--poss)
        {
            curr=curr->next;

        }
        if(curr->next=NULL){
        curr->prev->next=NULL;
        delete curr;
        }
        else{
            curr->prev->next=curr->next;
            curr->next->prev=curr->prev;
        }
    }
}
