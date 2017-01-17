#include <iostream>
#include <stdlib.h>
#include <cmath> 

using namespace std;

int main(){
	int N, R, C, walk_R, walk_C, side=0; 
	char map[200][200];
	cin >> N;
	cin >> R;
	cin >> C;
	for(int i=0; i<R; i++){
			cin >> map[i];
	}
	for(int rank=0; rank<N; rank++){
		//init start
		for(int i=0; i<C; i++){
			if(map[0][i]=='#'){
				walk_R = 0;
				walk_C = i;
				map[0][i]='0'+rank+1;
				break;
			}
		}
		//walk
		while(walk_R!=(R-1)){
			//down
			if(side==0){
				while(1){
					//cout << "in down" << endl;
					if(map[walk_R][walk_C-1]=='#'){
						walk_C=walk_C-1;
						side=1;
						break;
					}
					if(map[walk_R][walk_C+1]=='#'){
						walk_C=walk_C+1;
						side=2;
						break;
					}
					if(walk_R==R-1){
						break;
					}
					walk_R = walk_R+1;
				}
			}
			//left
			if(side==1){
				while(1){
					//cout << "in left" << endl;
					if(map[walk_R+1][walk_C]=='#'){
						walk_R = walk_R+1;
						side=0;
						break;
					}
					walk_C = walk_C-1;
				}
			}
			//right
			if(side==2){
				while(1){
					//cout << "in right" << endl;
					if(map[walk_R+1][walk_C]=='#'){
						walk_R = walk_R+1;
						side=0;
						break;
					}
					walk_C = walk_C+1;
				}
			}
			//cout << "now is " << "map[" << walk_R << "][" << walk_C << "]" << endl; 
		}
			map[R-1][walk_C] = '0'+rank+1;
	}
	char output[200];
	int in_dex = 1;
	for(int i=0; i<C; i++){
			if(map[R-1][i]!='#'&&map[R-1][i]!='.'){
				output[in_dex]=map[R-1][i];
				in_dex++;
			}	
	}
	//output answer
	int first=1;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			if(output[j]-'0'==i){
				if(first==1){
					cout << j;
					first = 0;
				}
				else
					cout << " " << j;
			}
		}
	}	
}
