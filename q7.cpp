#include <iostream>
using namespace std;

class Sorter 
{
private:
    int* arr;
    int size;

public:
    Sorter(int n) 
    {
        size = n;
        arr = new int[size];
    }

    void inputData() 
    {
        for(int i = 0; i < size; i++) 
        {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    void bubbleSort() 
    {
        for(int i = 0; i < size - 1; i++) 
        {
            for(int j = 0; j < size - i - 1; j++) 
            {
                if(arr[j] > arr[j + 1]) 
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void insertionSort() 
    {
        for(int i = 1; i < size; i++) 
        {
            int key = arr[i];
            int j = i - 1;
            while(j >= 0 && arr[j] > key) 
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    void selectionSort() 
    {
        for(int i = 0; i < size - 1; i++) 
        {
            int minIndex = i;
            for(int j = i + 1; j < size; j++) 
            {
                if(arr[j] < arr[minIndex])
                    minIndex = j;
            }
            if(minIndex != i) 
            {
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
    }

    void displayData() 
    {
        for(int i = 0; i < size; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Sorter() 
    {
        delete[] arr;
    }
};

int main() 
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    Sorter s(n);
    s.inputData();

    cout << "Original array: ";
    s.displayData();

    s.bubbleSort();
    cout << "After Bubble Sort: ";
    s.displayData();

    s.insertionSort();
    cout << "After Insertion Sort: ";
    s.displayData();

    s.selectionSort();
    cout << "After Selection Sort: ";
    s.displayData();

    return 0;
}
