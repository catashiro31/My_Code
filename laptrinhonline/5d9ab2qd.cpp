#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
    int n, m, q; 
	inFile >> n >> m >> q;
    int arr[n];
    vector<int> inx[m]; 
    for (int i = 0; i < n; i++) {
        inFile >> arr[i];
        inx[(arr[i] % m + m) % m].push_back(i + 1);
    }
    pair<int, int> trv[q];
    for (auto &x : trv) {
        inFile >> x.first >> x.second;
    }
    inFile.close();
    for (int i = 0; i < q; i++) {
        int idx = trv[i].second;
        int pos = trv[i].first - 1;
        if (pos < inx[idx].size()) {
            cout << inx[idx][pos] << '\n'; 
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}
	
