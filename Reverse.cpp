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
    cout<<"Before reversing the values:";
    for(int i=0;i<5;i++)
    {
        cout<<" "<<num[i];
    }
    int* insnum=new int[6];
    std::copy(num,num+5,insnum);
    delete[] num;
    //num=insnum;
    //cout<<endl;
    //cout<<insnum[0];
    /*for(int i=1;i<6;i++)
    {
        cout<<" "<<insnum[i];
    }
    */
    insnum[5]=insnum[0]+insnum[4];
    //cout<<endl;
    /*
    cout<<insnum[0];
    for(int i=1;i<6;i++)
    {
        cout<<" "<<insnum[i];
    }
    */
    insnum[0]=insnum[5]-insnum[0];
    insnum[4]=insnum[5]-insnum[4];
    /*
    for(int i=0;i<6;i++)
    {
        cout<<" "<<insnum[i];
    }
    */
    insnum[5]=insnum[1]+insnum[3];
    /*
    cout<<endl;
    for(int i=1;i<6;i++)
    {
        cout<<" "<<insnum[i];
    }
    */
    insnum[1]=insnum[5]-insnum[1];
    insnum[3]=insnum[5]-insnum[3];
    cout<<endl;
    cout<<"After reversing the values:";
    for(int i=0;i<5;i++)
    {
        cout<<" "<<insnum[i];
    }
}
