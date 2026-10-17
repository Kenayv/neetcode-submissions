

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> numbers;

        for (int num : nums) numbers.insert(num);

        int maxSeq = 0;
        for (int num : nums)
        {
            std::cout << "num: " << num << std::endl;
            int i = -1;
            int seqLength = 1;

            while (numbers.count(num + i))
            {
                std::cout << num << ' ' << i << '\n';
                numbers.erase(num + i);
                i--;
                seqLength++;
                std::cout << "1. ereasing: " << num + i << "\n";;
            }
          
            i = 1;
            while (numbers.count(num + i))
            {
                i++;
                seqLength++;
                numbers.erase(num);
                std::cout << "2. ereasing: " << num << "\n";;

            }

            if (maxSeq < seqLength) maxSeq = seqLength;
        }
        return maxSeq;
    }
};
