class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) 
    {
        vector<pair<int, int>> pairs(position.size());

        for (int i = 0; i < position.size(); i++)
        {
            pairs[i] = { position[i], speed[i]};
        }

        sort(pairs.rbegin(), pairs.rend());

        
        stack<double> times;

        times.push((double(target - pairs[0].first)) / pairs[0].second);

        for (auto& p : pairs)
        {
            double arrival = (double)(target - p.first) / p.second;

            if (arrival > times.top()) times.push(arrival);
        }

        return times.size();
    }
};
