#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    for(int i=1;i<=5;i++){
        cout<<a<<endl;
        int c=a+b;
        a=b;
        b=c;
    }
}