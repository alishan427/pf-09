#include <iostream>
using namespace std;
main()
{
   string word = "word";
   cout << "Enter Word: ";
   cin >> word;
   int length = word.length();
   if (length % 2 ==0)
   {
    cout << "even";
   }
   else
   {
    cout << "odd";
   }

}