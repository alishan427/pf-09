#include <iostream>
using namespace std;
main()
{
  string word = "word";
  cout << "Enter word: ";
  cin >> word;
  int length = word.length();
  for (int idx =0 ; idx <= length ; idx= idx+1)
  {
      cout << word[length - idx];
  }

}