#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

class Process{
    public:
        int id;
        int bt;
        int priority;
        int at;
        int wt;
        int tat;
        int ct;
        Process(int id,int bt,int priority,int at){
            this->id = id;
            this->bt = bt;
            this->priority = priority;
            this->at = at;
        }
};

class com2{
    public:
        bool operator()(Process a,Process b){
            return a.
        }
};

bool cmp(Process a,Process b){
    if(a.at == b.at) return a.priority>b.priority;
    return a.at<b.at;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<Process> v = {{1,5,10,0},{2,4,20,1},{3,2,30,2},{4,1,40,4}};
    sort(v.begin(),v.end(),cmp);
    int c=0;
    for(Process &p:v){
        if(c<p.at) c = p.at;
        p.ct = c+p.bt;
        p.tat = p.ct-p.at;
        p.wt = p.tat-p.bt;
        c+=p.bt;
    }
    for(Process c:v) cout<<"SI: "<<c.id<<" Bt: "<<c.bt<<" Priority: "<<c.priority<<" wt: "<<c.wt<<" tat: "<<c.tat<<endl;
    return 0;
}