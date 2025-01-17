// atcoder : https://atcoder.jp/contests/dp/tasks/dp_n?lang=en
/*
بسم الله الرحمن الرحيم

الْحَمْدُ لِلّهِ الَّذِي هَدَانَا لِهَـذَا وَمَا كُنَّا لِنَهْتَدِيَ لَوْلا أَنْ هَدَانَا اللّهُ

اللهم حرر فلسطين من كيد الصهاينة واجعل كيدهم في نحورهم
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين اللهم اطمس على أعداء الدين والمدنسين
*/

#include <bits/stdc++.h>

using namespace std;

const long double pii = 3.1415926536;
#define int long long
#define endl '\n'
#define Shity ios_base::sync_with_stdio(false);
#define Code cin.tie(nullptr);cout.tie(nullptr);
#define By int t = 1;//cin >> t;
#define Hossam while(t--) { solve(); }
#define all(x) begin(x), end(x)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define init memset(dp , -1 , sizeof dp)

void Free_Palestine() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int dp[404][404];
int n;
int pre[404] , h[404];

int idk(int i , int j) {
    if(i >= j)
        return 0;
    int &ret = dp[i][j];
    if(~ret)
        return ret;
    ret = 1e18;
    for (int k = i; k < j; ++k) {
        ret = min(ret , idk(i , k) + idk(k + 1 , j) + pre[j] - (i > 0 ? pre[i - 1] : 0));
    }
    return ret;
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    pre[0] = h[0];
    for (int i = 1; i < n; ++i) {
        pre[i] = pre[i - 1] + h[i];
    }
    init;
    cout << idk(0 , n - 1);
}

int32_t main() {
    Free_Palestine();
    Shity Code By Hossam
    return 0;
}
// الحمدلله رب العالمين