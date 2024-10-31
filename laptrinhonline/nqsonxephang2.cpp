#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> secondGreaterElement(const vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);  // Kết quả khởi tạo ban đầu là -1
    stack<int> stack1, stack2;  // stack1: tìm phần tử lớn hơn thứ 1, stack2: tìm phần tử lớn hơn thứ 2

    // Duyệt ngược từ phải sang trái
    for (int i = n - 1; i >= 0; --i) {
        // Xử lý stack2 để tìm phần tử lớn hơn thứ 2
        while (!stack2.empty() && nums[stack2.top()] <= nums[i]) {
            stack2.pop();
        }
        if (!stack2.empty()) {
            res[i] = nums[stack2.top()];
        }
        
        // Xử lý stack1 để tìm phần tử lớn hơn đầu tiên
        while (!stack1.empty() && nums[stack1.top()] <= nums[i]) {
            stack1.pop();
        }
        
        // Đưa các phần tử lớn hơn thứ 1 vào stack2 để kiểm tra cho các phần tử sau
        if (!stack1.empty()) {
            stack2.push(stack1.top());
        }
        
        // Đẩy chỉ số phần tử hiện tại vào stack1
        stack1.push(i);
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> result = secondGreaterElement(nums);

    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
