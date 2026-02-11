#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int star =1;
    int space  = n-1;

    for(int i=1;i<=2*n-1;i++){
        //space
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }

        for(int j=1;j<=star;j++){
            cout<<"* ";
        }

        cout<<endl;


        if(i<n){
            star++;
            space--;
        }
        else{
            star--;
            space++;
        }
    }

    // for (int row = 1; row <= n; row++) {
    //     for (int col = 1; col <= row; col++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int row = n - 1; row >= 1; row--) {
    //     for (int col = 1; col <= row; col++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    return 0;
}
