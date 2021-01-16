
//                   -------------------   Recursive Approach    ---------------------------
/*
#include <iostream> 
using namespace std; 

// A recursive function to find nth catalan number 
unsigned long int catalan(unsigned int n) 
{ 
	// Base case 
	if (n <= 1) 
		return 1; 

	// catalan(n) is sum of 
	// catalan(i)*catalan(n-i-1) 
	unsigned long int res = 0; 
	for (int i = 0; i < n; i++) 
		res += catalan(i) 
			* catalan(n - i - 1); 

	return res; 
} 

// Driver code 
int main() 
{ 
	for (int i = 0; i < 10; i++) 
		cout<<catalan(i)<<" "; 
	return 0; 
}
*/

//----------------------------  Dynamic Programming Approach   ---------------------------------------

#include<iostream>
unsigned long int catalon(unsigned int);
using namespace std;
unsigned long int catalon(unsigned int n){
	unsigned long int DP[n + 1];
	DP[0] = 1;
	DP[1] = 1;
	for(int i=2;i<=n;i++){
		DP[i] = 0;
		for(int j=0;j<=i;j++)
		DP[i] = DP[i]+DP[j]*DP[i-j-1];
	}
	return DP[n];
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cout<<catalon(i)<<" ";
}
