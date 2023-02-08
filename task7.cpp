#include <iostream>
using namespace std;
main()
{
    string word;
    char letter;
    bool isFound = false;
    cout << "Enter word: ";
    cin >> word;
    cout << "enter letter to find: ";
    cin >> letter;

    for(int idx = 0; word[idx] != '\0'; idx++)
    {
        if (word[idx] == letter)
        {
            isFound = true;
            
        }
    }
    if(isFound == true)
    {
        cout << "letter is found";
    }
    else
    {
      cout << "not found";
    }
}