//
// Created by Mateusz Marciniewicz 293150
// Task: W14 + W22 + W32
//

#include <iostream>
#include "HashMap.h"
using namespace std;

template<typename KeyType, typename ValueType>
HashMap<KeyType, ValueType>::HashMap() {
    capacity = 60;
    size = 0;
    buffer = new Element*[capacity];
}

template<typename KeyType, typename ValueType>
HashMap<KeyType, ValueType>::HashMap(int capacity) {
    this->capacity = capacity;
    size = 0;
    buffer = new Element*[capacity];
    for(int i = 0; i<capacity; i++)
        buffer[i] = nullptr;

}

template<typename KeyType, typename ValueType>
HashMap<KeyType, ValueType>::~HashMap() {
    delete [] buffer;
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
    return size;
}

template<typename KeyType, typename ValueType>
ValueType HashMap<KeyType, ValueType>::valueOf(Key key) {
    int index = findIndex(key);
    return buffer[index] ?  buffer[index]->second  : nullptr;
}

template<typename KeyType, typename ValueType>
void HashMap<KeyType, ValueType>::show() {
    wcout<<"================================================="<<endl;
    wcout<<"   CAPACITY: "<<capacity<<", SIZE: "<<getSize()<<""<<endl;
    wcout<<"================================================="<<endl<<endl;

    for(int i = 0; i<capacity; i++)
        if(buffer[i] != nullptr)
            wcout<<"MAP["<<i<<"] = "<<"KEY: "<<buffer[i]->first<<"  VALUE: "<<"  "<<buffer[i]->second<<endl;
        else
            wcout<<"MAP["<<i<<"] = ---"<<endl;
    wcout<<endl<<"================================================="<<endl;

}

template<typename KeyType, typename ValueType>
HashMap<KeyType, ValueType>& HashMap<KeyType, ValueType>::operator=(HashMap &&other) noexcept{
    buffer = other.buffer;
    capacity = other.capacity;
    size = other.size;
    other.buffer = nullptr;
    return *this;
}

template<typename KeyType, typename ValueType>
int HashMap<KeyType, ValueType>::convertKey(Key key) {
    return  std::hash<Key>{}(key);
}

template<typename KeyType, typename ValueType>
int HashMap<KeyType, ValueType>::hash1(int convertedKey) {
    return convertedKey % capacity;
}

template<typename KeyType, typename ValueType>
int HashMap<KeyType, ValueType>::hash2(int convertedKey) {
    return 1 + convertedKey % (capacity - 2);
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
int HashMap<KeyType, ValueType>::findIndex(Key key) {
    int converted = convertKey(key);
    int attempt = 0, index;
    do{
        if(attempt > capacity * MAX_LOAD_FACTOR)
            reallocate();
        index = hashKey(converted, attempt);
        if(buffer[index] == nullptr)
            return index;
        ++attempt;
    }while(buffer[index]->first != key);
    return index;
}

template<typename KeyType, typename ValueType>
void HashMap<KeyType, ValueType>::reallocate() {
    HashMap<Key, Value> biggerMap(capacity*2);
    for(int i = 0; i<capacity; i++)
        if(buffer[i] != nullptr)
            biggerMap[buffer[i]->first] = buffer[i]->second;
    *this = std::move(biggerMap);
}



