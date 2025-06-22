/*Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
******
**  **
*    *
*    *
**  **
******

Input Format: N = 6
Result:   
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************     */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    for(int i = 0; i < n; i++) {
        
        for(int j = 0; j < n - i; j++) {
            cout << "*";
        }
       
        for(int j = 0; j < 2*i; j++) {
            cout << " ";
        }
        
        for(int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

   
    for(int i = 0; i < n; i++) {
        // Left stars
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        
        for(int j = 0; j < 2*(n - i - 1); j++) {
            cout << " ";
        }
       
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
