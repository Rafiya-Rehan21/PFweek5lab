#include <iostream>
using namespace std;
char alphabet(char letter);

main()
{
  char letter;
  char result;
  cout << "Enter alphabet (A or a) in upper or lower case:";
  cin >> letter;
  result = alphabet(letter);
 

}
char alphabet(char letter)
{
  char result;
  if(letter== 'A')
  {
    cout << "You have entered capital A" << endl;
  }
  if(letter== 'a')
  {
     cout << "You have entered small a" << endl;
  }
  return result;
}