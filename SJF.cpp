#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> process={1,2,3,4};
    vector<ll> bt={6,8,7,3};
    vector<pair<ll,ll>> p;
    for(int i=0;i<4;i++) p.pb({bt[i],process[i]});
    sort(p.begin(),p.end());
    vector<ll> wt(4),tat(4);
    wt[0] = 0;
    for(int i=1;i<4;i++) wt[i] = wt[i-1]+p[i-1].first;
    for(int i=0;i<4;i++) tat[i] = wt[i]+p[i].first;
    cout<<"Waiting Time:\n";
    for(ll c:wt) cout<<c<<" ";
    cout<<endl;
    cout<<"Turn Around Time:\n";
    for(ll c:tat) cout<<c<<" ";
    cout<<endl;
    return 0;
}