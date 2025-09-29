#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < i; j++ ) {
           
        }
        for(int k = i; k < 4; k++) {
            cout << "*";
        }        
        cout << endl;
    }
    return 0;
}