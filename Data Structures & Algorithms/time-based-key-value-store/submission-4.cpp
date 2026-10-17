class TimeMap {
public:

    unordered_map<string, map<int, string>> timeValMap;

    TimeMap() {}

    void set(string key, string value, int timestamp) 
    {
        timeValMap[key].insert({ timestamp, value });
    }

    string get(string key, int timestamp) 
    {
        auto it = timeValMap[key].upper_bound(timestamp);

        if (it == timeValMap[key].begin()) return "";

        return prev(it)->second;
    }
};
