#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the size of the array:";
    cin>>n;
    int* array=new int[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<array[0];
    for(int i=1;i<n;i++)
    {
        cout<<" "<<array[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    cout<<endl;
    cout<<sum;
    delete[] array;
    array=NULL;
    return 0;
}
