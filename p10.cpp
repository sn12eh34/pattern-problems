/* Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
  *  
  **
  ***  
  **
  *   
Input Format: N = 6
Result:   
     *
     **
     *** 
     ****
     *****
     ******  
     *****
     ****
     ***    
     **
     *
     * */
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
	            cout << "* ";
	        }
	    }
	    cout << "\n";
	}
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=n;j++)
	    {
	        if(i+j>i+i){
	            cout << "* ";
	        }
	    }
	    cout << "\n";
	}

}
