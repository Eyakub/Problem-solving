#include <bits/stdc++.h>
using namespace std;

class Box {
    private:
        int length, breadth, height;
    
    public:
        Box(){
            length = 0;
            breadth = 0;
            height = 0;
        }
        Box(int l, int b, int h){
            length = l;
            breadth = b;
            height = h;
        }

        Box(const Box &B){
            length = B.length;
            breadth = B.breadth;
            height = B.height;
        }

        int getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
        }

        int getHeight(){
            return height;
        }

        long long CalculateVolume(){
            return length * breadth * height;
        }
};

void check2(){
    int n;
    cin >> n;
    
    Box temp;

    for (int i = 0; i < n; i++){
        int type;
        cin >> type;

        if (type == 1){
            // cout<<temp<<endl;
        }
    }
}