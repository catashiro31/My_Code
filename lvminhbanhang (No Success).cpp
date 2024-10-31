#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int N, M;
	inFile >> N >> M;
	int a[N+1];
	a[0] = 0;
	for (int i = 1; i <= N; i++) inFile >> a[i];
	int VKT[M][3];
	for (int i = 0; i < M; i++) inFile >> VKT[i][0] >> VKT[i][1] >> VKT[i][2];
	int X;
	inFile >> X;
    inFile.close();
    int arr[N+1][X+1];
    memset(arr,0,sizeof(arr));
    for (int i = 0; i < M; i++) {
    	int k = a[VKT[i][0]] * VKT[i][1];
    	while (k <= X) {
			arr[VKT[i][0]][k] = VKT[i][2]*a[VKT[i][0]];
			k++;
		}
	}
    for (int i = 1; i <= N; i++) {
    	int k = 0, tmp;
    	for (int j = 1; j <= X; j++) {
    		tmp = arr[i][j];
    		if (j - k < k or k == 0) arr[i][j] = max(arr[i-1][j],arr[i][j-k]+arr[i][j]);
    		else arr[i][j] = max(arr[i-1][j],arr[i][j-a[i]]);
			if (tmp != arr[i][j+1]) k = j+1;
		}
	}
//	for (int i = 0; i <= N; i++) {
//		for (int j = 0; j <= X; j++) {
//			if (arr[i][j] < 10) cout << " " << arr[i][j] << " ";
//			else cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
	cout << X + arr[N][X];
}
