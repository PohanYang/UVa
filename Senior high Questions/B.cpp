#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int T, length, a[1000], change_times[1000], check_fun, check_now, counter, temp, fun_scale=0;
	cin >> T;
	for(int i=0; i<T; i++){
		fun_scale = 0;
		cin >> length;
		for(int j=0; j<length; j++)
			cin >> a[j];
		while(1){
			/*
			for(int s=0; s<length; s++){
				cout << a[s] << " ";
			}
			cout << endl;
			*/
			//check fun scale
			check_fun = 0;
			for(int k=0; k<length; k++){
				if(a[k]!=0)
					check_fun = 1;
			}
			if(check_fun==0)
				break;
			//insert sort
			change_times[0]=0;
			for(int m=1; m<length; m++){
				check_now = m;
				counter =0;
				while(a[check_now-1]>a[check_now]&&check_now!=0){
						temp = a[check_now-1];
						a[check_now-1] = a[check_now];
						a[check_now] = temp;
						check_now = check_now-1;
						counter++;
				}
				change_times[m]=counter;
			}
			//change_time array -> a array
			for(int n=0; n<length; n++){
				a[n]=change_times[n];
			}
			fun_scale++;
		}
		cout << fun_scale << endl;
	}
}
