#include<iostream>
using namespace std;

void sum(int n){
    int ans = n * (n + 1) / 2;
    cout << ans;
}

int main()
{
    int num;
    cin >> num;
    sum(num);
    return 0;
}
