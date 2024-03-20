#include<iostream> 
using namespace std;


void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}

void disp(int A[], int p) {
    int i;
    for (i = 0;i < p;i++)
    {
        cout << A[i] << endl;
    }
}

//! 1. Bubble sort:  A simple sorting algorithm that repeatedly steps through the list. 
//* o(n^2) time  complexity, where n is the number of items being sorted. 
//? (n-1) passes and comparisons and swaps for respective pass, 1st pass sorts 1 element (ascending or descending) 
//? n(n-1)/2 is the total number of comparisons 
//! its stable and adaptive (can be made adaptive using flag)

void bubble(int A[], int n)
{
    int i, j;
    int flag = 0;
    for (i = 0;i < n - 1;i++)
    {
        flag = 0;
        for (j = 0;j < n - 1 - i;j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0) //! makes the code adaptive.
        {
            break;
        }
    }

}

//? insertion sort: inserting an element where it should be for an already sorted array.
//* there are n-1 no. of passes 
//* no of comparison are : n(n-1)/2 = O(n^2) time complexity 
//* no of swaps for n elements is also same as above.
//* it is also stable and adaptive.  
//! intermediate results will not give anything useful. 
//? shifting is required for array, not so in linked list. its more compatible for linked list. 

void insertion(int A[], int n)
{
    int i, j, x;

    for (i = 1;i < n;i++)
    {
        j = i - 1;
        x = A[i];

        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;

    }
}

void selection(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1;i++)
    {
        for (j = k = i;j < n;j++)
        {
            if (A[j] < A[k])
            {
                k = j;
            }
        }
        swap(&A[i], &A[k]);
    }
}

//? basic difference between quick and selection sort
//? quick uses element whereas selection uses index. 
//! partition function used for quick sort.

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l;
    int j = h;

    do
    {
        do { i++; } while (A[i] <= pivot);
        do { j--; } while (A[j] > pivot);

        if (i < j)
        {
            swap(&A[i], &A[j]);
        }
    } while (i < j);

    swap(&A[l], &A[j]);
    return j;
}


void quick(int A[], int l, int h)
{
    int j;

    if (l < h)
    {
        j = partition(A, l, h);
        quick(A, l, j);
        quick(A, j + 1, h);

    }

}

int main()
{
    int A[] = { 3, 7, 9,10, 6,5 , 12, 4,11 ,2 };// for bubble, insertion and selection sort
    int n = 10;
    // int A[] = { 3, 7, 9,10, 6,5 , 12, 4,11 ,2,INT_MAX };// for quick sort
    // int n = 11;

    //! bubble(A, n);

    //* insertion(A, n);

    //? selection(A, n);

    //! quick(A, 0, n - 1);

    // disp(A, n - 1);



    return 0;
}