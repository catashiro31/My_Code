#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
    int nub;
    inFile >> nub;
    int t[nub];
    vector<vector<pair<float, float>>> points(nub);
    for (int i = 0; i < nub; i++) {
        inFile >> t[i]; 
        points[i].resize(t[i]);
        for (int j = 0; j < t[i]; j++) {
            float tmp1, tmp2;
            inFile >> tmp1 >> tmp2;
            points[i][j] = make_pair(tmp1, tmp2);
        }
    }
    inFile.close();
	for (int i = 0; i < nub; i++) {
		vector<int> kq(t[i],1);
		int input = 1;
		for (int j = 1; j < t[i]; j++) {
			for (int k = 0; k < j; k++) {
				if (points[i][k].first < points[i][j].first and points[i][k].second > points[i][j].second) kq[j] = max(kq[j],kq[k]+1);
			}
			input = max(input,kq[j]);
		}
		cout << input << endl;
	}
}
