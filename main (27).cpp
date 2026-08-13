#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the no.";
    cin>>num;
    int rem,i=1,ans=0;
    while(num>0)
    {
        rem=num%8;
        num=num/8;
        ans=rem*i+ans;
        i=i*10;
    }
    cout<<ans<<endl;
}

