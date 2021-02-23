#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
    static vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while(i >=0 and j >=0) {
            if(nums1[i] > nums[j] ) {
                nums1[k--] = nums1[i--];
            }
            else {
                nums1[k--] = nums2[j--];
            }
        }
        while( j >= 0) {
            nums1[k--] = nums2[j--];
        }
        return nums1;
    }
}

int main() {
    return 0;
}