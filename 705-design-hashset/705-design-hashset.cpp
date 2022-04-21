class MyHashSet {
    map<int,int> mp;
    public:
    MyHashSet() {
        
    }
    void add(int key) {
       mp[key]=1;
    }
    void remove(int key) {
        if(mp.find(key)!=mp.end())
            mp.erase(key);
    }
    bool contains(int key) {
        return mp.find(key)!=mp.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */