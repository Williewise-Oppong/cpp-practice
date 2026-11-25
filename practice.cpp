#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){
    vector<int> a;
    vector<int> b(5);
    vector<int> c(3,7);
    vector<int> d = {1,2,3};

    for(int i : c){
        cout<<i<<" ";
    }

    map<string,int> e;

    e["KK"] = 20;
    e["Ama"] = 19;

    cout<<e["Kofi"]<<endl;
    cout<<e["Kwame"]<<endl;

    if(e.count("Kofi")){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }

    for(auto p : e){
        cout<<p.first<<" : "<<p.second<<endl;
    }
    

    return 0;
}