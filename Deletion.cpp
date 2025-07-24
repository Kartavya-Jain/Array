#include<iostream>
using namespace std;
int main()
{
    int p,newnum;
    int* num=new int[5];
    //Entering numbers in the array
    cout<<"Enter numbers of array:";
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }
    cout<<num[0];
    for(int i=1;i<5;i++)
    {
        cout<<" "<<num[i];
    }
    int* delnum=new int[6];
    std::copy(num,num+5,delnum);
    delete[] num;
    num=delnum;
    cout<<endl;
    /*
    for(int i=0;i<6;i++)
    {
        cout<<" "<<num[i];
    }
    cout<<endl;
    */
    cout<<"Select position at which you want to delete a number[1/2/3/4/5]:";
    cin>>p;
    //cout<<"p="<<p;
    num[5]=num[p-1];//num[3]=last cell
    //cout<<endl;
    /*
    for (int i=0;i<6;i++)
    {
        cout<<" "<<num[i];
    }
    cout<<endl;
    */
    for(int i=p-1;i<=5;i++)
    {
        delnum[i]=delnum[i+1];
    }
    /*
    for(int i=0;i<6;i++)
    {
        cout<<" "<<delnum[i];
    }
    cout<<endl;
    */
    cout<<delnum[0];
    for(int i=1;i<4;i++)
    {
        cout<<" "<<delnum[i];
    }
    cout<<endl;
    /*for(int i=5;i<=p-1;i--)
    {
       delnum[i]=del1num[i];
    }
    cout<<endl;
    for(int i=5;i<=p-1;i--)
    {
        cout<<" "<<delnum[i];
    }*/
    return 0;
}