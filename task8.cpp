#include <iostream>
using namespace std;
main()
{
  string word = "word";
    cout << "Enter word: ";
    cin >> word; 
    int a;
    a = word.length();
    for (int idx =0; idx < a; idx= idx+1)
    {
    cout << "the alphabet at  index " << idx << "is:" << word[idx] << endl;
   
    }




}