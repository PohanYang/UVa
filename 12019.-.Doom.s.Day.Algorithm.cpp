#include <iostream>
using namespace std; // consider removing this line in serious projects

int main() {
	int N;
	while(cin >> N){
		int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		int n1,n2, day;
		for(int i=0; i<N; i++){
			day = 0;
			cin >> n1 >> n2;
			for(int j=0; j<n1-1; j++){
				day += m[j];
			}
			day += n2;
			//cout << day << endl;
			if(day%7==1) cout << "Saturday" << endl;
			else if(day%7==2) cout << "Sunday" << endl;
			else if(day%7==3) cout << "Monday" << endl;
			else if(day%7==4) cout << "Tuesday" << endl;
			else if(day%7==5) cout << "Wednesday" << endl;
			else if(day%7==6) cout << "Thursday" << endl;
			else if(day%7==0) cout << "Friday" << endl;
		}
	}
	return 0;
}


