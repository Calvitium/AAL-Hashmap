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
public:
    using Key = KeyType;
    using Value = ValueType;
    using Element = pair<Key, Value>;

private:
    int capacity;
    int size;
    Element **buffer;

public:
   ~HashMap();
    HashMap();
    explicit HashMap(int capacity);

    void insert(Element element);
    void remove(Key key);
    void show();
    int getSize();
    Value valueOf(Key key);
    HashMap& operator=(HashMap&& other);
    Value& operator[](Key key);

private:
    int convertKey(Key key);
    int hash1(int k);
    int hash2(int k);
    int hashKey(int key, int attempt);
    void reallocate();
    int findIndex(Key key);


};




#endif //HASHMAP_HASHMAP_H
