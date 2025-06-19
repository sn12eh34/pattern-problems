#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=n;j++)
	    {
	        if(i+j>=i+i){
	            cout << j ;
	             cout << "\t" ;
	        }
	    }
	    cout << "\n";
	}

}