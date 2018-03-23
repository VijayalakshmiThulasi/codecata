#include <iostream>

using namespace std;
int main()
{
  char v;
  cout<<"Enter a character";
  cin>>v;
  if( v=='a'|| v=='e'|| v=='i'|| v== 'o'|| v=='u'||
  v == 'A'||v== 'E'||v =='I'||v == 'O'||v =='U')
  {
      cout<<"vowel";
  }
  else if((v>= 'a'&& v<='z') || (v>='A'&& v<='Z'))
  {
      cout<<"consonant";
  }
  else
  {
      cout<<"not a alphabet";
  }
}
