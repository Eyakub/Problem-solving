#include<iostream>
using namespace std;
class body{
public:
    int height;
    int width;
};

int main(){
    body obj, obj1;
    obj.height = 5;
    obj1.height = 55;
    obj.width = 6;

    cout<<"Size = "<<obj.height*obj.width<<endl;
    cout<<"Height of obj1 is = "<<obj1.height<<endl;

    return 0;
}
