 /*Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
1    1
12  21
123321

Input Format: N = 6
Result:   
1          1
12        21
12       321
1234    4321
12345  54321
123456654321*/
    
    
    
    
    #include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 5;
    int spaces = 2 * (N - 1);
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++)
            cout << j;
        
        for (int j = 1; j <= spaces; j++)
            cout << " ";
        
        for (int j = i; j >= 1; j--)
            cout << j;
        
        cout << endl;
        spaces -= 2;
    }

    return 0;
}










