#include<iostream>
using namespace std;

int isevenodd(int num){
    if(num % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cin >> num;
    int ans = isevenodd(num);
    cout << ans;
    return 0;
}
