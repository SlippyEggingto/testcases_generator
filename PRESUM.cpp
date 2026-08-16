#include <bits/stdc++.h>
#define ll long long
#define fs first
#define sc second
#define MEME memset
#define pb push_back
const ll inf = 1e9+7;
#define vll vector<ll>
#define pll pair<ll, ll>
#define umap unordered_map
#define pqueue priority_queue
#define SIZEOF(a) ((ll)a.size())
#define READ(a) freopen(a, "r", stdin);
#define WRITE(a) freopen(a, "w", stdout);
#define FOR(i, a, b) for (ll i=a; i<=b; i++)
#define ROF(i, a, b) for (ll i=a; i>=b; i--)
#define RANDOM(start, end) rand()%(end-start+1)+start
using namespace std;

template<typename T> bool minimize(T &a, const T &b) {
    if (b < a) {
        a = b;
        return true;
    } return false;
}

template<typename T> bool maximize(T &a, const T &b) {
    if (b > a) {
        a = b;
        return true;
    } return false;
}

const ll maxn = 1e5;
ll n, q, a[maxn+1], pre[maxn+1];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    READ("PRESUM.inp"); WRITE("PRESUM.out");
    cin >> n >> q;
    FOR(i, 1, n) {
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
    }

    while (q --> 0) {
        ll u, v; cin >> u >> v;
        cout << pre[v] - pre[u-1] << '\n';
    }

    return 0;
}
