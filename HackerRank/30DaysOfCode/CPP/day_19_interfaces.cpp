#include <bits/stdc++.h>
using namespace std;

class AdvanceArithmetic{
    public:
        virtual int divisorSum(int n) = 0;
};

class Calculator: public AdvanceArithmetic{
    
    public:
        int divisorSum(int n){
            int sum = 0;
            for(int i = 1; i <= n; i++){
                if (n % i == 0){
                    sum += i;
                }
            }
            return sum;
        }

};

int main() {
    int n;
    cin >> n;
    AdvanceArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}