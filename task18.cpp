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
    int large = number[0];
    for (int x = 0; x < size; x = x + 1)
    {
        if (large < number[x])
        {
            large = number[x];
        }
        cout << large;
    }
}