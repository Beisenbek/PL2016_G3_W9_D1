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


        for(int i = 0; i < n - 1; ++i){
        	for(int j = i + 1; j < n; ++j){
        		if(gpa[j] < gpa[i]){
        			swap(gpa[i],gpa[j]);
        			swap(name[i],name[j]);
        			swap(sname[i],sname[j]);
        		}
        	}
        }
        

        for(int i = 0; i < n; ++i){	
         	cout <<sname[i] << " " << name[i] << " " << gpa[i]<<endl;
        }

	return 0;
}
