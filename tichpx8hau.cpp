#include <bits/stdc++.h>
using namespace std;
int n;
int cauhinh[15];
bool check[15];
bool cheotren[27];
bool cheoduoi[27];
int kq = 0;
void Try(int i) {
	if (i > n) {
		kq++;
		return;
	}
	for (int j = 1; j <= n; j++) {
		if (check[j] == true and cheotren[i-j+n] == true and cheoduoi[i+j-1] == true) {
			check[j] = false;
			cheotren[i-j+n] = false;
			cheoduoi[i+j-1] = false;
			Try(i+1);
			check[j] = true;
			cheotren[i-j+n] = true;
			cheoduoi[i+j-1] = true;
		}
	}
}
int main() {
	cin >> n;
    memset(check,true,sizeof(check));
    memset(cheotren,true,sizeof(cheotren));
    memset(cheoduoi,true,sizeof(cheoduoi));
    cheotren[n] = false;
    cheoduoi[n] = false;
    Try(1);
    cout << kq;
}
