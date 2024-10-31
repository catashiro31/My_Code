#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
    int n;
    inFile >> n;
    pair<int, int> arr[n];
    for (auto &x : arr) inFile >> x.first >> x.second;
    inFile.close();
    for (int idx = 0; idx < n; idx++) {
        int a = arr[idx].first;
        int b = arr[idx].second;
        int range = b - a;
        int tmp = sqrt(b);
        vector<bool> sang1(tmp + 1, true);
        vector<bool> sang2(range + 1, true);
        sang1[0] = false;
        sang1[1] = false;
        for (int i = 2; i <= tmp; i++) {
            if (sang1[i]) {
                for (int j = i * i; j <= tmp; j += i) sang1[j] = false;
                int start = max(i * i, (a + i - 1) / i * i); 
                for (int j = start; j <= b; j += i) sang2[j - a] = false;
            }
        }
        for (int i = 0; i <= range; i++) {
            if (sang2[i] && a + i > 1) {
                cout << a + i << " ";
            }
        }
        cout << endl;
    }
}

