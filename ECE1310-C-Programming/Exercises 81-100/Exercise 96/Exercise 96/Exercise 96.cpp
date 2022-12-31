#include <iostream>
#include <ctime>
using namespace std;

//I added some things I would want in the program and moved around some lines of code into other functions but functions the same nonetheless.
void printArray(int arrayx[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arrayx[i] << " ";
    }
}
void swapback(int arrayx[], int i)
{
    int temp = 0;
    temp = arrayx[i - 1];
    arrayx[i - 1] = arrayx[i];
    arrayx[i] = temp;
}
bool linear_search(int arrayx[], int size, int key)
{
    bool found = false;
    int current_inx = 0;
    int count = 0;
    cout << "The key is " << key << "\n";
    while (current_inx < size)
    {
        if (arrayx[current_inx] == key)
        {
            found = true;
            count++;
        }
        current_inx++;

    }
    if (found == true)
    {
        cout << "The key was found " << count << " times\n";
    }
    return found;
}
void insertion_sort(int a[], int size)
{
    int i = 1, j = 0;
    while (i < size)
    {
        j = i;
        while (j > 0 && (a[j - 1] > a[j]))
        {
            swapback(a, j);
            j = j - 1;
        }
        i = i + 1;

    }
}
bool binary_search(int arrayx[], int size, int key)
{
    bool found = false;
    int low = 0, high = size - 1, middle = (high + low + 1) / 2;
    while ((low <= high) && (found == false))
    {
        if (arrayx[middle] == key)
        {
            found = true;
        }
        else
        {
            if (key < arrayx[middle])
            {
                high = middle - 1;
            }
            else
            {
                low = middle + 1;
            }
        }
        middle = (high + low + 1) / 2;
    }
    return found;
}
void initialize_array(int arrayx[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arrayx[i] = rand() % 100;
    }
}

double calc_average(int arrayx[], int size)
{
    double avg = 0;
    double Size = size;

    for (int i = 0; i < size; i++)
    {
        avg = avg + arrayx[i];
    }
    avg = avg / Size;
    cout << "The average of the array is " << avg << "\n";
    return avg;
}

int main()
{
    
    int const n = 5;
    int key = 0;
    int arrayA[n];
    double average = 0;
    bool found = false;
    cout << "Welcome, in this program we create an array of 50 random numbers, show you the average, \nand have you pick a key to search for with linear and binary search.\n";
    initialize_array(arrayA, n);
    average = calc_average(arrayA, n);

    cout << "Enter a key you would wish to search for ";
    cin >> key;
    cout << "\n\n";
    cout << "Using linear search: \n";

    if (linear_search(arrayA, n, key) == true)
    {
        cout << key << " was found in the array\n";
    }
    else
    {
        cout << key << " was not found in the array\n";
    }
    insertion_sort(arrayA, n);
    cout << "\n\nAfter sorting the array and using binary search:\n";
    if (binary_search(arrayA, n, key) == true)
    {
        cout << key << " was found in the array\n";
    }
    else
    {
        cout << key << " was not found in the array\n";
    }
    cout << "\n\nHere was the array generated:\n";
    printArray(arrayA, n);

    return 0;
}
