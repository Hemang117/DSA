#include<iostream> 
using namespace std;

struct bs
{
    int A[10];
    int len;
};

void Display(struct bs arr)
{
    int i;
    cout << "elements are:" << endl;
    for (i = 0;i < arr.len;i++)
    {
        cout << arr.A[i] << endl;
    }
}


int get(struct bs arr, int index)
{
    if (index >= 0 && index < arr.len)
    {
        return arr.A[index];
    }
    return -1;
}

void set(struct bs* arr, int index, int x)
{
    if (index >= 0 && index < arr->len)
    {
        arr->A[index] = x;
    }

}

int max(struct bs arr)
{
    int max = arr.A[0];
    int i;
    for (i = 0;i < arr.len;i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }

    }

    return max;
}

int min(struct bs arr)
{
    int min = arr.A[0];
    int i;
    for (i = 0;i < arr.len;i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }

    }
    return min;
}

int sum(struct bs arr)
{
    int s = 0;
    int i;
    for (i = 0;i < arr.len;i++)
    {
        s += arr.A[i];

    }return s;
    return 0;
}

float avg(struct bs arr)
{
    return (float)sum(arr) / arr.len;
}



int main()
{
    bs arr = { {4,8,10,15,18,21,24,27,29,30}, 10 };
    cout << avg(arr) << endl;
    return 0;
}