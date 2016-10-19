#include <iostream>

using namespace std;



int main(){
	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	string name[n],sname[n];
	double gpa[n];

	double s = 0;

	for(int i = 0; i < n; ++i){	
        	cin >> sname[i] >> name[i] >> gpa[i];
        	s = s + gpa[i];
        }

        cout << s/n  << endl;

        cout << name[0] << endl;

	return 0;
}