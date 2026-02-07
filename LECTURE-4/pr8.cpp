#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cin>>n;
    for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=n-row;col=col+1)
        cout<<" ";
    for(col=1;col<=row;col=col+1)
    {
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}