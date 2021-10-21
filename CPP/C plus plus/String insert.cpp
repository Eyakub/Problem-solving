/// inserting into a string
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str="to be question";
    string str2="the ";
    string str3="or not to be";
    string::iterator it;

    /// used in the same order as described above:
    str.insert(6,str2);
    cout << str << endl;                /// to be (the )question
    str.insert(6,str3,3,4);             /// to be (not )the question
    cout << str << endl;
    str.insert(10,"that is cool",8);    /// to be not (that is )the question
    cout << str << endl;
    str.insert(10,"to be ");            /// to be not (to be )that is the question
    cout << str << endl;
    str.insert(15,1,':');              /// to be not to be(:) that is the question
    cout << str << endl;
    it = str.insert(str.begin()+5,','); /// to be(,) not to be: that is the question
    str.insert (str.end(),3,'.');       /// to be, not to be: that is the question(...)
    str.insert (it+2,str3.begin(),str3.begin()+3); /// (or )

    std::cout << str << '\n';
    return 0;
}
