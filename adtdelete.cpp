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

void Append(struct Array* arr, int x)
{
    if (arr->len < arr->size)
    {
        arr->A[arr->len++] = x;

    }
}

void Insert(struct Array* arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->len)
    {
        for (i = arr->len;i > index;i--)
        {
            arr->A[i] = arr->A[i - 1];
            arr->A[index] = x;
            arr->len++;
        }
    }
}

int Delete(struct Array* arr, int index)
{
    int x = 0;
    int i;

    if (index >= 0 && index <= arr->len - 1)
    {
        x = arr->A[index];

        for (i = index;i < arr->len - 1;i++)
        {
            arr->A[i] = arr->A[i + 1];
        }

        arr->len--;
        cout << "the number going to be deleted is:" << endl << x << endl;
        return 0;
    }
    return 0;
}

int main()
{
    Array arr = { { 2,3,4,5,6 },10,5 };
    Delete(&arr, 3);
    Display(arr);
    return 0;

}