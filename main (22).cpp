#include<iostream>
using namespace std;
int main()
{
    int row,col;
    for (row=1;row<=6;row=row+1)
    {
        for (col=1;col<6-(row-1);col=col+1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
    
    
    
