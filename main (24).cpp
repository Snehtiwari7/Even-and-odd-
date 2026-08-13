#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"enter the no.";
    cin>>i;
    
    switch(i)
    {
        case 1:
        cout<<"mon";
        break;
        case 2:
        cout<<"tue";
        break;
        case 3:
        cout<<"wed";
        break;
        default:
        cout<<"please enter the valid date";
    }
}