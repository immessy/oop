#include <iostream>
#include <string>
using namespace std;

class SimpleDictionary
{
private:
    string dictKeys[100];     // Array to store keys
    string dictValues[100];   // Array to store corresponding values
    int pairCount;            // Current number of key-value pairs

public:
    SimpleDictionary()
    {
        pairCount = 0;        // Start with empty dictionary
    }

    void addEntry(const string &k, const string &v) 
    {
        for(int i = 0; i < pairCount; ++i) 
        {
            if(dictKeys[i] == k) 
            {
                dictValues[i] = v; // Update value if key exists
                return;
            }
        }
        if(pairCount < 100) 
        {
            dictKeys[pairCount] = k;      // Add new key
            dictValues[pairCount] = v;    // Add new value
            pairCount++;
        } 
        else 
        {
            cout << "Dictionary is full" << endl; // Handle full array
        }
    }

    void findKey(const string& k) const 
    {
        for(int i = 0; i < pairCount; ++i) 
        {
            if(dictKeys[i] == k) 
            {
                cout << "Found! Value: " << dictValues[i] << endl;
                return;
            }
        }
        cout << "Key not found." << endl;
    }

    void showAll() const 
    {
        if(pairCount == 0) 
        {
            cout << "Dictionary is empty" << endl;
            return;
        }
        cout << "Key-Value Pairs:" << endl;
        for(int i = 0; i < pairCount; ++i) 
        {
            cout << dictKeys[i] << " : " << dictValues[i] << endl;
        }
    }
};

int main() 
{
    SimpleDictionary myDict;
    myDict.addEntry("Name", "A");
    myDict.addEntry("apple", "red");
    myDict.addEntry("grape", "purple");

    myDict.showAll();      // Show all key-value pairs
    myDict.findKey("red"); // Key exists
    myDict.findKey("Country"); // Key doesn't exist

    return 0;
}
