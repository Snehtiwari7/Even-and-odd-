#include<iostream>
using namespace std;
int main()
{
    
    
        int num;
        cout<<"Enter the no.";
        cin>>num;
        int ans=0,rem;
        while(num!=0)
        {
            
            rem=num%10;
            num=num/10;
            ans=ans+rem;
        }
        num=ans;
    
    cout<<num;
}
