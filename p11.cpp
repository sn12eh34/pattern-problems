/*Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
1
01
101

Input Format: N = 6
Result:   
1
01
101
0101
10101
010101 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int start = i % 2; 
        for(int j = 1; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << "\n";
    }
}
