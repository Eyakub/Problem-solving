/** member function with inline */

#include<iostream>
using namespace std;
class rectangle{
public:
    int height;
    int width;
//    int area(){
//        return height*width;
//    }
    int area();
};
inline int rectangle::area() ///inline dile class function er sathe
///attach hoye jay, fast call kora jay function khujar jnne :)
{
    return height*width;
}
int main()
{
    rectangle obj;
    obj.height = 5;
    obj.width = 6;

    cout<<"Area = "<<obj.area()<<endl;

    return 0;
}
