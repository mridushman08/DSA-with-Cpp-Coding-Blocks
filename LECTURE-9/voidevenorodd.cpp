#include<iostream>
using namespace std;

void isevenodd(int num);

int main()
{
    int num;
    cin >> num;
    isevenodd(num);
    return 0;
}

void isevenodd(int num){
    if(num % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}
