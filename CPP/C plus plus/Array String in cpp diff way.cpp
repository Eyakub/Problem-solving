#include <iostream>
#include <string>
using namespace std;

int main () {
  string mystr;
  cout << "What's your name? ";
  getline (cin, mystr);
  cout << "Hello " << mystr << ".\n";
  cout << "What is your favorite team? ";
  getline (cin, mystr);
  cout << "I like " << mystr << " too!\n";
  return 0;
}
and

#include <iostream>
using namespace std;

int main () {
  char name[256], title[256];

  cout << "Enter your name: ";
  cin.getline (name,256);

  cout << "Enter your favourite movie: ";
  cin.getline (title,256);

  cout << name << "'s favourite movie is " << title;

  return 0;
}
#include<iostream>
#include<string>
#include<iomanip>
#include<stdio.h>
#include<string.h>
 using namespace std;
 int main()
 {
     char ch[50], chh[50];
     gets(ch);
     gets(chh);
     cout << ch << "    " << chh << endl;
     return 0;
 }
