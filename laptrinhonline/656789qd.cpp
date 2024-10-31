#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int kq = n*n*acos(-1);
	if (abs(pow((int)sqrt(kq),2)-kq) < abs(pow((int)sqrt(kq)+1,2)-kq)) cout << (int)sqrt(kq);
	else cout << (int)sqrt(kq)+1;
}
