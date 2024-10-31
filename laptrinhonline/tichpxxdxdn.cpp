#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	string xau; inFile >> xau;
	inFile.close();
	int arr[xau.length()][xau.length()];
	memset(arr,0,sizeof(arr));
	for (int i = 2; i <= xau.length(); i++) {
		for (int j = 0; j <= xau.length()-i; j++) {
			if (i == 2) {
				if (xau[j] == xau[j+1]) arr[j][j+i-1] = 0;
				else arr[j][j+i-1] = 1;
			} else {
				if (xau[j] == xau[j+i-1]) arr[j][j+i-1] = arr[j+1][j+i-2];
				else arr[j][j+i-1] = min(arr[j][j+i-2],arr[j+1][j+i-1])+1;
			}
		}
	}
	cout << arr[0][xau.length()-1];
}
