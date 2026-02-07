#include<iostream>
using namespace std;
int main()
{
    int a,d,n,an;
    cout<<"enter the starting no:";
    cin>>a;
    cout<<"enter the common difference:";
    cin>>d;
    cout<<"enter the value of n:";
    cin>>n;
    an=a+(n-1)*d;
    cout<<"the ap series is"<<an<<endl;
    return 0;
}