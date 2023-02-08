#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int number[size];
    for (int x = 0; x < size; x = x + 1)
    {
        cout << "enter numbers: ";
        cin >> number[x];
    }
    int small = number[0];
    for (int x = 1; x < size; x = x + 1)
    {
        if (small > number[x])
        {
            small = number[x];
        }
        cout << small;
    }
}