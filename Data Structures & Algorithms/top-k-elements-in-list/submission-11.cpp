class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int, int> count;
        unordered_map<int, vector<int>> freq;

        for (int& num : nums) count[num]++;

        for (auto& pair : count)
        {
            freq[pair.second].push_back(pair.first);
        }

        vector<int> result;

        for (int i = nums.size(); i >= 1; i--)
        {
            if (freq.find(i) != freq.end())
            {
                for (int& n : freq[i])
                {
                    result.push_back(n);
                    if (result.size() >= k) return result;
                }
            }
        }

        return {};
    }
};
