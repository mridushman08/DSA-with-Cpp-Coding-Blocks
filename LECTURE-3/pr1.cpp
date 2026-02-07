#include<iostream>
using namespace std;
int main()
{
    int x1,x2,x3,y1,y2,y3,m1,m2;
    cout<<"enter the value of x1:";
    cin>>x1;
    cout<<"enter the value of x2:";
    cin>>x2;
    cout<<"enter the value of x3:";
    cin>>x3;
    cout<<"enter the value of y1:";
    cin>>y1;
    cout<<"enter the value of y2:";
    cin>>y2;
    cout<<"enter the value of y3:";
    cin>>y3;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x1);
    cout<<"the value of m1 is:"<<m1<<endl;
    cout<<"the value of m2 is:"<<m2<<endl;
    if(m1==m2){
        cout<<"this is a straight line";
    }
    else{
        cout<<"this is not a straight line";
    }
    return 0;

}