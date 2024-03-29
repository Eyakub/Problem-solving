

constructors 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    char *line = "short line for testing";

    // with no arguments
    string s1;
    s1 = "Anatoliy";
    cout << "s1  is: " << s1 << endl;

    // copy constructor
    string s2 (s1);
    cout << "s2  is: " << s2 << endl;

    // one argumen
    string s3 (line);
    cout << "s3  is: " << s3 << endl;

    // first argumen C string
    // second number of characters
    string s4 (line,10);
    cout << "s4  is: " << s4 << endl;

    // 1 - C++ string
    // 2 - start position
    // 3 - number of characters
    string s5 (s3,6,4); // copy word 'line' from s3
    cout << "s5  is: " << s5 << endl;

    // 1 - number characters
    // 2 - character itself
    string s6 (15,'*');
    cout << "s6  is: " << s6 << endl;

    // 1 - start iterator
    // 2 - end iterator
    string s7 (s3.begin(),s3.end()-5);
    cout << "s7  is: " << s7 << endl;

    // you can instantiate string with assignment
    string s8 = "Anatoliy";
    cout << "s8  is: " << s8 << endl;

    return 0;
}
OUTPUT:
// s1  is: Anatoliy
// s2  is: Anatoliy
// s3  is: short line for testing
// s4  is: short line
// s5  is: line
// s6  is: ***************
// s7  is: short line for te
// s8  is: Anatoliy


getline 1.


