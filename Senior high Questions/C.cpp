#include <iostream>
#include <stdlib.h>
#include <cmath> 

using namespace std;

int main(){
	int N, pass[100000], now, C_now, finish, C_finish, which, counterclockwise_time=0, clockwise_time=0;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> pass[i];
	}
	cin >> now;
	cin >> finish;
	int j=0;
	//counterclockwise
	C_now = now;
	C_finish = finish;
	int tmp;
	while(C_now!=C_finish){
		if(pass[j]+1==C_now){
			C_now -= 1;
			if(C_now<1){
				C_now = 4;
			}
		}
		j++;
		if(j>N){
			j=0;
		}
		counterclockwise_time++;
	}
	//clockwise
	j=0;
	while(now!=finish){
		if(pass[j]==now){
			now += 1;
			if(now>N){
				now = 1;
			}
		}
		j++;
		if(j>N){
			j=0;
		}
		clockwise_time++;
	}
	if(counterclockwise_time<clockwise_time){
		cout << counterclockwise_time << endl;
	}else{
		cout << clockwise_time << endl;
	}
	
}
