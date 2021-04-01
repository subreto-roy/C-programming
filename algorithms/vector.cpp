#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int> b){
    for(int i=0;i<b.size();i++)
    {

        cout<<b[i]<< "|";
    }
}


int main(){
    vector<int> v(4);
    v[0]=10;
    v[1]=22;
    v[2]=5;
    v[3]=90;

    v.push_back(7);
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<<v.at(3)<<endl;
    printVector(v);

    return 0;
}
