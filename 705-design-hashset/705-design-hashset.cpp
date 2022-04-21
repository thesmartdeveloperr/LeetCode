class MyHashSet {
    set<int> st;
    public:
    MyHashSet() {
        
    }
    void add(int key) {
       st.insert(key);
    }
    void remove(int key) {
        if(st.count(key))
            st.erase(key);
    }
    bool contains(int key) {
        return st.count(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */