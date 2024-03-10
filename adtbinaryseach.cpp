#include<iostream> 
using namespace std;

struct bs
{
    int A[10];
    int len;
};

int bsearch(struct bs* arr, int key)
{
    int mid;
    int l = 0;
    int h = arr->len - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr->A[mid])
        {
            return mid;
        }
        else if (key < arr->A[mid])
        {
            cout << "we changed h from " << h;
            cout << " with value of mid = " << mid;
            h = mid - 1;
            cout << " to " << h << endl;

            // somewhat like numerical analysis where with 
        }               //iterations we used to find the root. 
        else {
            cout << "we changed L here from " << l;
            l = mid + 1;
            cout << " to " << l << endl;

        }


    }
    return -1;
}

int Recursivebin(int a[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            return Recursivebin(a, l, mid - 1, key);
        }
        else {
            return Recursivebin(a, mid + 1, h, key);
        }
    }
    return -1;
}

//? ayo wtf 
//! yeet 
//* bomboclat 


int main()
{
    bs arr = { { 4,8,10,15, 18,21,24, 27,29,30 }, 10 };
    cout << bsearch(&arr, 27) << endl;
    cout << Recursivebin(arr.A, 0, arr.len, 27) << endl;
    return 0;

}