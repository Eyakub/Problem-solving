/** just as there can be public member functions, there can be public member variables as well. For example,
if a were declared in the public section of myclass, a could be referenced by any part of
    the program, as shown here: */
#include<iostream>
using namespace std;
class myclass{
public:
    ///now a is public
    int a;
    ///and there is no need for set_a() or get_a()
};
int main()
{
    myclass ob1, ob2;
    ///here a is accessed directly
    ob1.a = 10;
    ob2.a = 99;

    cout<<ob1.a<<endl;
    cout<<ob2.a<<endl;

    return 0;
}
