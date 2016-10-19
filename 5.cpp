#include <iostream>

using namespace std;

struct student{
	string name;
	string sname;
	double gpa;
};

int main(){

	student s[10];

        int n;
        cin >> n;

        for(int i = 0; i < n; ++i){
		cin >> s[i].name >> s[i].sname >> s[i].gpa;
	}

	cout << s[0].gpa << " "<<s[0].name;
	

	return 0;
}
