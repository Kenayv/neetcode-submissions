
class Solution {
public:
	vector<int> topKFrequent(vector<int> nums, int k) 
	{
		unordered_map<int, int> count;
		unordered_map<int, vector<int>> map;
	
		for (int num : nums    ) count[num]++;
		for (auto& pair : count) map[pair.second].push_back(pair.first);

		vector<int> result;

		for (int i = nums.size(); i > 0; i--)
		{
			if (map.find(i) != map.end())
			{
				for (int j = 0; j < map[i].size(); j++)
				{
					result.push_back(map[i][j]);
				}
			}
			if (result.size() >= k) return result;
		}

		return result;
	}
};
