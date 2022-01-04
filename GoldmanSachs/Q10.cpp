    int findKthLargest(vector<int>& nums){
        vector<int> ans;
        make_heap(nums.begin(), nums.end());
        for (int i = 1; i <=10; i++)
        {
            ans.push_back(nums.front());
            pop_heap(nums.begin(), nums.end());
            nums.pop_back();
        }
    }
