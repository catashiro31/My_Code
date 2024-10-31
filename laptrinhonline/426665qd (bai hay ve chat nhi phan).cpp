#include <bits/stdc++.h>
using namespace std;
int median(vector<int>& nums1, vector<int>& nums2) {
    if (nums1.size() > nums2.size()) {
        return median(nums2, nums1);
    }
    int m = nums1.size();
    int n = nums2.size();
    int imin = 0, imax = m, half_len = (m + n + 1) / 2;
    while (imin <= imax) {
        int i = (imin + imax) / 2;
        int j = half_len - i;

        if (i < m && nums2[j-1] > nums1[i]) {
            imin = i + 1; // i is too small
        } else if (i > 0 && nums1[i-1] > nums2[j]) {
            imax = i - 1; // i is too large
        } else {
            // i is perfect
            int maxLeft = 0;
            if (i == 0) { maxLeft = nums2[j-1]; }
            else if (j == 0) { maxLeft = nums1[i-1]; }
            else { maxLeft = max(nums1[i-1], nums2[j-1]); }
            if ((m + n) % 2 == 1) {
                return maxLeft*2;
            }
            int minRight = 0;
            if (i == m) { minRight = nums2[j]; }
            else if (j == n) { minRight = nums1[i]; }
            else { minRight = min(nums1[i], nums2[j]); }

            return (maxLeft + minRight);
        }
    }
    return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int m, q; cin >> m >> q;
	vector<vector<int>> a(m,vector<int>());
	for (int i = 0; i < m; i++) {
		int n; cin >> n;
		for (int j = 0; j < n; j++) {
			int x; cin >> x;
			a[i].push_back(x);
		}
		sort(a[i].begin(),a[i].end());
	}
	vector<pair<int,int>> trv;
	for (int i = 0; i < q; i++) {
		int x; cin >> x;
		int y; cin >> y;
		x--; y--;
		trv.push_back({x,y});
	}
	for (int i = 0; i < q; i++) {
		cout << median(a[trv[i].first],a[trv[i].second]) << '\n';
	}
}

