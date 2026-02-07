#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=n; row>=1; row--) {
        for(int col=1; col<=n-row; col++) { 
            cout<<"  ";
        }
        for(int col=1; col<=2*row-1; col++) {
            if(col%2==1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
