/*Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
A B C
A B
A

Input Format: N = 6
Result:   
A B C D E F
A B C D E 
A B C D
A B C
A B
A*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    for(int i = 0; i < n; i++) {
        char ch = 'A';
        for(int j = 0; j < n - i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}
