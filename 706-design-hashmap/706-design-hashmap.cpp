class MyHashMap {
    map<int,int> v;
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        v[key]=value;
    }
    
    int get(int key) {
        if(v.find(key)==v.end())
            return -1;
        else
            return v[key];
    }
    
    void remove(int key) {
        if(v.find(key)!=v.end())
            v.erase(key);
    }
};