/* 1  getline ( intut_stream, str, delim );
  Extracts characters from intut_stream and stores them
  in str until s.max_size() characters have been extracted,
  the end of file occurs, or delim is encountered, in which
  case delim is extracted from istr but is not stored in s
  2 getline( Iter, str )
  Inputs a string value for str as in the preceding func�
  tion with delim =
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main ()
{
    string str;
    cout << "Enter string (EOL = $) : ";
    getline (cin, str, '$');
    cout << "Str is : " << str << endl;

    ifstream In("data.dat");
    vector v;

    cout << endl << "Read data from file" << endl;
    while ( ! In.eof() )
    {
    	getline (In, str);
    	v.push_back(str);
    }

    copy (v.begin(),v.end(),
    		ostream_iterator(cout,"\n"));
    cout << endl;


    return 0;
}
OUTPUT:
// Enter string (EOL = $) : Str is : first line
// second line$
//
// Read data from file
// file: "data.dat"
// second line
// last line


 << >> operators 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str;

    cout << "Enter string for testing : ";
    cin  >> str;
    cout << "\nString is : " << str << endl;

    cout << "Enter string for testing "
    	 << "(d to quit) : ";
    while ( cin >> str )
    {
    	cout << endl;
    	cout << "String is : " << str << endl;
    	cout << "Enter string for testing "
             << "(d to quit) : ";
    }

    return 0;
}
OUTPUT:
// Enter string for testing : first
// String is : first
// Enter string for testing (d to quit) : second
// String is : second
// Enter string for testing (d to quit) : third
// String is : third
// Enter string for testing (d to quit) :


 + += = operators 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "Hello";
    cout << "str is : " << str << endl;
    str += ",";
    str += ' ';
    cout << "str is : " << str << endl;

    string s;
    s = str + "World";
    cout << "s is : " << s << endl;

    char ch = '!';
    s += ch;
    cout << "s is : " << s << endl;

    return 0;
}
OUTPUT:
// str is : Hello
// str is : Hello,
// s is : Hello, World
// s is : Hello, World!


append 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "Nobody is perfect";
    string s   = ""; // empty string
    char *ch   = "abcdef";

    // append string str at the end of s;
    // return s

    // appends at the end of s a copy of the n characters
    // in str, starting at position pos; if n is too
    // large, characters are copied only until the end
    // of str is reached;
    // returns s
    s.append(str,0,6);
    cout << "s is : " << s << endl;

    // appends copies of the characters in the range [inpIt1,
    // inpIt2] to s; returns s
    string::iterator inpIt1 = str.begin()+6;
                    //start from ' is'
    string::iterator inpIt2 = str.end();

    s.append(inpIt1,inpIt2);
    cout << "s is : " << s << endl;

    // appends three !
    s.append(3,'!');
    cout << "s is : " << s << endl;

    // appends the first n characters in ch at the end
    // of s; returns s
    s.append(ch,3);
    cout << "s is : " << s << endl;

    // appends charArray at the end of s; returns s
    s.append(ch,3);
    cout << "s is : " << s << endl;

    return 0;
}
OUTPUT:
// s is : Nobody
// s is : Nobody is perfect
// s is : Nobody is perfect!!!
// s is : Nobody is perfect!!!abc
// s is : Nobody is perfect!!!abcabc


assign 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "Nobody is perfect";
    string s   = "";
    char *ch   = "Robert Frost";

    // assigns a copy of str to s; returns s
    s.assign(str);
    cout << "s is : " << s << endl;


    // assigns to s a copy of the n characters in str, start�
    // ing at position 10: if n is too large, characters are
    // copied only until the end of str is reached: returns s
    s.assign(str,10,7); // perfect
    cout << "s is : " << s << endl;

    // assigns to s a string consisting of the first n charac�
    // ters in ch: returns s
    s.assign(ch,6);
    cout << "s is : " << s << endl;

    // assigns to s a copy of ch: returns s
    s.assign(ch);
    cout << "s is : " << s << endl;

    // assigns  to s a string consisting of the characters in
    // the range str.begin(), str.end(); returns s
    s.assign(str.begin(),str.end());
    cout << "s is : " << s << endl;

    // assigns to s a string consisting of n copies of ch;
    // returns s
    s.assign(17,'*');
    cout << "s is : " << s << endl;

    return 0;
}
OUTPUT:
// s is : Nobody is perfect
// s is : perfect
// s is : Robert
// s is : Robert Frost
// s is : Nobody is perfect
// s is : *****************


at 1.

// returns s[pos]

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string s = "Nobody is perfect";

    // Returns s[pos]
    for ( int pos = 0; pos < s.length(); ++pos )
    	cout << s.at(pos) << " ";
    cout << endl;

    return 0;
}
OUTPUT:
// N o b o d y   i s   p e r f e c t


begin 1.

// Returns an iterator positioned at the
// first character in a string

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "C++ is best computer language";

    string::iterator It = str.begin();

    while ( It != str.end() )
    {
    	if ( *It == ' ' )
    		*It = '\n';
    	cout << *It++;
    }
    cout << endl;

    return 0;
}
OUTPUT:
// C++
// is
// best
// computer
// language


c_str 1.

// returns (the base address of) a char
// array containing the characters stored in s,
// terminated by a null character.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "Anatoliy";
    char *ary = new char[str.length()+1];

    // strcpy ( ary, str ); that is wrong way
    strcpy ( ary, str.c_str() ); // that is correct

    cout << ary << endl;

    return 0;
}
OUTPUT:
// Anatoliy


capacity 1.

// returns the size (of type size_type)
// of the storage allocated in string

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "C++ is best computer language";

    string::size_type cap;
    cap = str.capacity();

    cout << "Capacity of str is: " << cap << endl;
    cout << "Size of str is    : " << str.size()
         << endl;
    cout << "Length of str is  : " << str.length()
         << endl;

    cout << "Resize the str for 50 character" << endl;
    str.resize(50);
    cap = str.capacity();

    cout << "Capacity of str is: " << cap << endl;
    cout << "Size of str is    : " << str.size()
         << endl;
    cout << "Length of str is  : " << str.length()
         << endl;

    return 0;
}
OUTPUT:
// Capacity of str is: 32
// Size of str is    : 29
// Length of str is  : 29
// Resize the str for 50 character
// Capacity of str is: 64
// Size of str is    : 50
// Length of str is  : 50


compare 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str1 = "string";
    string str2 = "String";
    string str3 = "second string";
    char ch[]   = "first string";

    cout << "string str1 is : " << str1 << endl;
    cout << "string str2 is : " << str2 << endl;
    cout << "char ary ch is : " << ch   << endl;
    cout << "string str3 is : " << str3 << endl;
    cout << endl;

    // compare str1 and str2
    cout << "1." << endl;
    size_t comp = str1.compare(str2);
    cout << "String str1 is ";
    ( comp == 0 ) ? cout << "equal" : cout
         << "not equal";
    cout << " to string str2" << endl;

    // compare str1 and literal string "string"
    cout << "2." << endl;
    comp = str1.compare("string");
    cout << "String str1 is ";
    ( comp == 0 ) ? cout << "equal" : cout
        << "not equal";
    cout << " to array of char \"string\"" << endl;

    // 3. and 4. doesn't work with Microsoft
    // Visual Studio compiler

    // compare str3 start from pos 7 to 5
    // with str1
    cout << "3." << endl;
    comp = str3.compare(str1,7,5);
    cout << "Part of string str3 is ";
    ( comp == 0 ) ? cout << "equal" : cout
        << "not equal";
    cout << " to str1" << endl;

    // compare str3 start from pos 7
    // with literal string "string"
    cout << "4." << endl;
    comp = str3.compare("string",7);
    cout << "Part of string str3 is ";
    ( comp == 0 ) ? cout << "equal" : cout
        << "not equal";
    cout << " to C string \"string\"" << endl;

    // next 4 'compare' functions
    // doesn't work with GNU compiler

    cout << "5." << endl;
    comp = str1.compare(6,10,ch);
    cout << "String str1 is ";
    ( comp == 0 ) ? cout << "equal" : cout
    << "not equal";
    cout << " to part of char ary \"first string\""
    << endl;

    cout << "6." << endl;
    comp = str1.compare(0,3,str3);
    cout << "Part of str1 is ";
    ( comp == 0 ) ? cout << "equal" : cout
    << "not equal";
    cout << " to string \"second string\""
    << endl;

    cout << "7." << endl;
    comp = str1.compare(1,3,str2,1,3);
    cout << "String str1 is ";
    ( comp == 0 ) ? cout << "equal" : cout
    << "not equal";
    cout << " to part of string \"second string\""
    << endl;

    cout << "8." << endl;
    comp = str1.compare(1,3,str2,1,3);
    cout << "String str1 is ";
    ( comp == 0 ) ? cout << "equal" : cout
    << "not equal";
    cout << " to part of string \"second string\""
    << endl;

    return 0;
}
OUTPUT: GNU compiler
// string str1 is : string
// string str2 is : String
// char ary ch is : first string
// string str3 is : second string
//
// 1.
// String str1 is not equal to string str2
// 2.
// String str1 is equal to array of char "string"
// 3.
// Part of string str3 is equal to str1
// 4.
// Part of string str3 is equal to C string "string"
// 5.
// 6.
// 7.
// 8.

OUTPUT: Microsoft Visual Studio compiler
// string str1 is : string
// string str2 is : String
// char ary ch is : first string
// string str3 is : second string
//
// 1.
// String str1 is not equal to string str2
// 2.
// String str1 is equal to array of char "string"
// 3.
// 4.
// 5.
// String str1 is not equal to part of char ary "first
// string"
// 6.
// Part of str1 is not equal to string "second string"
// 7.
// String str1 is equal to part of string "second string"
// 8.
// String str1 is equal to part of string "second string"
// Press any key to continue


copy 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "First Name: Robert";
    char fname[255];
    cout << "str is: " << str << endl;

    int n = str.find(':');

    str.copy(fname, // copy to array
            n+1,    // how many char
            0);     // start position from str

    // must terminate fname with '\0';
    fname[n+1] = 0;

    cout << "fname is: " << fname << endl;

    return 0;
}
OUTPUT:
// str is: First Name: Robert
// fname is: First Name:


empty 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "*******";

    while ( ! str.empty() )
    {
    	cout << str << endl;
    	str.erase(str.end()-1);
    }
    cout << endl;

    return 0;
}
OUTPUT:
// *******
// ******
// *****
// ****
// ***
// **
// *


end 1.

// returns an iterator porsitioned immediately
// after the last character in string

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string s;
    string str = "*************************";
    size_t pos = str.length();

    while ( pos )
    {
    	s.assign ( str.begin(),str.end() - pos+1);
    	cout << s << endl;
    	pos -= 5;
    }

    return 0;
}
OUTPUT:
// *
// ******
// ***********
// ****************
// *********************


erase 1.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main ()
{
    string str, s;

    for ( char ch = 'a'; ch <= 'z'; ch++ )
        str.append(1,ch);
    s = str;
    cout << "str is: " << str << endl;
    cout << "s   is: " << str << endl;

    // removes 13 characters from the beginning
    str.erase(0,13);
    cout << "Erased range fron str : " << str << endl;
    // removes 13 characters starts from 14
    str = s.erase(13,13);
    cout << "Erased range from s   : " << str << endl;

    // removes one character pointed by s.begin()
    cout << endl << "Erase one, second character from s"
         << endl;
    s.erase(s.begin()+1);
    cout << "s     is: " << s << endl;

    // removes range of characters
    s.erase(s.begin(),s.begin()+4);
    cout << "s     is: " << s << endl;

    return 0;
}
OUTPUT:
// str is: abcdefghijklmnopqrstuvwxyz
// s   is: abcdefghijklmnopqrstuvwxyz
// Erased range fron str : nopqrstuvwxyz
// Erased range from s   : abcdefghijklm
//
// Erase one, second character from s
// s     is: acdefghijklm
// s     is: fghijklm


find 1.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main ()
{
    string  str("C++ is best language");
    int pos1, pos2; // size_t or size_type
                    // work not correct
    // search for first string "best" inside of str
    // default position is 0
    pos1 = str.find ("best");
    cout << "Word best is found on position " << pos1+1
         << endl;

    // if pattern is not found - return -1
    pos2 = str.find ("best",pos1+1);
    cout << "Word best is found on position " << pos2+1
         << endl;

    // search for first occurrence of character
    pos1 = str.find('g');
    cout << "First character 'g' found on position "
         << pos1
    	 << endl;

    // search for first occurrence of string
    string s = "is";
    pos1 = str.find (s);
    cout << "Word 'is' is found on position " << pos1+1
         << endl;

    return 0;
}
OUTPUT:
// Word best is found on position 8
// Word best is found on position 0
// First character 'g' found on position 15
// Word 'is' is found on position 5


find_first_not_of 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string  str("C++ is best language");
    cout << "str is: " << str << endl;

    int n = str.find_first_not_of("aeiouAEIOU");

    cout << "First consonant found at " << n+1
    	 << " position" << endl;

    return 0;
}
OUTPUT:
// str is: C++ is best language
// First consonant found at 1 position


find_first_not_of 2.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string  str("C++ is best language");
    cout << "str is: " << str << endl;

    // search first not ' ',
    // start from position 7
    int n = str.find_first_not_of(' ',7);
    cout << "first not of space character "
    	 << "found at position " << n+1 << endl;

    return 0;
}
OUTPUT:
// str is: C++ is best language
// first not of space character found at position 8


find_first_not_of 3.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string  str("C++ is best language");
    string  s = "C++";

    cout << "str is: " << str << endl;

    // search character from pattern
    // using the first x ch�racters in pattern.
    // the value position must be given
    int n = str.find_first_not_of("CBCD",0,3);
    cout << "first not 'C' is found at position "
    	 << n+1 << endl;

    // search first not of
    // pattern is string
    n = str.find_first_not_of(s);
    cout << "first not of C++ is found "
    	 << "at position " << n+1 << endl;

    return 0;
}
OUTPUT:
// str is: C++ is best language
// first not 'C' is found at position 2
// first not of C++ is found at position 4


find_first_of 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string  str("C++ is best language");
    string  s = "be";

    cout << "str is: " << str << endl;

    // search be start from position 2
    // if position is ommited - default is 0
    int n = str.find_first_of(s,2);
    cout << "first 'be' found at position "
    	 << n+1 << endl;

    // same as above but search for character
    n = str.find_first_of('l');
    cout << "first character 'l' found at "
    	 << "position " << n+1 << endl;

    // search 'first of' for the characters in
    // charary
    char charary[] = " bea";
    cout << "charary[] = \" bea\"" << endl;
    n = str.find_first_of(charary,0);
    cout << "first character from charary "
    	 << "found at position " << n+1 << endl;
    cout << "Note: position 4 is space" << endl;

    // same as above but third argumen is
    // number of character from which searching
    // starts
    // this variant of find_first_of dosn't
    // work properly with GNU compiler
    n = str.find_first_of(" bae",0,3);
    cout << "first character from charary "
    	 << "found at position " << n+1 << endl;

    return 0;
}
OUTPUT:
// str is: C++ is best language
// first 'be' found at position 8
// first character 'l' found at position 13
// charary[] = " bea"
// first character from charary found at position 4
// Note: position 4 is space
// first character from charary found at position 4


find_last_not_of 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string  str("C++ is best language");
    string  s  = "langue";
    int pos = str.length()-1;
    cout << "str is: " << str << endl;

    // returns the highest position <= pos of a character
    // in str that does not match any charcter in s;
    // returns nopos if there  is  no such position:
    // npos is the default value for pos
    int n =  str.find_last_not_of(s, pos);
    cout << "last_not_of 'langue' found at position "
    	 << n+1 << endl;

    // same as above but search for single character
    n = str.find_last_not_of('e');
    cout << "last_not_of 'e' found at position "
    	 << n+1 << endl;

    char ary[] = "be";
    // seawrch for occurence last_not_of
    // from pattern ary in str
    n = str.find_last_not_of(ary);
    cout << "last_not_of 'be' found at position "
    	 << n+1 << endl;

    return 0;
}
OUTPUT:
// str is: C++ is best language
// last_not_of 'langue' found at position 12
// last_not_of 'e' found at position 19
// last_not_of 'be' found at position 19


find_last_of 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string  str("C++ is best language");
    string  s  = "g";
    cout << "str is: " << str << endl;
    cout << "s   is: " << s   << endl;

 	int n = str.find_last_of(s);
 	cout << "last_of '" << s << "' faund"
 		 << " at position " << n+1 << endl;

    n = str.find_last_of(' ');
    cout << "last_of ' ' faund"
    	 << " at position " << n+1 << endl;

    n = str.find_last_of(" la");
    cout << "last_of \" la\" faund"
    	 << " at position " << n+1 << endl;

    return 0;
}
OUTPUT:
// str is: C++ is best language
// s   is: g
// last_of 'g' faund at position 19
// last_of ' ' faund at position 12
// last_of " la" faund at position 18


insert 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "C++ language";
    string s   = "is best";
    char ch[]  = "C++ language";

    cout << "str is: " << str << endl;
    cout << "s   is: " << s   << endl;
    cout << "ch  is: " << s   << endl;

    // insert a copy of s into str
    // at position pos;
    string::size_type pos = 4;
    str.insert(pos,s);
    cout << "str is: " << str << endl;

    // insert a copy of ch into str at
    // the position specified by iterator
    // return an iterator positioned at
    // this copy
    int n = str.find('l');
    str.insert(str.begin() + n,' ');
    cout << "str is: " << str << endl;

    // like above but n x copies of char
    str.insert(str.end(),3,'!');
    cout << "str is: " << str << endl;

    // insert 4 char from ch into s
    // at the position 0
    s.insert(0,ch,4);
    cout << "s   is: " << s   << endl;

    // insert 8 characters from str
    // start from position n ('langu...')
    // into s at position x (end string)
    n = str.find('l');
    int x = s.length();
    s.insert(x,str,n,8);
    cout << "s   is: " << s   << endl;

    n = s.find('l');
    s.insert(s.begin()+n,' ');
    cout << "s   is: " << s   << endl;

    // insert range (begin - begin+7) of str
    // into s at position begin+4
    s.insert(s.begin()+4,str.begin(),str.begin()+7);
    cout << "s   is: " << s   << endl;
    return 0;
}
OUTPUT:
// str is: C++ language
// s   is: is best
// ch  is: is best
// str is: C++ is bestlanguage
// str is: C++ is best language
// str is: C++ is best language!!!
// s   is: C++ is best
// s   is: C++ is bestlanguage
// s   is: C++ is best language
// s   is: C++ C++ is is best language


length 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "C++ is best computer language";
    cout << "str is: " << str << endl;

    cout << "Length of str is : "
         << str.length() << endl;

    return 0;
}
OUTPUT:
// str is: C++ is best computer language
// Length of str is : 29


max_size 1.

// returns a reverse iterator positioned
// at the last character in string


#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "C++ is best computer language";
    cout << "str is: " << str << endl;

    cout << "max_size of str is: "
         << str.max_size() << endl;

    return 0;
}
OUTPUT:
// str is: C++ is best computer language
// max_size of str is: 4294967294


rbegin 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "C++ is best computer language";
    cout << "str is: " << str << endl;

    // usual iterator doesn't work
    string::reverse_iterator It = str.rbegin();
    while ( It != str.rend() )
        cout << *It++;
    cout << endl;

    return 0;
}
OUTPUT:
// str is: C++ is best computer language
// egaugnal retupmoc tseb si ++C


replace 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "STL is created from Dennis Ritchie";
    string s1  = "was";
    string s2  = "developed";
    string s3  = "Stepanov alexander";
    cout << "str is: " << str << endl;

    cout << "replace 'is' for 'was'" << endl;
    str.replace(4, // start position in str
            2,     // how many characters
            s1);   // source for replasment

    cout << "str is: " << str << endl;

    cout <<"replace 'created' for 'developed'" << endl;
    int n = str.find('c'); // pos of 'created'
    int x = str.find("from") -1;

    str.replace(str.begin()+n,// start pointer
            str.begin()+x,    // end pointer
            s2);              // source

    cout << "str is: " << str << endl;

    cout << "replace 'Dennis' for 'alexander'" << endl;
    int x1 = str.find('D'); // search Dennis
    int x2 = str.find(' ',x1+1); // space after
    int y1 = s3.find("alex"); // search 'alex'
    int y2 = strlen("alexander");

    str.replace(x1, // start position in str
            x2-x1,  // how characters to replace
            s3,     // source for replacement
            y1,     // start positio from source
            y2);    // how chracter start from y1

    cout << "str is: " << str << endl;

    cout << "replace 'from' for 'by'" << endl;
    char ary[] = "bytes";
    n = str.find("from");

    // same variant possible with iterators
    // instead of number of position
    str.replace(n, // start position in str
            4,     // how many characters
            ary,   // source
            2);    // first 2 characters from source

    cout << "str is: " << str << endl;

    cout << "replace 'a' for 'A' (alexander)" << endl;
    n = str.find("alexander");

    str.replace(n,  // start position in str
            1,      // how character(s)
            1,      // how many copies of character
            'A');   // character for replasment
    cout << "str is: " << str << endl;

    cout << "replace 'Ritchie' for 'Stepanov'" << endl;
    x1 = str.find('R');
    y1 = s3.find(' ');

    str.replace(str.begin()+x1, // start pointer
            str.end(), // to the end of str
            s3.begin(), // start pointer from source
            s3.begin()+y1 // end pointer from
            );              // source
    cout << "str is: " << str << endl;

    return 0;
}
OUTPUT:
// str is: STL is created from Dennis Ritchie
// replace 'is' for 'was'
// str is: STL was created from Dennis Ritchie
// replace 'created' for 'developed'
// str is: STL was developed from Dennis Ritchie
// replace 'Dennis' for 'alexander'
// str is: STL was developed from alexander Ritchie
// replace 'from' for 'by'
// str is: STL was developed by alexander Ritchie
// replace 'a' for 'A' (alexander)
// str is: STL was developed by Alexander Ritchie
// replace 'Ritchie' for 'Stepanov'
// str is: STL was developed by Alexander Stepanov


reverse 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "Anatoliy Urbanskiy";
    cout << str.reverse() << endl;

    return 0;
}
OUTPUT:


resize 1.

// if  <=s.size(),  truncates rightmost
// character in s to make it of size n; otherwise, adds
// copies of character ch to end of s to increase it size
// to n, or adds a default character value (usually a
// blank) if ch is omitted; return type is void


#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "Alexander Stepanov";
    cout << "str is: " << str << endl;
    cout << "size of str is: "
         << str.size() << endl;

    str.resize(11);

    cout << "after str.resize(11)" << endl;
    cout << "str is: " << str << endl;
    cout << "size of str is: "
         << str.size() << endl;

    str.resize(20,'.');

    cout << "after str.resize(20,'.')" << endl;
    cout << "str is: " << str << endl;
    cout << "size of str is: "
         << str.size() << endl;

    return 0;
}
OUTPUT:
// str is: Alexander Stepanov
// size of str is: 18
// after str.resize(11)
// str is: Alexander S
// size of str is: 11
// after str.resize(9,'.')
// str is: Alexander S.........
// size of str is: 20


rfind 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "We go step by step to the target";
    string s1  = "step";
    cout << "str is: " << str << endl;
    cout << "s1  is: " << s1  << endl;

    cout << "int n1 = str.find(s1)" << endl;
    int n1 = str.find(s1);
    cout << "n1 = " << n1+1 << endl;

    cout << "int n2 = str.rfind(s1)" << endl;
    int n2 = str.rfind(s1);
    cout << "n2 = " << n2+1 << endl;

    cout << "n3 = str.rfind(s1,n2-1)" << endl;
    int n3 = str.rfind(s1,n2-1);
    cout << "n3 = " << n3+1 << endl;

    cout << "n1 = str.rfind('t')" << endl;
    n1 = str.rfind('t');
    cout << "n1 = " << n1+1 << endl;

    cout << "n2 = str.rfind('t',n1-1)" << endl;
    n2 = str.rfind('t',n1-1);
    cout << "n2 = " << n2+1 << endl;

    char ch[] = "step";
    cout << "char ch[] = \"step\"" << endl;
    cout << "n1 = str.rfind(ch)" << endl;
    n1 = str.rfind(ch);
    cout << "n1 = " << n1+1 << endl;

    cout << "n2 = str.rfind(\"stabc\",10,2)" << endl;
    n2 = str.rfind("stabc", // pattern
            10,             // start position
            2);             // for first 2 char
                            // in pattern
    cout << "n2 = " << n2+1 << endl;

    return 0;
}
OUTPUT:
// str is: We go step by step to the target
// s1  is: step
// int n1 = str.find(s1)
// n1 = 7
// int n2 = str.rfind(s1)
// n2 = 15
// n3 = str.rfind(s1,n2-1)
// n3 = 7
// n1 = str.rfind('t')
// n1 = 32
// n2 = str.rfind('t',n1-1)
// n2 = 27
// char ch[] = "step"
// n1 = str.rfind(ch)
// n1 = 15
// n2 = str.rfind("stabc",10,2)
// n2 = 7


size 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "We go step by step to the target";
    string::size_type size = str.size();

    cout << "str is: " << str << endl;
    cout << "size of str = " << size << endl;

    return 0;
}
OUTPUT:
// str is: We go step by step to the target
// size of str = 32


substr 1.

// str.subsr(pos,n);
// returns a copy of the substring consisting
// of n characters from str, beginning at position pos
// (default value 0); if n is too large or is omitted,
// characters are copied only until the end of s is
// reached

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str = "We go step by step to the target";
    cout << "str is: " << str << endl;

    int n = str.find("step");

    string s = str.substr(n);
    cout << "s   is: " << s << endl;

    s = str.substr(n,12);
    cout << "s   is: " << s << endl;

    return 0;
}
OUTPUT:
// str is: We go step by step to the target
// s   is: step by step to the target
// s   is: step by step


swap 1.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str1 = "Robert";
    string str2 = "Forest";
    cout << "str1 is: " << str1 << endl;
    cout << "str2 is: " << str2 << endl;
    cout << endl;

    cout << "str1.swap(str2)" << endl;
    cout << endl;

    str1.swap(str2);
    cout << "str1 is: " << str1 << endl;
    cout << "str2 is: " << str2 << endl;

    return 0;
}
OUTPUT:
// str1 is: Robert
// str2 is: Forest
//
// str1.swap(str2)
//
// str1 is: Forest
// str2 is: Robert


