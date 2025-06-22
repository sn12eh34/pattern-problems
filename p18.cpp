/* Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
C
B C
A B C

Input Format: N = 6
Result:   
F
E F
D E F
C D E F
B C D E F
A B C D E F */



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char startChar = 'A' + (n - i - 1); // Starting character of the row
        for (int j = 0; j <= i; j++) {
            cout << char(startChar + j) << "\t";
        }
        cout << "\n";
    }

    return 0;
}
