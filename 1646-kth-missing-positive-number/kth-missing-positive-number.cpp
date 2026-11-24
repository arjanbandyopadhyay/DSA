class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cur = 1;
        int i = 0;

        while(k > 0) {
            if(i < arr.size() && arr[i] == cur) {
                i++;
            } else {
                k--;
                if(k == 0) return cur;
            }
            cur++;
        }

        return cur;
    }
};