#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		char a[10][10];
		int score = 0;

		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				cin>>a[i][j];
			}
		}

		for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (a[i][j] == 'X') {

                    // Calculate the points based on the ring
                    if((i == 0 || i == 9 || j == 0 || j == 9)) {

                        score += 1; // Ring 1
                    } 
                    else if ((i == 1 || i == 8 || j == 1 || j == 8)) {
                        score += 2; // Ring 2
                    } 
                    else if ((i == 2 || i == 7 || j == 2 || j == 7)) {
                        score += 3; // Ring 3
                    } 
                    else if ((i == 3 || i == 6 || j == 3 || j == 6)) {
                        score += 4; // Ring 4
                    } 
                    else if ((i == 4 || i == 5 || j == 4 || j == 5)) {
                        score += 5; // Ring 5
                    }
                }
            }
        }
        cout<<score<<endl;
    }
}