#include<cstring>
#include<iostream>
using namespace std;
#define SIZE 50

class card{
    private:
    char title[SIZE], author[SIZE];
    int number;

    public:
        void store(char *t, char *name, int num);
        void show();
};

void card::store(char *t, char *name, int num){
    strcpy(title, t);
    strcpy(author, name);
    number = num;
}
void card::show(){
    cout <<"Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Number of book's on hand: " << number << endl;
    cout << endl;
}

int main(){
    card book1, book2, book3;
    book1.store("Dune", "Frank Herbert", 2);
    book2.store("The Foundatin Trilogy", "Isaac Asimov", 4);
    book3.store("The Rainbow", "D.H.Lawrence", 1);

    book1.show();
    book2.show();
    book3.show();

    return 0;
}
