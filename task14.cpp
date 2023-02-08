#include <iostream>
using namespace std;
main()
{
  string word = "word";

  cout << "enter word: ";
  cin >> word;
  int length = word.length();
  int count = 0;
  for (int idx = 0; idx < length; idx = idx + 1)
  {
    if ((word[idx] == 'a' || word[idx] == 'e') || (word[idx] == 'i' || word[idx] == 'o' || word[idx] == 'u'))
      count = count + 1;
  }


  cout << count;
}