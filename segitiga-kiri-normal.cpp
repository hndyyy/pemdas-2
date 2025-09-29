#include <iostream>
using namespace std;
int main() {
    int i;
    for(i = 0; i < 4; i++){
        for(int j=0; j <= i ; j++ )  {if (j <= i) cout << "*";
        }
        cout << endl ;
    }
return 0;
}
