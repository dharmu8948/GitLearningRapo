#include<iostream>
#include<tuple>
using namespace std;
int main(){
	tuple<string,int ,int>t1;
	t1=make_tuple("Rahul",32,101);
	cout<<get<0>(t1);
}
