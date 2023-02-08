#include <iostream>
using namespace std;
main()
{
    int size;
    float sum;
    cout << " Enter size: ";
    cin >> size;
    float resistance[size];
    for (int x = 0; x < size; x = x + 1)
    {
        cout << "Enter Resistence: ";
        cin >> resistance[x];
        sum = sum + resistance[x];
    }
    cout << sum;
}