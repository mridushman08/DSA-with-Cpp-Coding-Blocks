#include<iostream>
using namespace std;
int main()
{
    int n;
    int space =n-1;
    int star =n;
    int row=1;
    while(row<=n){
        int i=1;
        while(i<=space){
            cout<<" ";
            i++;
        }
        int y=1;
        while(y<star){
            cout<<"*";
            y++;
        }
        cout<<endl;
        space++;
        star--;
        row++;
    }
    return 0;
}
