//
// Created by mateusz on 01.11.19.
//

#include <iostream>
#include "HashMap.h"
using namespace std;

template<typename KeyType, typename ValueType>
HashMap<KeyType, ValueType>::HashMap() {
    capacity = 61;
    size = 0;
    buffer = new Element*[capacity];
}

template<typename KeyType, typename ValueType>
HashMap<KeyType, ValueType>::HashMap(int capacity) {
    this->capacity = capacity;
    size = 0;
    buffer = new Element*[capacity];
}

template<typename KeyType, typename ValueType>
HashMap<KeyType, ValueType>::~HashMap() {
}

template<typename KeyType, typename ValueType>
void HashMap<KeyType, ValueType>::insert(HashMap::Element element) {
    this->operator[](element.first) = element.second;
}

template<typename KeyType, typename ValueType>
void HashMap<KeyType, ValueType>::remove(Key key) {
    int index = findIndex(key);
    if(buffer[index] == nullptr)
        return;
    delete buffer[index];
    buffer[index] = nullptr;
    size--;
}

template<typename KeyType, typename ValueType>
int HashMap<KeyType, ValueType>::getSize() {
    return capacity;
}

template<typename KeyType, typename ValueType>
ValueType HashMap<KeyType, ValueType>::valueOf(Key key) {
    int index = findIndex(key);
    return buffer[index] ?  buffer[index]->second  : 0;
}

template<typename KeyType, typename ValueType>
void HashMap<KeyType, ValueType>::show() {
    for(int i = 0; i<capacity; i++)
        if(buffer[i] != nullptr)
            wcout<<"MAP["<<i<<"] = "<<buffer[i]->first<<" "<<buffer[i]->second<<endl;
    cout<<endl<<"-------------------------------"<<endl<<endl;
}

template<typename KeyType, typename ValueType>
HashMap<KeyType, ValueType>& HashMap<KeyType, ValueType>::operator=(HashMap &&other) {
    buffer = other.buffer;
    capacity = other.capacity;
    size = other.size;
    other.buffer = nullptr;
    cout<<"Zastosowano konstruktor przenoszący"<<endl;
    return *this;
}

template<typename KeyType, typename ValueType>
int HashMap<KeyType, ValueType>::convertKey(Key key) {
    return  std::hash<Key>{}(key);
}

template<typename KeyType, typename ValueType>
int HashMap<KeyType, ValueType>::hash1(int k) {
    return k % capacity;
}

template<typename KeyType, typename ValueType>
int HashMap<KeyType, ValueType>::hash2(int k) {
    return 1 + k % (capacity - 2);
}

template<typename KeyType, typename ValueType>
int HashMap<KeyType, ValueType>::hashKey(int key, int attempt) {
    return (hash1(key) + attempt * hash2(key)) % capacity;
}

template<typename KeyType, typename ValueType>
ValueType& HashMap<KeyType, ValueType>::operator[](Key key) {
    auto *temp = new Element(key, ValueType{});
    int index = findIndex(key);
    if(buffer[index] != nullptr && buffer[index]->first == key)
        return buffer[index]->second;
    buffer[index] = temp;
    size++;
    return temp->second;
}

template<typename KeyType, typename ValueType>
void HashMap<KeyType, ValueType>::reallocate() {
    HashMap<Key, Value> bigger(capacity*2);
    for(int i = 0; i<capacity; i++)
        if(buffer[i] != nullptr)
            bigger[buffer[i]->first] = buffer[i]->second;
    *this = std::move(bigger);
}

template<typename KeyType, typename ValueType>
int HashMap<KeyType, ValueType>::findIndex(Key key) {
    int converted = convertKey(key);
    int attempt, index;
    attempt = 0;
    do{
        ++attempt;
        if(attempt > capacity * 0.1)
            reallocate();
        index = hashKey(converted, attempt);
        if(buffer[index] == nullptr)
            return index;
    }while(buffer[index]->first != key);
    return index;
}



