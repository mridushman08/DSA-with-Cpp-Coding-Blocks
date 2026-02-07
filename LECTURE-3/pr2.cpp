#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(n>=300 && n<=480){
        cout<<"the prize is macbook";
    }
    else if(n>=200 && n<=180){
        cout<<"the prize is kurkure";
    }
    else if(n>=1100 && n<=1500){
        cout<<"the prize is cycle";
    }
    else if(n>50 && n<=80){
        cout<<"the prize is bike";
    }
    else{
        cout<<"you are unlucky";
    }
    return 0;
}