/*Pattern - 3: Right-Angled Number Pyramid

Mark as Completed

87


Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
1
1 2 
1 2 3

Input Format: N = 6
Result:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6 */








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
	            cout << j ;
	             cout << "\t" ;
	        }
	    }
	    cout << "\n";
	}

}
