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


//! bomboclat
//* first part is to do insertion of a number in a an
//* already sorted array. 

void insort(struct Array* arr, int x)
{
    int i = arr->len - 1;
    if (arr->len == arr->size)
        return;
    while (i >= 0 && arr->A[i] > x) {
        arr->A[i + 1] = arr->A[i];
        i--;

    }
    arr->A[i + 1] = x;
    arr->len++;
}

int issorted(struct Array arr)
{
    int i;
    for (i = 0;i < arr.len - 1;i++)

        if (arr.A[i] > arr.A[i + 1])
        {
            cout << "not sorted" << endl;
            cout << "it is not sorted at: " << arr.A[i] << endl;
            return 0;
        }
    return 1;
}



int main()
{
    Array arr = { {2,3,4,9,5,6},10,5 };

    insort(&arr, 8);
    issorted(arr);
    Display(arr);

}