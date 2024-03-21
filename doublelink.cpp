#include<iostream>
using namespace std;

struct node {
    struct node* prev;
    int data;
    struct node* next;

}*first = NULL;

void create(int A[], int n)
{
    node* t, * last;
    int i;

    first = new node;
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for (i = 1;i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}


void disp(struct node* p)
{
    while (p) {
        cout << p->data << endl;
        p = p->next;
    }
}

int length(struct node* p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void insert(struct node* p, int index, int x)
{
    node* t;
    int i;

    if (index == 0)
    {
        t = new node;
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else {
        for (i = 0;i < index;i++)
            p = p->next;
        t = new node;
        t->data = x;
        t->prev = p;
        t->next = p->next;

        if (p->next)p->next->prev = t;
        p->next = t;


    }
}

int delt(struct node* p, int index)
{
    node* q;
    int x = 1, i;

    if (index == 1)
    {
        first = first->next;
        if (first)first->prev = NULL;

        x = p->data;
        free(p);

    }
    else {
        for (i = 0;i < index - 1;i++)
        {
            p = p->next;
            p->prev->next = p->next;
            if (p->next)
                p->next->prev = p->prev;

            x = p->data;
            free(p);
        }
    }return x;
}



int main()
{
    int A[] = { 10,20,30, 40 ,50 };
    create(A, 5);
    delt(first, 1);
    // insert(first, 2, 25);
    disp(first);
}