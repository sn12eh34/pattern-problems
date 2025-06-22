/*Problem Statement: Given an integer N, print the following pattern.
Examples:

Example 1:
Input: N = 3
Output: 
* * *
* * *
* * *


Example 2:
Input: N = 6
Output:
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *   */




include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=n;j++)
	    {
	        cout << "* ";
	    }
	    cout << "\n";
	}

}
