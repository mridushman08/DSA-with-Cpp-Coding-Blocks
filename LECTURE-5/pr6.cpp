#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cin>>n;
    for(row=n;row<=n;row=row+1)
    {
        for(col=1;col<=row;col=col+1)
        cout<<" * ";

        for(col=1;col<=2*n-2*row;col=col+1)
        cout<<" ";

        for(col=1;col<=row;col=col+1)
        cout<<"* ";
    
        cout<<endl;
    }
    return 0;
}