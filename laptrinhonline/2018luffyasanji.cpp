//#include <bits/stdc++.h>
//using namespace std;
//int Find_base(long n) {
//	if (n < 2) return n;
//	for (int x = 2; x <= sqrt(n); x++) {
//		long long power = x;
//		while (power <= n) {
//			if (power == n) return x;
//			power *= x;
//		}
//	}
//	return n;
//}
//int main() {
//	ifstream inFile 	("C:/Users/Actama/Documents/C++/input.txt");
//	int N; inFile >> N;
//	pair<long,long> arr[N];
//	for (auto &x : arr) inFile >> x.first >> x.second;
//	inFile.close();
//	bool check = true;
//	for (int i = 0; i < N; i++) {
//		if (arr[i].first == 1 and arr[i].second == 1) {
//			cout << "YES" << endl;
//			continue;
//		} else if (Find_base(arr[i].first) == Find_base(arr[i].second)) cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    pair<int,int> arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i].first >> arr[i].second;
    for (int i = 0; i < N; i++) {
        
        long long sqrtA = sqrt(arr[i].first);
        long long sqrtB = sqrt(arr[i].second);
        
        // Kiểm tra xem A có bằng B^2 hoặc B có bằng A^2
        if (sqrtA * sqrtA == arr[i].first && sqrtA == arr[i].second) {
            cout << "Yes" << endl;
        } else if (sqrtB * sqrtB == arr[i].second && sqrtB == arr[i].first) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}

