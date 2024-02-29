#include<iostream>
using namespace std;



struct rectangle
{
  int bread;
  int len;

};


int main(){
    // usual way

    // struct rectangle r={10,5};
    // struct rectangle *p=&r;


    // cout<<p->len<<endl;
    // cout<<p->bread<<endl;


  // how to create object in heap 

    struct rectangle *p;
    p = new rectangle;

    p->bread=15;
    p->len=10;

    cout<<p->len<<endl;
    cout<<p->bread<<endl;

}
