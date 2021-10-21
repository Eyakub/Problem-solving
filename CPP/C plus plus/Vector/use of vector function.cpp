#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(199);
    v.push_back(34);
    v.push_back(1325);
    v.push_back(45);
    v.push_back(8989);

    cout<<"Initial vector size "<<v.size()<<endl;
    cout<<"Initial vector: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();
    cout<<"After pop_back: ";
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;


    v.insert(v.begin(),34);
    cout<<"After Insert 1st position: ";
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    cout<<"Initial vector size "<<v.size()<<endl;
    v.insert(v.begin()+2,345);
    cout<<"After Insert 3rd position: ";
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;

    v.erase(v.begin()+1);
    cout<<"After erase one element from 2nd position: ";
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;

    cout<<"Initial vector size "<<v.size()<<endl;
    v.erase(v.begin()+2,v.begin()+4); /// [ ) shuru jtoo thkei hok..sesh ta hobe value er thek 1 kom..like 4 bolse 3 porjnto kaj hobe

    cout<<"After erase 3rd to 4th position: ";
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    cout<<"Initial vector size "<<v.size()<<endl;
    v.clear();
    cout<<"Is vector empty "<<v.empty()<<endl;

    return 0;
}
