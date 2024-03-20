#include<iostream>
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

void count(struct node* p)
{
    int c = 0;
    while (p != NULL)
    {
        c = c + 1;
        p = p->next;
    }
    cout << "the number of nodes are: " << c << endl;
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
    // cout << "the max of nodes is: " << m << endl;
    // x = p->data;
}



int main()
{
    int A[] = { 3,5,7,10,15 };
    create(A, sizeof(A) / 4);
    // disp(first);
    count(first);
    sum(first);
    max(first);
    search(first, 8);
    return 0;
}