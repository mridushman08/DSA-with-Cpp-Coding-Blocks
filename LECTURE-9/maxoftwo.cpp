#include<iostream>
using namespace std;

int maxOfTwo(int num1, int num2){
    if(num1 > num2)
        return num1;
    else
        return num2;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int ans = maxOfTwo(num1, num2);
    cout << ans;
    return 0;
}
