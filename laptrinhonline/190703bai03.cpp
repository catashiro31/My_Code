#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
    int n, k; 
    inFile >> n >> k;
    int arr[n];
    for (int &x : arr) inFile >> x;
    inFile.close();
    multiset<int> tmp;
    for (int i = 0; i < k; i++) tmp.insert(arr[i]);
    auto it = tmp.begin();
    advance(it, k / 2);
    for (int x : tmp) cout << x << " ";
    cout << endl << *it << " " << endl;
    int ccount = 0;
    for (int i = 1; i <= n - k; i++) {
        tmp.erase(tmp.find(arr[i - 1])); 
        tmp.insert(arr[i + k - 1]);
        for (int x : tmp) cout << x << " ";
        if (arr[i + k - 1] >= *it) {
        	ccount = 0;
            if (it != tmp.end()) {
                advance(it,1); 
            }
        } 
        else if (arr[i - 1] <= *it) {
            if (it != tmp.begin()) {
                advance(it,-ccount);
                ccount++;
            }
        }
        cout << endl << *it << " " << endl;
    }
    return 0;
}

