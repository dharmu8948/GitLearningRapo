#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printString(string str,string curr,int index){
	if(index==str.length()){
		cout<<curr<<" ";
		return;
	}
	printString(str,curr,index+1);
	printString(str,curr+str[index],index+1);

}
int main(){
	string s;
	cin>>s;
	string curr="";
	int index=0;
	printString(s,curr,index);
	return 0;
}

