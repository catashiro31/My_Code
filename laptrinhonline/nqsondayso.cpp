#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; 
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    stack<int> st_max;
    long long sum_max = 0;
    long long tmp_max = 0;
    for (int i = 0; i < n; i++) {
        while (!st_max.empty() && arr[st_max.top()] < arr[i]) {
            int x = st_max.top();
            st_max.pop();
            if (st_max.empty()) {
                tmp_max -= 1LL*arr[x] * (x + 1);
            } else {
                tmp_max -= 1LL*arr[x] * (x - st_max.top());
            }
        }
        if (st_max.empty()) {
            tmp_max += 1LL*arr[i] * (i + 1);
        } else {
            tmp_max += 1LL*arr[i] * (i - st_max.top());
        }
        st_max.push(i);
        sum_max += tmp_max;
    }
    stack<int> st_min;
    long long sum_min = 0;
    long long tmp_min = 0;
    for (int i = 0; i < n; i++) {
        while (!st_min.empty() && arr[st_min.top()] > arr[i]) {
            int x = st_min.top();
            st_min.pop();
            if (st_min.empty()) {
                tmp_min -= 1LL*arr[x] * (x + 1);
            } else {
                tmp_min -= 1LL*arr[x] * (x - st_min.top());
            }
        }
        if (st_min.empty()) {
            tmp_min += 1LL*arr[i] * (i + 1);
        } else {
            tmp_min += 1LL*arr[i] * (i - st_min.top());
        }
        st_min.push(i);
        sum_min += tmp_min;
    }
    cout << sum_max - sum_min << "\n";
}