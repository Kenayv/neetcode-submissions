

class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        unordered_set<int> numbers;

        for (int& num : nums) numbers.insert(num);

        int maxSeq = 0;
        for (auto& num : numbers)
        {
            int i = -1;
            int seqLength = 1;

            while (numbers.count(num + i))
            {
                numbers.erase(num + i);
                i--;
                seqLength++;
            }

            i = 1;
            while (numbers.count(num + i))
            {
                numbers.erase(num + i);
                i++;
                seqLength++;
            }

            if (maxSeq < seqLength) maxSeq = seqLength;
        }
        return maxSeq;
    }
};

