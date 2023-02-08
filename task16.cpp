#include <iostream>
using namespace std;
main()
{
    int n, num1;
    int numbers[n];
    bool isPresent = false;
    cout << "Enter Numbers: ";
    cin >> numbers[n];
    cout << "Enter number to check:";
    cin >> num1;
    for(int idx =0 ; idx < n ; idx =idx+1)
    {
        if (numbers[idx] == num1)
        {
            isPresent = 1;
        }
    }
    if(isPresent == 1)
    {
        cout << "Already Present";
    }
    else
    {
     cout << "Not Present";
    }
}