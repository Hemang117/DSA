#include<iostream>
using namespace std;



struct node
{
    int data;
    node* next;
};


int main()
{
    node* head = NULL;
    node* prev, * current, * next;
    node* n1 = NULL;
    node* n2 = new node;
    node* n3 = new node;
    n1 = new node;
    node* disp;


    // n1 = (struct node*)malloc(sizeof(struct node)); //allocated the memory
    //? use the above for C program 
    //* here we can just use new for the same 


//! error checking conditions
    if (n1 == NULL)
    {
        cout << " memory not available. Overflow1\n";
        exit(1);
    }
    if (n2 == NULL)
    {
        cout << " no memory available. Overflow2\n";
        exit(1);
    }

    if (n3 == NULL) {
        cout << " no memory available. Overflow3\n";
        exit(1);
    }

    //!data defining 
    n1->data = 10;
    n1->next = NULL;
    head = n1;


    n2->data = 20;
    n2->next = NULL;
    n1->next = n2;


    n3->data = 30;
    n3->next = NULL;
    n2->next = n3;


    disp = head;
    while (disp != NULL)
    {
        cout << disp->data << endl;
        disp = disp->next;
    }


    prev = NULL;
    current = head;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
}