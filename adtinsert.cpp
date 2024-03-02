#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int length=size(arr);
    int index;
    int insert;

    cout<<"this is the length"<<endl;
    cout<<length<<endl;
    
    cout<<"enter the number to insert"<<endl;
    
    cin>>insert;
    
    cout<<"enter index"<<endl;
    
    cin>>index;
    
    cout<<"here is the output:"<<endl;

    //coding insert at an index. 

    for (int i=0;i<=length;i++)
    {
      
        if (i==index)
        {   
           
            for (int j=length;j>index;j--)

            {
               arr[j]=arr[j-1];
            }

            arr[index]=insert;
             
          
    
        }
        
        cout<<arr[i]<<endl;      
    
    }


}