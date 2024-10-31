#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
    int T;
    inFile >> T;
    pair<int, int> arr[T];
    for (auto &x : arr) inFile >> x.first >> x.second;
    inFile.close();
    for (int t = 0; t < T; t++) {
        int low = arr[t].first, high = arr[t].second;
        vector<bool> snt(high - low + 1, true);
        for (int i = 2; i <= sqrt(high); i++) {
            int start = max(i * i, (low + i - 1) / i * i);
            for (int j = start; j <= high; j += i) {
                snt[j - low] = false;
            }
        }
        int kq = 0;
        for (int i = 0; i <= high - low; i++) {
            if (snt[i] && (i + low > 1)) kq++;
        }
        cout << kq << '\n'; 
    }
    return 0;
}
