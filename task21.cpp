#include <iostream>
using namespace std;
main()
{
    int arr1Size = 2;
    int array1[arr1Size];
    cout << "Enter 2 Numbers for 1st Array" << endl;
    for (int x = 0; x < arr1Size; x = x + 1)
    {
        cout << "Enter Number: ";
        cin >> array1[x];
    }

        int arr2Size;
    cout << "Enter size of 2 array: ";
    cin >> arr2Size;
    int array2[arr2Size];

    for (int y = 0; y < arr2Size; y = y + 1)
    {
        cout << "Enter Number: ";
        cin >> array2[y];
    }

    int sum = arr1Size + arr2Size;
    int array3[sum];

    for (int z = 0; z < arr2Size; z = z + 1)
    {
        array3[z+1] = array2[z];
    }
   
   
    array3[0] = array1[0];
    array3[sum - 1] = array1[1];

    for (int z = 0; z < sum; z = z + 1)
    {
        cout << array3[z] << endl;
    }
}