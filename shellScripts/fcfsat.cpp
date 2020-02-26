#include <iostream>
#include <iomanip>
using namespace std;
struct process{

    int arrival,burst,priority,wating;
};

void addP(int num){
    process p[num];
    cout<<"Process ID"<<setw(15)<<"Arrival time"<<setw(15)<<"Burst time"<<setw(15)<<"Priority"<<endl;

    for(int i=0;i<num;i++){
        cout<<"P"<<i+1;
        cin>>p[i].arrival>>p[i].burst>>p[i].priority;
    }
    int temp=0,x=0;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(p[i].priority>p[j].priority){
                            temp=p[i].priority;
                            p[i].priority=p[j].priority;
                            p[j].priority=temp;

                            temp=p[i].burst;
                            p[i].burst=p[j].burst;
                            p[j].burst=temp;

                            temp=p[i].arrival;
                            p[i].arrival=p[j].arrival;
                            p[j].arrival=temp;
            }
        }

    }
    cout<<"Process ID"<<setw(15)<<"Arrival time"<<setw(15)<<"Burst time"<<setw(15)<<"Priority"<<endl;
    for(int i=0;i<num;i++){
        cout<<"P"<<i+1<<setw(20)<<p[i].arrival<<setw(20)<<p[i].burst<<setw(20)<<p[i].priority<<endl;
    }

}


int main()
{

    int numOfProcess;
    cout<<"Enter The Number of processes ";
    cin>>numOfProcess;
    addP(numOfProcess);

    return 0;
}
