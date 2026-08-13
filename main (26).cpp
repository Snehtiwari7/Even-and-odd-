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
        rem=num%10;
        num=num/10;
        ans=rem*i+ans;
        i=i*2;
    }
    cout<<ans<<endl;
}
                        

