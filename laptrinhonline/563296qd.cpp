#include <bits/stdc++.h>
using namespace std;

bool isPythagorean(long a, long b, long c) {
    return (a * a + b * b == c * c);
}

int main() {
    long a, b, c;
    cin >> a >> b >> c;
    
    // Sắp xếp để c là cạnh lớn nhất
    long arr[3] = {a, b, c};
    sort(arr, arr + 3);
    a = arr[0];
    b = arr[1];
    c = arr[2];
    
    long d = LONG_MAX;
    
    // Kiểm tra thay đổi từng số a, b, c và tìm d nhỏ nhất
    for (int i = 0; i <= 32768; ++i) {
        // Thử thay đổi a
        if (isPythagorean(a + i, b, c)) d = min(d, (long)i);
        if (a - i > 0 && isPythagorean(a - i, b, c)) d = min(d, (long)i);
        
        // Thử thay đổi b
        if (isPythagorean(a, b + i, c)) d = min(d, (long)i);
        if (b - i > 0 && isPythagorean(a, b - i, c)) d = min(d, (long)i);
        
        // Thử thay đổi c
        if (isPythagorean(a, b, c + i)) d = min(d, (long)i);
        if (c - i > 0 && isPythagorean(a, b, c - i)) d = min(d, (long)i);
    }
    
    if (d == LONG_MAX) cout << -1 << endl;
    else cout << d << endl;
    
    return 0;
}


