#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the no.";
    cin>>n;
    for (int i=1;i<=n;i=i+1)
    {
        sum=sum+i;
    }
    cout<<sum;
}