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

	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(s[i].gpa > s[j].gpa){
				swap(s[i],s[j]);
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout << s[i].name <<" " << s[i].sname <<" " << s[i].gpa << endl;
	}


	return 0;
}
