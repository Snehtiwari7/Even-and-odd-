#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the no.:";
    cin>>num;
    int rem,ans=0,i=1;
    while(num>0)
    {
        rem=num%2;
        num=num/2;
        ans=rem*i+ans;
        i=i*10;
        
    }
    cout<<ans<<endl;
}
