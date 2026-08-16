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

mt19937 __GENERATE_RANDOM_NUMBER__(chrono::steady_clock::now().time_since_epoch().count());

ll RANDOM(ll a, ll b) {
    return __GENERATE_RANDOM_NUMBER__()%(b - a + 1) + a;
}

string __PROBLEM_CODE_NAME__                = "PRESUM";
string __INPUT_FILE_NAME__                  = __PROBLEM_CODE_NAME__ + ".inp";
string __OUTPUT_FILE_NAME__                 = __PROBLEM_CODE_NAME__ + ".out";
ll __NUMBER_OF_TESTCASES__                  = 367;
ll __TESTCASES_ORDER_DIGIT_COUNT__          = 0;

void system(string s) {
    system(s.c_str());
}

string __GET_STANDARD_TESTCASE_NUMBER__(ll n) {
    string res;
    while (n) {
        res = (char)(n%10 + '0') + res;
        n /= 10;
    }

    while (SIZEOF(res) < __TESTCASES_ORDER_DIGIT_COUNT__) res = '0' + res;
    return res;
}

void __PREPARE__() {
    ll k = __NUMBER_OF_TESTCASES__; while (k) __TESTCASES_ORDER_DIGIT_COUNT__++, k /= 10;
    system("mkdir -p ./TEST");
    system("rm -rf ./TEST/*");
    system("./BUILD " + __PROBLEM_CODE_NAME__);
}

void __INITIALIZE__(ll __CURRENT_TEST__) {
    system("mkdir -p ./TEST/test" + __GET_STANDARD_TESTCASE_NUMBER__(__CURRENT_TEST__));
}

void __GENERATE_TESTCASES__() {
    WRITE(__INPUT_FILE_NAME__.c_str());
    const ll maxn = 1e5, MAXA = 1e9;

    cout << maxn << ' ' << maxn << '\n';
    FOR(i, 1, maxn) cout << RANDOM(1, MAXA) << ' ';
    cout << '\n';
    FOR(i, 1, maxn) {
        ll a = RANDOM(1, maxn), b = RANDOM(1, maxn);
        if (a > b) swap(a, b);
        cout << a << ' ' << b << '\n';
    }

    cout << flush;
}

void __FINALIZE__(ll __CURRENT_TEST__) {
    system( "./" + __PROBLEM_CODE_NAME__);
    system("mv " + __INPUT_FILE_NAME__ + " ./TEST/test" + __GET_STANDARD_TESTCASE_NUMBER__(__CURRENT_TEST__));
    system("mv " + __OUTPUT_FILE_NAME__ + " ./TEST/test" + __GET_STANDARD_TESTCASE_NUMBER__(__CURRENT_TEST__));
    cerr << "\33[2K\r";
    cerr << fixed << setprecision(3) << "[ ok ] " << __CURRENT_TEST__ << "/" << __NUMBER_OF_TESTCASES__ << " (" << (long double)__CURRENT_TEST__/__NUMBER_OF_TESTCASES__*100 << "%)";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    auto start = std::chrono::high_resolution_clock::now();

    __PREPARE__();

    FOR(i, 1, __NUMBER_OF_TESTCASES__) {
        __INITIALIZE__(i);
        __GENERATE_TESTCASES__();
        __FINALIZE__(i);
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cerr << "\nProcessed in \033[33m" << duration.count() << " ms\033[0m";

    return 0;
}
