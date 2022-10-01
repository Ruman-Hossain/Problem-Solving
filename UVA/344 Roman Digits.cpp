#include<bits/stdc++.h>
using namespace std;
namespace global{
	int nI, nV, nX, nL, nC;
}
using namespace global;

void unit(int n){
	switch(n){
		case 1:	++nI;
				break;
		case 2: nI += 2;
				break;
		case 3:	nI += 3;
				break;
		case 4: ++nI; ++nV;
				break;
		case 5: ++nV;
				break;
		case 6: ++nI; ++nV;
				break;
		case 7: nI += 2; ++nV;
				break;
		case 8: nI += 3; ++nV;
				break;
		case 9: ++nI; ++nX;
				break;
	}
}

void tenUnit(int n){
	switch(n){
		case 1:	++nX;
				break;
		case 2: nX += 2;
				break;
		case 3:	nX += 3;
				break;
		case 4: ++nX; ++nL;
				break;
		case 5: ++nL;
				break;
		case 6: ++nX; ++nL;
				break;
		case 7: nX += 2; ++nL;
				break;
		case 8: nX += 3; ++nL;
				break;
		case 9: ++nX; ++nC;
				break;
		case 10:++nC;
				break;
	}
}

int main(){
	int i;
	int input;

	while (cin >> input){
		if (input == 0)
			break;

		nI = nV = nX = nL = nC = 0;

		// total digits
		for (i = 1; i <= input; i++){
			unit(i % 10);
			tenUnit(i / 10);
		}

		cout << input << ": " << nI << " i, " << nV << " v, " << nX << " x, "
			  << nL << " l, " << nC << " c" << endl;

	}

	return 0;
}

