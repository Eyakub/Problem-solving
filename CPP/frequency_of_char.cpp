#include<bits/stdc++.h>
using namespace std;


int main(){
    char inputString[1000] = "hey there";
   
    int count[256] = {0};
     
    cout << "Enter a String\n";
    // gets(inputString);
     
    for(int i=0; inputString[i] != '\0'; i++){
        // Populate frequency count array
        count[inputString[i]]++;
    }
     
    cout << "\nCharacter   Frequency\n";
    for(int i=0; i < 256; i++){
        if(count[i] != 0){
          cout <<"  " << (char)i << "------" << count[i]<< endl;                    
        }
    }
  
    return 0;
}