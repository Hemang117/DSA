#include<iostream>
using namespace std;


int main(){
    
    int a = 10;
   
    int &r = a ; /* useful in parameter passing , another name given to a variable.*/
 
    cout<<a<<endl;
    r++;
    cout<<r<<endl;
    cout<<a<<endl;

}