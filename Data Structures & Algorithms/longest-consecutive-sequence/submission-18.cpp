class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        unordered_set<int> numbers;
        for (int& num : nums) numbers.insert(num);

        if (numbers.size() <= 1) return numbers.size();

        int maxSeq = 0;
        for (auto& n : numbers)
        {
            std::cout << "for " << n - 1 << " || " << n + 1 << (numbers.count(n - 1) || !numbers.count(n + 1) ? " failed\n" : " passed\n");
            if (numbers.count(n - 1) || !numbers.count(n + 1)) continue;

            int seqLength = 0;
            int i = 0;
            int num = n;

            std::cout << n << ".\n";
            while (numbers.count(num + i))
            {
                std::cout <<"for " << num+i << " was here oi 2 \n";
                i++;
                seqLength++;
            }

            if (maxSeq < seqLength) maxSeq = seqLength;
            continue;
        }

        return maxSeq;
    }
};
