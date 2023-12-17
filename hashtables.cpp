#include <iostream>
#include <vector>
#include <string>

// Define a simple hash function
size_t hashFunction(const std::string& key, size_t tableSize) {
    size_t hash = 0;
    for (char c : key) {
        hash = (hash + static_cast<size_t>(c)) % tableSize;
    }
    return hash;
}

// Define a structure for a key-value pair
struct KeyValuePair {
    std::string key;
    int value;

    KeyValuePair(const std::string& k, int v) : key(k), value(v) {}
};

class HashTable {
private:
    size_t tableSize;
    std::vector<std::vector<KeyValuePair>> table;

public:
    HashTable(size_t size) : tableSize(size), table(size) {}

    void insert(const std::string& key, int value) {
        size_t index = hashFunction(key, tableSize);
        table[index].emplace_back(key, value);
    }

    bool get(const std::string& key, int& value) {
        size_t index = hashFunction(key, tableSize);
        for (const KeyValuePair& pair : table[index]) {
            if (pair.key == key) {
                value = pair.value;
                return true;
            }
        }
        return false;
    }
};

int main() {
    HashTable hashTable(10);

    hashTable.insert("apple", 5);
    hashTable.insert("banana", 8);
    hashTable.insert("cherry", 12);

    int value;

    if (hashTable.get("apple", value)) {
        std::cout << "Value of apple: " << value << std::endl;
    } else {
        std::cout << "Key not found" << std::endl;
    }

    if (hashTable.get("grape", value)) {
        std::cout << "Value of grape: " << value << std::endl;
    } else {
        std::cout << "Key not found" << std::endl;
    }

    return 0;
}
