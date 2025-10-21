#include <iostream>
using namespace std;

class SimpleList 
{
private:
    int* elements; // Array to hold the list items
    int capacity;  // Current capacity of the array
    int count;     // How many items are currently in the list

public:
    SimpleList() 
    {
        capacity = 2;       // Start small, we'll grow if needed
        count = 0;          
        elements = new int[capacity]; // Allocate memory for initial capacity
    }

    void add(int value) 
    {
        if (count == capacity) 
        {
            capacity *= 2;             // Double the capacity when full
            int* temp = new int[capacity];
            for (int i = 0; i < count; ++i)
                temp[i] = elements[i]; // Copy old items to new bigger array
            delete[] elements;         
            elements = temp;           // Update pointer to new array
        }
        elements[count++] = value;     // Add new element at the end
    }

    void remove() 
    {
        if (count > 0)
            count--;                   // Remove last element
        else
            cout << "List is empty" << endl; // Edge case handled
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
            cout << elements[i] << " "; // Print all items
        cout << "]" << endl;
    }

    int size() 
    {
        return count; // Return the number of elements
    }

    ~SimpleList() 
    {
        delete[] elements; // Free memory when object is destroyed
    }
};

int main() 
{
    SimpleList myList;
    myList.add(1); 
    myList.add(2);
    myList.add(3);

    myList.display();               // Shows [1 2 3]
    cout << "Size: " << myList.size() << endl;

    myList.remove();
    myList.remove();
    myList.remove();
    myList.remove();                // Trying to remove from empty list
    myList.display();               // Shows "List is empty"

    return 0;
}
