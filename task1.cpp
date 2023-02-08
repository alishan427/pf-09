#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for (int idx = 0; idx < size; idx = idx + 1)
    {
        cout << "enter number " << endl;
        cin >> arr[idx];
    }
    for (int x = 0; x < size; x = x + 1)
    {
        cout << " the number at " << x << " index is " << arr[x] << endl;
    }
    
}