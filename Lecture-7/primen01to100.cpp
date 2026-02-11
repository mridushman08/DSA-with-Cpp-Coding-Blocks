#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int num = 1; num <= n; num++)
    {
        int prime = 1;

        if(num <= 1)
            prime = 0;

        for(int i = 2; i * i <= num; i++)
        {
            if(num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime == 1)
            cout << num << " ";
    }

    return 0;
}
