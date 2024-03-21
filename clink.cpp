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
    head->next = head; //! used to be null in single ll.
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


void insert(struct node* p, int index, int x)
{
    node* t;
    int i;
    if (index == 0)
    {
        t = new node;
        t->data = x;
        if (head = NULL)
        {
            head = t;
            head->next = head;
        }
        else
        {
            while (p->next != head)p = p->next;
            p->next = t;
            t->next = head;
            head = t;
        }
    }
    else {
        for (i = 0;i < index - 1;i++)p = p->next;
        t = new node;
        t->data = x;
        t->next = p->next;
        p->next = t;

    }
}


int delt(struct node* p, int index)
{
    node* q;
    int i, x;

    if (index == 1) {
        while (p->next != head)p = p->next;
        x = head->data;
        if (head == p) {
            free(head);
            head = NULL;
        }
        else {
            p->next = head->next;
            free(head);
            head = p->next;
        }
    }
    else {
        for (i = 0;i < index - 2;i++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        x = q->data;
        free(q);

    }
    return x;
}




int main()
{
    int A[] = { 2,3,4,5, 6 };
    create(A, 5);
    // insert(head, 2, 22);
    delt(head, 5);
    disp(head);

}