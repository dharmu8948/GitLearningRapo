// C++ program to reverse a string preserving
// spaces.
#include <iostream>
using namespace std;

// Function to reverse the string
// and preserve the space position
string reverses(string str)
{
	int i = str.length() - 1; 
    int start, end = i + 1; 
    string result = ""; 
      
    while(i >= 0) 
    { 
        if(str[i] == ' ') 
        { 
            start = i + 1; 
            while(start != end) 
                result += str[start++]; 
              
            result += ' '; 
              
            end = i; 
        } 
        i--; 
    } 
    start = 0; 
    while(start != end) 
        result += str[start++];
		 
        for(int i=0;i<result.size();i++)
        if(result[i]==' ')
        result[i] = '.';
return result;
}

// Driver code
int main()
{
	string str;
	getline(cin,str);
	//cin>>str;
	cout << reverses(str) << endl;
	return 0;
}

