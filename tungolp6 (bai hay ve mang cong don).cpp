#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
    int n; inFile >> n;
    vector<pair<int, int>> pos(n);
    for (auto &x : pos) inFile >> x.first >> x.second;
    inFile.close();
    sort(pos.begin(), pos.end());
    long long sumX = 0, sumY = 0;
    long long sumSqX = 0, sumSqY = 0;
    long long totalDist = 0;
    for (int i = 0; i < n; i++) {
        int x = pos[i].first;
        int y = pos[i].second;
        totalDist += i * 1LL * (x * x + y * y) - (2 * x * sumX + 2 * y * sumY) + (sumSqX + sumSqY); // 1LL: dam bao ket qua la kieu long long
        sumX += x;
        sumY += y;
        sumSqX += x * x;
        sumSqY += y * y;
    }
    cout << totalDist;
    return 0;
}


