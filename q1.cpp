#include <iostream>
using namespace std;

class SimpleList 
{
private:
    int* elements; // Dynamic array to store list elements
    int capacity;  // Total capacity of array
    int count;     // Current number of elements

public:
    SimpleList() 
    {
        capacity = 2;  // Start with small capacity
        count = 0;
        elements = new int[capacity];
    }

    void add(int value) 
    {
        if (count == capacity) 
        {
            // Double the capacity when full
            capacity *= 2;
            int* temp = new int[capacity];
            for (int i = 0; i < count; ++i)
                temp[i] = elements[i];
            delete[] elements;
            elements = temp;
        }
        elements[count++] = value; // Add new element
    }

    void remove() 
    {
        if (count > 0)
            count--; // Remove last element
        else
            cout << "List is empty" << endl;
    }

    void display() 
    {
        if (count == 0) 
        {
            cout << "List is empty" << endl;
            return;
        }
        cout << "[ ";
        for (int i = 0; i < count; ++i)
            cout << elements[i] << " ";
        cout << "]" << endl;
    }

    int size() 
    {
        return count; // Return number of elements
    }

    ~SimpleList() 
    {
        delete[] elements; // Free memory
    }
};

int main() 
{
    SimpleList myList;
    myList.add(1);
    myList.add(2);
    myList.add(3);
    myList.display();
    cout << "Size: " << myList.size() << endl;

    myList.remove();
    myList.remove();
    myList.remove();
    myList.remove(); // Test removing from empty list
    myList.display();
    return 0;
}
