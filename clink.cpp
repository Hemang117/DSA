#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;

}*head;


void create(int A[], int n)
{
    int i;
    node* t, * last;
    head = new node;
    head->data = A[0];
    head->next = head;
    last = head;

    for (i = 1;i < n;i++)
    {
        t = new node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;

    }
}

void disp(struct node* h)
{
    do
    {
        cout << h->data << endl;
        h = h->next;
    } while (h != head);

}


int main()
{
    int A[] = { 2,3,4,5, 6 };
    create(A, 5);
    disp(head);

}