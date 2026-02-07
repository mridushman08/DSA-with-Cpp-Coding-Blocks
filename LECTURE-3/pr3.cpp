#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    if (n >= 1100 && n <= 1500) {
        cout << "The prize is cycle" << endl;
        if (n >= 1100 && n <= 1250) {
            cout << "The cycle is Hero" << endl;
        } else {
            cout << "The cycle is Evon" << endl;
        }
    } else if (n >= 300 && n <= 480) {
        cout << "The prize is MacBook" << endl;
        if (n >= 300 && n <= 350) {
            cout << "Model is M1" << endl;
        } else {
            cout << "Model is M2" << endl;
        }
    } else if (n >= 50 && n <= 80) {
        cout << "The prize is bike" << endl;
        if (n >= 50 && n <= 65) { 
            cout << "The bike is Duke" << endl;
        } else {
            cout << "The bike is Pulsar" << endl;
        }
    } else if (n >= 150 && n <= 280) {
        cout << "The prize is kurkure" << endl;
        if (n >= 150 && n <= 180) { 
            cout << "The flavour is onion" << endl;
        } else {
            cout << "The flavour is chilli" << endl;
        }
    } else {
        cout << "No prize available for this n" << endl;
    }

    return 0;
}

   
