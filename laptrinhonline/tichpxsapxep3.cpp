#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector<int> part1,part2,part;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x%3 == 0) part.push_back(x);
		if (x%3 == 1) part1.push_back(x);
		if (x%3 == 2) part2.push_back(x);
	}
	sort(part.begin(),part.end());
	sort(part1.begin(),part1.end());
	sort(part2.begin(),part2.end());
	for (int x : part) cout << x << " ";
	for (int x : part1) cout << x << " ";
	for (int x : part2) cout << x << " ";
}
