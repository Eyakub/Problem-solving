#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
int create (vector<int> &vct)
{
    int b, c, start;
    cout << "How many numbers to push: ";
    cin >> c;
    cout << "What will be the starting number ";
    cin >> start;
    cout << "enter the interval: ";
    cin >> b;
    int a = start, i;
    for (i=0; i<c; i++){
        vct.push_back(a);
        a+=b;
    }
    cout << "periodical push with a period of " << b << " of " << c << " number(s) is complete." << endl;
}
int createWithRandom (vector<int> &vct)
{
    cout << "How many numbers to push: ";
    int a, i =0, b;
    cin >> a;
    cout << "what will be the highest number: ";
    cin >> b;
    srand(time(NULL));
    while (i<a){
        int number = rand() % b + 1;
        vct.push_back(number);
        i++;
    }
    cout << "random push with highest value of " << b << " of " << a << " number(s) is complete." << endl;
}

int inputNumberOwn(vector<int> &vect)
{
    cout << "how many numbers to push: ";
    int a, b;
    cin >> a;
    for (int i=0; i<a; i++){
        cout << "Enter a number: ";
        cin >> b;
        vect.push_back(b);
    }
    cout << "Manually input of " << a << " number(s) is complete" << endl;
}
void display (vector<int> vect)
{
    if ((vect.size())==0) cout << "vector is empty." << endl;
    for (int i =0; i<vect.size(); i++)
        cout << vect[i] << endl;
}
int total(vector<int> vect)
{
    int total = 0;
    for (int i = 0; i< vect.size(); i++)
        total += vect[i];
    cout << "the total is = " << total << endl;
    return total;
}

void avg(vector<int> vect, int a)
{
    double average;
    average = a/vect.size();
    cout << "The average values of the vector is " << average << endl;
}
void curved(vector<int> &vect, int change)
{
    for (int i = 0; i< vect.size(); i++)
        vect[i] += change;
}

int Search(vector<int> vect)
{

        cout << "Enter the number to search: ";
        int a, b, flag = 0, i;
        cin >> a;
        for (i = 0; i < vect.size(); ++i){
            if (vect[i] == a){
                flag = 1;
            }
        }
        if (flag == 1){
            cout << "The number " << a << " is present in the vector as " << (i-1) << "th element" << endl;
        }
        else cout << a << " is not found";
}
bool yes (vector <int> &vect)
{
    if (vect.size()==0) return false;
    else return true;
}
void menu();
int main ()
{
    vector <int> grades;
    double choice;
    int integer;
    while (true)
    {
        cout << endl;
        menu ();
        cout << "enter your choice to do <Fraction will be changed into integer> :";
        cin >> choice;
        integer = (int) choice;
        switch(integer){
            case 1 : {
                create (grades);
                break;
            }
            case 2 : {
                createWithRandom(grades);
                break;
            }
            case 3 : {
                inputNumberOwn(grades);
                break;
            }
            case 4 : {
                display(grades);
                break;
            }
            case 5 : {
                if (yes(grades)){
                    cout << "How much number to change : ";
                    int a;
                    cin >> a;
                    curved(grades, a);
                }
                else
                    cout << "Vector is empty." << endl;
                break;
            }
            case 6 : {
                if (yes(grades))
                    total(grades);
                else
                    cout << "vector is empty."<< endl;
                break;
            }
            case 7 : {
                if (yes(grades)){
                    int a = total(grades);
                    avg(grades, a);
                }
                else
                    cout << "Vector is empty." << endl;
                break;
            }
            case 8 : {
                if (yes(grades))
                    Search(grades);
                else
                    cout << "Vector is empty." << endl;
                break;
            }
            case 9 : {
                if (yes(grades)){
                    sort (grades.begin(), grades.end());
                }
                else
                    cout << "Vector is empty." << endl;
                break;
            }
            case 10 : {
                return 0;
            }
            default : {
                cout << "Try a valid choice." << endl;
                //return 0;
            }
        }
    }
}
void menu()
{
    cout << "1. for pushing a vector with interval." << endl;
    cout << "2. for pushing a vector with random numbers." << endl;
    cout << "3. for enter numbers manually" << endl;
    cout << "4. for display." << endl;
    cout << "5. for differing values with certain period." << endl;
    cout << "6. for total value." << endl;
    cout << "7. for avg value." << endl;
    cout << "8. for searching a number." << endl;
    cout << "9. sorting." << endl;
    cout << "10. exit." << endl;
}
