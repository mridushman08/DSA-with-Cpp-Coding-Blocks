#include<iostream>
using namespace std;

void maxOfTwo(int num1, int num2){
    if(num1 > num2)
        cout << num1;
    else
        cout << num2;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    maxOfTwo(num1, num2);   
}
