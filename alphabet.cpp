#include <iostream>

using namespace std;

int main()
{
  char a;
  cout<<"Enter the input";
  cin>>a;
  if((a >= 'a'&& a<='z') || (a>='A'&& a<='Z'))
  {
      cout<<"Alphabet";
  }
    else
  {
      cout<<" Not an alphabet";
  }
}
