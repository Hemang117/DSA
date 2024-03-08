#include<iostream>
using namespace std;

struct rect
{
    int len;
    int bred;


};

int main()
{
    // rect r = { 10,5 };
    // cout << r.bred << endl;
    // cout << r.len << endl;
    // this is the normal way of accessing  elements in a structure using dot operator. 
    // now we will create a pointer. 

    // rect *p=&r;
    // cout<<p->bred<<endl;
    // cout<<p->len<<endl;
    // this is the pointer way 

    // now we will see how to create an object in heap 

    rect* p;
    // p = (struct rect*)malloc(sizeof(struct rect));
    // we can directly use new command for c++
    p = new rect;

    p->bred = 14;
    p->len = 3;

    cout << p->bred << endl;
    cout << p->len << endl;
    return 0;
}