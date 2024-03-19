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

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

void Reverse(struct Array* arr)
{
    int* B;
    int i, j;
    B = (int*)malloc(arr->len * sizeof(int));
    for (i = arr->len - 1, j = 0;i >= 0;i--, j++)
    {
        B[j] = arr->A[i];
    }
    for (i = 0;i < arr->len;i++)
    {
        arr->A[i] = B[i];
    }
}

void Rev2(struct Array* arr)
{
    int i, j;
    for (i = 0, j = arr->len - 1;i < j;i++, j--)
    {
        swap(&arr->A[i], &arr->A[j]);
    }
}

int main()
{
    Array arr = { {2,3,4,5,6},10,5 };
    // Reverse(&arr);
    // Display(arr);
    Rev2(&arr);
    Display(arr);

    return 0;

}