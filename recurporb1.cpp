#include<iostream>
using namespace std;

int sum(int n)
{   int s;
    if(n==0)
    return 0;
    return sum(n-1)+n;
}


int main()
{   int r;
    int x=5;
    r=sum(x);
    cout<<r<<endl;
}