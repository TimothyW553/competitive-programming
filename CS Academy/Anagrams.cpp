#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define pb push_back
#define FILL(a, b) memset(a, b, sizeof(a))

typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;

ll gcd(ll a, ll b){return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b){return a*b/gcd(a,b);}
ll fpow(ll b, ll exp, ll mod){if(exp == 0) return 1;ll t = fpow(b,exp/2,mod);if(exp&1) return t*t%mod*b%mod;return t*t%mod;}
ll divmod(ll i, ll j, ll mod){i%=mod,j%=mod;return i*fpow(j,mod-2,mod)%mod;}

bool isanagram(string s1, string s2) {
    if(s1.length() != s2.length()) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for(int i = 0; i < s1.length(); i++)
        if(s1[i] != s2[i]) return false;
    return true;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<string> v;
    for(int i = 0; i < n; i++) {
        string str; cin >> str;
        sort(str.begin(), str.end());
        v.push_back(str);
    }
    sort(v.begin(), v.end());
    map<string, int> mp;
    int best = -1;
    for(int i = 0; i < n; i++) {
        mp[v[i]]++;
        best = max(best, mp[v[i]]);
    }
    cout << best << "\n";
    return 0;
}
/*
8
disease
burned
viewer
praised
despair
burden
diapers
review
*/