#include <iostream>
#include <string>
using namespace std;

void printH() {
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            if (col == 0 || col == 4 || row == 2) {
                cout << "H";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void printA() {
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            if ((col == 0 || col == 4) && row > 0 ||
                (row == 0 || row == 2) && (col > 0 && col < 4))
            {
                cout << "A";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void printN() {
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            if (col == 0 || col == 4 || row == col) {
                cout << "N";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void printD() {
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            if (col == 0 ||
                (row == 0 || row == 4) && col < 4 ||
                col == 4 && (row > 0 && row < 4))
            {
                cout << "D";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void printY() {
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            if ((row < 3 && (row == col || col == 4 - row)) ||
                (row >= 3 && col == 2))
            {
                cout << "Y";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    string name = "HANDY";

    for (int i = 0; i < name.length(); ++i) {
        char letter = name[i];

        switch (letter) {
            case 'H':
                printH();
                break;
            case 'A':
                printA();
                break;
            case 'N':
                printN();
                break;
            case 'D':
                printD();
                break;
            case 'Y':
                printY();
                break;
        }
        cout << endl;
    }

    return 0;
}