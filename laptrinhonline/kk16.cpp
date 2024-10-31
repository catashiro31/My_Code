//#include <bits/stdc++.h>
//#include <chrono>
//using namespace std;
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int n, Q;
//    cin >> n >> Q;
//    vector<long> arr(n);
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    vector<pair<int, int>> trv(Q);
//    for (int i = 0; i < Q; i++) {
//        cin >> trv[i].first >> trv[i].second;
//    }
//    vector<vector<long>> xList;
//    vector<bool> xcheck(n, false);
//    for (int i = 0; i < n; i++) {
//        if (!xcheck[i]) {
//            vector<long> xlist;
//            xlist.push_back(arr[i]);
//            long tmp = arr[i];
//            xcheck[i] = true;
//            for (int j = i + 1; j < n; j++) {
//                if (tmp < arr[j]) {
//                    tmp = arr[j];
//                    xlist.push_back(arr[j]);
//                    xcheck[j] = true;
//                }
//            }
//            xList.push_back(xlist);
//        }
//    }
//    vector<vector<long>> nList;
//    vector<bool> ncheck(n, false);
//    for (int i = n-1; i >= 0; i--) {
//        if (!ncheck[i]) {
//            vector<long> nlist;
//            nlist.push_back(arr[i]);
//            long tmp = arr[i];
//            ncheck[i] = true;
//            for (int j = i -1; j >= 0; j--) {
//                if (tmp < arr[j]) {
//                    tmp = arr[j];
//                    nlist.push_back(arr[j]);
//                    ncheck[j] = true;
//                }
//            }
//            nList.push_back(nlist);
//        }
//    }
////    for (auto nlt : nList) {
////    	for (long x : nlt) cout << x << " ";
////    	cout << '\n';
////	}
//    for (int i = 0; i < Q; i++) {
//        int start = trv[i].first - 1;
//        int act = trv[i].second;
//        long kq;
//        for (auto& xlt : xList) {
//            auto xit = find(xlt.begin(), xlt.end(), arr[start]);
//            if (xit != xlt.end()) {
//                if (distance(xit, xlt.end()) > act) {
//                    kq =  *(xit + act);
//                } else {
//                    kq = *(xlt.end() - 1);
//                }
//                break;
//            }
//        }
//        for (auto& nlt : nList) {
//            auto nit = find(nlt.begin(), nlt.end(), arr[start]);
//            if (nit != nlt.end()) {
//                if (distance(nit, nlt.end()) > act) {
//                    kq =  max(kq,*(nit + act));
//                } else {
//                    kq = max(kq,*(nlt.end() - 1));
//                }
//                break;
//            }
//        }
//        cout << kq << '\n';
//    }
//    return 0;
//}
#include <iostream>
#include <vector>
using namespace std;

int N, Q;
vector<long long> h;
vector<int> left_max, right_max;

void preprocess() {
    // Tính toán mảng left_max
    left_max[0] = 0;
    for (int i = 1; i < N; ++i) {
        if (h[i] > h[i - 1]) {
            left_max[i] = left_max[i - 1];
        } else {
            left_max[i] = i;
        }
    }

    // Tính toán mảng right_max
    right_max[N - 1] = N - 1;
    for (int i = N - 2; i >= 0; --i) {
        if (h[i] > h[i + 1]) {
            right_max[i] = right_max[i + 1];
        } else {
            right_max[i] = i;
        }
    }
}

void handle_queries() {
    for (int i = 0; i < Q; ++i) {
        int x, k;
        cin >> x >> k;
        int current_col = x - 1;
        long long max_height = h[current_col];

        // Duyệt qua từng lần nhảy
        for (int j = 0; j < k; ++j) {
            if (left_max[current_col] != current_col) {
                current_col = left_max[current_col];
                max_height = max(max_height, h[current_col]);
            } else if (right_max[current_col] != current_col) {
                current_col = right_max[current_col];
                max_height = max(max_height, h[current_col]);
            } else {
                break;
            }
        }
        cout << max_height << endl;
    }
}

int main() {
    cin >> N >> Q;
    h.resize(N);
    left_max.resize(N);
    right_max.resize(N);

    // Đọc độ cao của các cột
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }

    preprocess();
    handle_queries();

    return 0;
}

