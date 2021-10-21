///private public protected

#include<iostream>
using namespace std;
///class e kno kisu declare na korle sheita default private thakbe

class rectangle{
private:
    int height;
    int width;
public:///private thakle int height, width access korte parbe na
    void set(int h, int w); ///h for height, w for width
    int area();
};
int rectangle::area()
{
    return height*width;
}
void rectangle::set(int h, int w)
{
    height = h;
    width = w;
}
int main()
{
    rectangle obj;
//    obj.height = 5;
//    obj.width = 6;
    obj.set(5,6);

//    cout<<"Area is = "<<obj.height*obj.width<<endl;
    cout<<"Area is = "<<obj.area()<<endl;
    return 0;
}
