#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

class P{
    public:
    int a,b,c;
    P() : a(0), b(0), c(0) {}
    P(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int t1,t2,t3;
    cin>>t1>>t2>>t3;
    vector<ll>ans;
    vector<P>all(n),need(n),rem(n);
    ll a1=t1,a2=t2,a3=t3;
    forni{
        cin>>all[i].a>>all[i].b>>all[i].c;
        a1-=all[i].a;
        a2-=all[i].b;
        a3-=all[i].c;
    }
    forni{
        cin>>need[i].a>>need[i].b>>need[i].c;
        rem[i].a=need[i].a-all[i].a;
        rem[i].b=need[i].b-all[i].b;
        rem[i].c=need[i].c-all[i].c;
    }
    vector<bool>ch(n,false);
    ll l=0;
    while(l<n){
        bool f=false;
        forni{
            if(rem[i].a<=a1 && rem[i].b<=a2 && rem[i].c<=a3 && !ch[i]){
                ch[i]=true;
                f=true;
                l++;
                a1+=all[i].a;
                a2+=all[i].b;
                a3+=all[i].c;
                ans.pb(i+1);
            }
        }
        if(!f){
            co("There is a deadlock situation")
            return 0;
        }
    }
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
    return 0;
}