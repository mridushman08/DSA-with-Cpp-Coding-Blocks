#include<iostream>
using namespace std;

int main()
{
    int n;
    int prime = 1;

    cin >> n;

    if(n <= 1){
        prime = 0;
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            prime = 0;
            break;
        }
    }

    if(prime == 1){
        cout << "the number is prime";
    } else {
        cout << "the number is not prime";
    }

    return 0;
}
