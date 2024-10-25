#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> process={1,2,3};
    vector<ll> bt={24,3,3};
    vector<ll> wt(3),tat(3);
    wt[0] = 0;
    for(int i=1;i<3;i++) wt[i] = bt[i-1]+wt[i-1];
    for(int i=0;i<3;i++) tat[i] = bt[i]+wt[i];
    cout<<"Waiting Time:\n";
    for(ll c:wt) cout<<c<<" ";
    cout<<endl;
    cout<<"Turn Around Time:\n";
    for(ll c:tat) cout<<c<<" ";
    cout<<endl;
    return 0;
}