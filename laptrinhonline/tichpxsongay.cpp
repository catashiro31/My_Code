#include <bits/stdc++.h>
using namespace std;
int sl(int d, int m, int y) {
	int kq = 0;
	if (y % 4 != 0 || ( y % 100 == 0 && y % 400 != 0)) {
		switch (m) {
			case 1:
				break;
			case 2:
				kq += 31;
				break;
			case 3: 
				kq+= 59;
				break;
			case 4:
				kq+= 90;
				break;
			case 5:
				kq+= 120;
				break;
			case 6:
				kq+= 151;
				break;
			case 7: 
				kq+= 181;
				break;
			case 8: 
				kq += 212;
				break;
			case 9: 
				kq += 243;
				break;
			case 10:
				kq += 273;
				break;
			case 11:
				kq += 304;
				break;
			case 12:
				kq += 334;
				break;
		};
	} else {
		switch (m) {
			case 1:
				break;
			case 2:
				kq += 31;
				break;
			case 3: 
				kq+= 60;
				break;
			case 4:
				kq+= 91;
				break;
			case 5:
				kq+= 121;
				break;
			case 6:
				kq+= 152;
				break;
			case 7: 
				kq+= 182;
				break;
			case 8: 
				kq += 213;
				break;
			case 9: 
				kq += 244;
				break;
			case 10:
				kq += 274;
				break;
			case 11:
				kq += 305;
				break;
			case 12:
				kq += 335;
				break;
		};
	} 
	kq += d;
	return kq;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int d1, m1, y1; cin >> d1 >> m1 >> y1;
	int d2, m2, y2; cin >> d2 >> m2 >> y2;
	int dm1 = sl(d1,m1,y1); 
	int dm2 = sl(d2,m2,y2);
	int kq = dm2-dm1;
	for (int i = y1; i < y2; i++) {
		if (i % 4 != 0 || ( i % 100 == 0 && i % 400 != 0)) kq += 365;
		else kq += 366;
	}
	cout << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}

