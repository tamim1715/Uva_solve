
/* SHAHADATH HOSSAIN TAMIM
   BANGLADESH UNIVERSITY OF BUSINESS AND TECHNOLOGY
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back
#define pob pop_back

#define gcd __gcd
#define lcm(a,b) (a*b)/__gcd(a,b)

#define L length()


#define all(a) a.begin(), a.end()
#define CLR(a)  memset(a,0,sizeof(a))


#define F  first
#define S  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1000000007

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<int, int>mp;
vector<int>v;
pair<int, int>pii;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int l[100009],r[100009];
vector<string>s;

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    bool flag=false;
    while(tst--)
    {
        if(flag) cout<<endl;
        memset(l, 0, sizeof(l));
        memset(r, 0, sizeof(r));
        s.clear();
        int n;
        cin>>n;
        string p;
        for(int i=0; i<n; i++)
        {
            cin>>p>>l[i]>>r[i];
            s.pb(p);
        }
        int q;
        cin>>q;
        while(q--)
        {
            int x;
            cin>>x;
            string ans;
            int cnt=0;
            for(int i=0; i<n; i++)
            {
                if(x>=l[i]&&x<=r[i])
                {
                    cnt++;
                    ans=s[i];
                }
                if(cnt>1) break;
            }
            if(cnt==0||cnt>1) cout<<"UNDETERMINED"<<endl;
            else cout<<ans<<endl;
        }




        flag=true;

    }


    return 0;
}
