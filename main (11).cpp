#include<iostream>
using namespace std;
int main()
{
   int n,i;
   cout<<"Enter the no.";
   cin>>n;
   if (n<2)
   {
       cout<<"Not the prime no";
       return 0;
   }
   else
   {
       for(i=2;i<n;i=i+1)
       {
           if(n%i==0)
           {
               cout<<"not a prime no.";
               return 0;
           }
           
           
       }
    }
    cout<<"prime";
    return 0;
}
   