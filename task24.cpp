
#include <iostream>
using namespace std;
main()
{
  string word;
  char vowels[] = {'a','e', 'o' ,'u'};
  
  cout << "Enter String: ";
  getline(cin,word);
  char words[word.length()];
  int wordsCount = 0;
  for(int index = 0; index < word.length(); index++)
  {
    if(word[index] == 'a' || word[index] == 'A' || word[index] == 'E' || word[index] == 'e' || word[index] == 'I' || word[index] == 'i')
    {
      continue;
    }
    else
    {
      words[wordsCount] = word[index];
      wordsCount++;
    }
  }
  cout << words;
}
