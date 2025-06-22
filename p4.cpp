/* Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
1
2 2 
3 3 3

Input Format: N = 6
Result:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6 */


#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=n;j++)
	    {
	        if(i+j<=i+i){
	            cout << i ;
	             cout << "\t" ;
	        }
	    }
	    cout << "\n";
	}

}
