/*Problem Statement: Given an integer N, print the following pattern : 


Here, N = 4.

Examples:

Input Format: N = 3
Result: 
  A  
 ABA 
ABCBA


Input Format: N = 6
Result:   
     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA 
ABCDEFEDCBA*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        char ch = 'A';
        for (int j = 0; j <= i; j++) {
            cout << ch;
            ch++;
        }

        ch -= 2;
        for (int j = 0; j < i; j++) {
            cout << ch;
            ch--;
        }

        cout << endl;
    }

    return 0;
}
