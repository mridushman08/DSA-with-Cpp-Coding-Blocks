#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cin>>n;
    while(row<=n){
        int i=1;
        while(i<=row){
            cout<<"*"<<" ";
            i++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}