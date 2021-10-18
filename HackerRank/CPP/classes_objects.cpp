#include <bits/stdc++.h>
using namespace std;


class Student {
    private:
        int scores[5];
    public:
        void input(){
            for (int i = 0; i < 5; i++){
                cin >> scores[i];
            }
        }

        int calculateTotalScore(){
            int count = 0;
            for (int i = 0; i < 5; i++){
                count += scores[i];
            }
            return count;
        }
};


int main(){
    int n;
    cin >> n;

    // creating object for array
    Student *stu = new Student[n];

    // taking n number of list of input
    for(int i = 0; i < n; i++){
        stu[i].input();
    }

    // calculate score as first input is the kristen's score
    int score = stu[0].calculateTotalScore();

    // check how many student has higher score
    int count = 0;
    for (int i = 1; i < n; i++){
        int total = stu[i].calculateTotalScore();
        if (total > score){
            count++;
        }
    }

    cout << count;
    return 0;
}