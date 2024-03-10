#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int len;
};

void Display(struct Array arr)
{
    int i;
    cout << "elements are:" << endl;
    for (i = 0;i < arr.len;i++)
    {
        cout << arr.A[i] << endl;
    }
}



int main()
{
    Array arr = { { 2,3,4,5,6 },10,5 };
    cout << LinearIMP(&arr, 5) << endl;
    Display(arr);
    return 0;

}