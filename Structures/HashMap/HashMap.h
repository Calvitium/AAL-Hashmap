//
// Created by mateusz on 01.11.19.
//

#ifndef HASHMAP_HASHMAP_H
#define HASHMAP_HASHMAP_H

#include <utility>
#include <string>

using namespace std;

template <typename KeyType, typename ValueType>
class HashMap {
    using Key = KeyType;
    using Value = ValueType;
    using Element = pair<Key, Value>;

private:
    const float MAX_LOAD_FACTOR = 0.3;
    int capacity;
    int size;
    Element **buffer;

public:
   ~HashMap();
    HashMap();
    explicit HashMap(int capacity);
    void remove(Key key);
    void show();
    int getSize();
    Value valueOf(Key key);
    HashMap& operator=(HashMap&& other) noexcept;
    Value& operator[](Key key);

private:
    void reallocate();
    int convertKey(Key key);
    int hash1(int k);
    int hash2(int k);
    int hashKey(int key, int attempt);
    int findIndex(Key key);


};




#endif //HASHMAP_HASHMAP_H
