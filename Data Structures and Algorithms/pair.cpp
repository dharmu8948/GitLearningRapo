#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int rollno;
	public:
		void setStudent(string a,int b){
			name = a;
			rollno = b;
		}
		void show(){
			cout<<"Name: "<<name<<endl;
			cout<<"Rollno: "<<rollno<<endl;
		}
};
int main(){
	pair<string ,int> p1;
	pair<string,string> p2;
	pair<string,float> p3;
	pair<int,student> p4;
	p1 = make_pair("Rahul",101);
	p2 = make_pair("India","New Delhi");
	p3 = make_pair("C++",345.5f);
	student s1;
	s1.setStudent("Dharmendra",24);
	p4 = make_pair(1,s1);
	
	cout<<"pair 1: "<<p1.first<<" "<<p1.second<<endl;
	cout<<"pair 2: "<<p2.first<<" "<<p2.second<<endl;
	cout<<"pair 3: "<<p3.first<<" "<<p3.second<<endl;
	cout<<"pair 4: \n"<<p4.first<<"\n";
	student s2 = p4.second;
	s2.show();
}
