class MyHashMap {
vector<list<pair<int,int>>> buckets;
    int size = 1000;

public:
    MyHashMap() {
        buckets.resize(size);
    }

    void put(int key, int value) {
        int idx = key % size;
        for (auto &p : buckets[idx]) {
            if (p.first == key) {
                p.second = value; // key exists — update value
                return;
            }
        }
        buckets[idx].push_back({key, value}); // new key — insert
    }

    int get(int key) {
        int idx = key % size;
        for (auto &p : buckets[idx]) {
            if (p.first == key) return p.second;
        }
        return -1; // not found
    }

    void remove(int key) {
        int idx = key % size;
        buckets[idx].remove_if([key](pair<int,int> &p) {
            return p.first == key;
        });
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */