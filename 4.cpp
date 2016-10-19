#include <iostream>

using namespace std;

struct student{
	string name;
	string sname;
	double gpa;
};

int main(){

	student s; 

	cin >> s.name >> s.sname >> s.gpa;

	cout << s.gpa << " "<<s.name;
	

	return 0;
}
