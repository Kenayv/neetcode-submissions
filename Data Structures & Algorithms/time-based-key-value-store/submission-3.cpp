
class TimeMap {
public:
    unordered_map<string, map<int, string>> keyMap;

    TimeMap() {}

    void set(string key, string value, int timestamp) 
    {
        keyMap[key].insert({ timestamp, value });
    }

    string get(string key, int timestamp)
    {
        auto val = keyMap[key].upper_bound(timestamp);

        return val == keyMap[key].begin() ? "" : prev(val)->second;
    }
};
