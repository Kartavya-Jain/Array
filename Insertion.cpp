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
    int* insnum=new int[6];
    std::copy(num,num+5,insnum);
    delete[] num;
    num=insnum;
    cout<<endl;
    /*for(int i=0;i<6;i++)
    {
        cout<<" "<<num[i];
    }
    cout<<endl;
    */
    cout<<"Select position at which you want to insert a new number[1/2/3/4/5]:";
    cin>>p;
    //cout<<"p="<<p;
    //cout<<endl;
    for(int i=5;i>=p-1;i--)
    {
        insnum[i]=insnum[i-1];
    }
    /*
    for(int i=0;i<6;i++)
    {
        cout<<" "<<num[i];
    }
    cout<<endl;
    */
    cout<<"Insert a new number:";
    cin>>newnum;
    //datatype*var_name=new datatype[size];
    num[p-1]=newnum;
    cout<<num[0];
    for(int i=1;i<6;i++)
    {
        cout<<" "<<num[i];
    }
    //for(int i=5;i<=p-1;i--)
    //{
    //   insnum[i]=insnum[i-1];
    //}
    //cout<<endl;
    //for(int i=5;i<=p-1;i--)
    //{
    //    cout<<" "<<insnum[i];
    //}
    return 0;
}
