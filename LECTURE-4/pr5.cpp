#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cin>>n;
    while(row<=n){
        int i=n;
        while(i>=row){
            cout<<"*"<<" ";
            i--;
        }
        cout<<endl;
        row++;
    }
}