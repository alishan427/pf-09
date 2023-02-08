#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;
    int num1 = 01;
    cout << "Enter number to multiply: ";
    cin >> num1;
    int numbers[size];
    cout << "Enter numbers: ";
    cin >> numbers[size];
    for(int idx = 0; idx <= size ; idx = idx+1)
    {
       int multiply = 0;
       multiply = num1 * numbers[idx];
       cout << multiply;
    }
  
}