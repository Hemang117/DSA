#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int data;
    node* next;

}*first = NULL;


void create(int A[], int n)
{
    int i;
    node* t, * last;
    first = new node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1;i < n;i++)
    {
        t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

}




void disp(struct node* p)
{
    while (p != NULL)
    {

        cout << p->data << endl;
        p = p->next;

    }

}




void Rdisp(struct node* p)
{
    if (p != NULL)
    {
        cout << p->data << endl;
        Rdisp(p->next);
    }
}



int count(struct node* p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}




void sum(struct node* p)
{
    int s = 0;
    while (p != NULL)
    {
        s = s + p->data;
        p = p->next;
    }
    cout << "the sum of nodes is: " << s << endl;
}




void max(struct node* p)
{
    int m = INT_MIN;
    while (p != NULL)
    {
        if (p->data > m)
        {
            m = p->data;
            p = p->next;
        }
        else
        {
            break;
        }
    }
    cout << "the max of nodes is: " << m << endl;
}



void search(struct node* p, int x)
{
    int c = 0;
    while (p != NULL)
    {
        if (p->data != x)
        {
            c = c + 1;
            p = p->next;
        }
        else
        {
            cout << "element is found at : " << c << endl;
            break;
        }
    }
}


struct node* Lsearch(struct node* p, int key)
{
    struct node* q;  // used for improving linear search. 
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;

    }
    return NULL;
}


void insert(struct node* p, int index, int x)
{
    int i;
    struct node* t;
    if (index < 0 || index>count(p))
        return;

    t = new node;
    t->data = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0;i < index - 1;i++)
        {
            p = p->next;

        }
        t->next = p->next;
        p->next = t;
    }

}


void sortedinsert(struct node* p, int x)
{
    node* t, * q = NULL;

    t = new node;
    t->data = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = t;
    }
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }

    }

}


void delte(struct node* p, int index)
{
    int i;
    struct node* q;

    if (index < 1 || index>count(p))
    {
        cout << "wrong index" << endl;

    }
    if (index == 1)
    {
        q = first;
        first = first->next;
        delete q;

    }

    else
    {
        for (i = 0;i < index - 1;i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        free(p);

    }

}

void rev(struct node* p)
{
    node* q = NULL, * r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;

    }
    first = q;



}


int main()
{

    int A[] = { 10,20,30,40,50 };

    create(A, 5); //* creates the nodes. 
    // count(first);

    // sum(first);

    // max(first);

    // search(first, 5);


    //? for linear search according to Abdul Bari sir, we do smthn like thiss

    // struct node* temp;
    // temp = Lsearch(first, 10);
    // if (temp)
    // {
    //     cout << "key is found at: " << temp->data << endl;
    // }
    // else
    // {
    //     cout << "key not found" << endl;
    // }

    // disp(first);
    //? the above function is inclusive of improvements made for linear search.

    // insert(first, 0, 9);
    // insert(first, 5, 90);
    // insert(first, 2, 13);
    // insert(first, 3, 14);

    // sortedinsert(first, 5);
    // sortedinsert(first, 24);

    // delte(first, 6);

    // rev(first);

    disp(first);

    return 0;
}