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
int main()
{
    node *head = NULL;
    int arr[] = {3, 4, 5, 7, 8,9,11};
    for (int i = 0; i < 7; i++)
    {

        int poss;
        if (poss == 0)
        {
            if (head == NULL)
            {
                head = new node(arr[i]);
            }
            else
            {
                node *temp = new node(arr[i]);
                temp->next = head;
                head->prev = temp;
                head = temp;
            }
        }
        else
        {
            node *curr = head;
            while (--poss)
            {
                curr = curr->next;
            }
            if (curr->next = NULL)
            {
                node *temp = new node(arr[i]);
                temp->prev = curr;
                curr->next = temp;
            }
            else
            {
                node *temp = new node(arr[i]);
                temp->next = curr->next;
                temp->prev = curr;
                curr->next = temp;
                temp->next->prev = temp;
            }
        }
        node *trav = head;
        while (trav)
        {
            cout << trav->data;
            trav = trav->next;
        }
    }
}
