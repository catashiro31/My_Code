#include <bits/stdc++.h>
using namespace std;
int n;
vector<char> kq;
bool check = true;
void Try(int i, int open, int close) {
    if (i == n * 2) { 
        for (char x : kq) cout << x;
        cout << endl;
        return;
    }
    if (open < n) {
        kq.push_back('(');
        if (check == false or open < n-1) Try(i + 1, open + 1, close);
        kq.pop_back();
    }
    if (close < n) {
        kq.push_back(')');
        if (close == open and check == true) {
        	check = false;
        	Try(i + 1, open, close + 1);
        	check = true;
        } else Try(i+1,open,close+1);
        kq.pop_back();
    }
}

int main() {
    cin >> n;
    Try(0, 0, 0); 
    return 0;
}
