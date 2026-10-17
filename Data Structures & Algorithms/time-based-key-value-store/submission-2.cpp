class TimeMap {
public:

    unordered_map<string, map<int, string>> keyMap;

    TimeMap() { }
    
    void set(string key, string value, int timestamp) {
        keyMap[key].insert({timestamp, value});
    }
    
    string get(string key, int timestamp) 
    {
        auto it = keyMap[key].upper_bound(timestamp);
        return it == keyMap[key].begin() ? "" : prev(it)->second;
    }
};
