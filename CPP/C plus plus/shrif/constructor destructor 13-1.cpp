///constructor destructor

#include<iostream>
using namespace std;

class rectangle{
    int height;
    int width;
public:
    void set(int h, int w);
    int area();
    rectangle(int h, int w); ///constructor, can use parameter
    ~rectangle(); ///destructor without return type, can't use parameter

};

int rectangle::area()
{
    return height*width;
}

//rectangle::~rectangle() ///rectangle er return type nei
//{
//    cout<<"Destructor"<<endl;
//}
///eita eikhan euse korleo Constructor er por e print hobe

rectangle::rectangle(int h, int w) ///rectangle er return type nei
{
    height = h;
    width = w;
    cout<<"constructor "<<area()<<endl;
}

rectangle::~rectangle() ///rectangle er return type nei
{
    cout<<"Destructor "<<area()<<endl;
}

int main()
{
    rectangle obj(5, 6), obj1(1,2);
    ///cout<<"Area = "<<obj.area()<<endl;

    return 0;
}

/** jei Constructor seshe create hobe, shetai shobar age Destructor hobe
like stack er moto, */
