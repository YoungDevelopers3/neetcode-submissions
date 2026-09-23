class MyHashSet {
public:
    int size=1000;
    vector<list<int>>buckets;
    MyHashSet() {
        buckets.resize(size);
    }
    
    void add(int key) {
        int index=key%size;
        for(int i:buckets[index]){
            if(i==key){
                return;
            }
        }
        buckets[index].push_back(key);
    }
    
    void remove(int key) {
        int index=key%size;
        buckets[index].remove(key);
    }
    
    bool contains(int key) {
        int index=key%size;
        for(int i:buckets[index]){
            if(i==key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */