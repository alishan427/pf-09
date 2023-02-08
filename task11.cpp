#include <iostream>
using namespace std;
main()
{    bool isPresent = false;
    string word = "word";
    char letter;
    cout << "Enter word: ";
    cin >> word;
    cout << "Enter letter: ";
    cin >> letter;
    int length = word.length();
    for (int idx = 0; idx < length; idx = idx + 1)
    {
        if (word[length - 1] == letter)
        {
        isPresent = 1;
        }        
    }
       if(isPresent == 1)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
}