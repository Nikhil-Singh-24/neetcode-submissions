class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        qs(nums, 0, nums.size() - 1);
        return nums;
    }

    void qs(vector<int>& nums, int low, int high) {
        if (low < high) {
            int ind = pivot(nums, low, high);
            qs(nums, low, ind - 1);
            qs(nums, ind + 1, high);
        }
    }

    int pivot(vector<int>& nums, int low, int high) {
        int piv = nums[low];
        int i = low, j = high;

        while (i < j) {
            while (i <= high && nums[i] <= piv) i++;
            while (j >= low && nums[j] > piv) j--;

            if (i < j) {
                swap(nums[i], nums[j]);
            }
        }

        swap(nums[low], nums[j]);
        return j;
    }
};