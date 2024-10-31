#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<string> f;
    f.push_back("A");
    f.push_back("B");
    
    string a = "A", b = "B";
    for (int j = 3; j <= 93; j++) {
        string tmp = b;
        b = a + b;
        f.push_back(b);
        a = tmp;
    }

    cout << f[6] << endl; // In ra chuỗi thứ 6
    return 0;
}

//	for (int x = 0; x < T; x++) {
//		int N; cin >> N;
//		long long i; cin >> i;
//		if (N == 2) {
//			if (i > b.size()) cout << -1 << '\n';
//			else cout << b[i-1] << '\n';
//		} else {
//			if (i > a.size()) cout << -1 << '\n';
//			else cout << a[i-1] << '\n';
//		}
//	}
