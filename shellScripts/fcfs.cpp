#include <iostream>
using namespace std;

int main()
{
	
	int  at[10], bt[10], wt[10], tat[10];
	int n;
	float avgwt = 0, avgtat = 0;
	cout << "Input how many process" << endl;
	cin >> n;
	
	//taking burst time
	cout << "Enter burst time of each process sequentially" << endl;
	for( int i = 0; i < n; i++){
		cout << "For process " << i+1<< ": ";
		cin >> bt[i];
	} 
	

	//calculating waiting time
	wt[0]=0;
	for( int i = 1; i <n; i++){
		wt[i]=0;
		for( int j = 0; j < i; j++){
			wt[i] += bt[j];
		}
		//cout << "Waiting time: " << wt[i] << endl;
	}

	cout << "Process\tBurst Time\tWaiting time\tTurnAround Time" << endl;
	
	for(int i = 0; i < n; i++){
		avgwt += wt[i];
		tat[i] = bt[i] + wt[i];
		avgtat += tat[i];
		cout << "p"<<i+1<<"\t"<<bt[i]<<"\t\t\t"<<wt[i]<< "\t\t "<< tat[i]<<endl;
	}
	avgwt /= n;
	avgtat /= n;
	cout << "Average waiting time: " << avgwt << endl;
	cout << "Average turnaround time: " << avgtat << endl;	
	return 0;	
}
