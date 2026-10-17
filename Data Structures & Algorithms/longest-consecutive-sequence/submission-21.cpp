
class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        unordered_set<int> numbers;
        for (int& num : nums) numbers.insert(num);

        if (numbers.size() <= 1) return numbers.size();

        int maxSeq = 1;
        for (auto& n : numbers)
        {
            if (numbers.count(n - 1)) continue;

            int seqLength = 0;
            int i = 0;

            while (numbers.count(n + i))
            {
                i++;
                seqLength++;
            }

            if (maxSeq < seqLength) maxSeq = seqLength;
        }

        return maxSeq;
    }
};
