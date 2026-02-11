#include<iostream>
using namespace std;
int main()
{
    int star= n;
    int n;
    int row;
    int space =n-1;
    while(row<=2*n-1){
        int i=1;
        while(i<=space){
            cout<<" ";
            i++;
        }
        int j=0;
        while(j<=star){
            cout<<"*";
        }
        if(row<n){
            space--;
            star--;
        }else{
            star++;
            space ++;
        }
        cout<<"*";
        row++;
        }
return 0;
}