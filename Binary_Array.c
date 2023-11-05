#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0 || arr[i]==1)
        {
            c+=1;
        }
    }
    if(c==n)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
}