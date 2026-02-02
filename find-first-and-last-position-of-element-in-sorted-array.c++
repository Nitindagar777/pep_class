#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int arr[2] = {-1, -1};

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            if (arr[0] == -1)
                arr[0] = i;   
            arr[1] = i;       
        }
    }
    return vector<int>{arr[0], arr[1]};
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter sorted array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    vector<int> result = searchRange(nums, target);

    cout << "First and Last Position: ";
    cout << result[0] << " " << result[1] << endl;

    return 0;
}
