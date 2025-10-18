#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e8+123;
bitset< N > isPrime;
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 100;
    for(int i = 3; i <= n; i += 2){
        isPrime[i] = 1;
    }
    isPrime[2] = 1;
    int sq = sqrt(n) + 2;
    for(int i = 3; i <= sq; i += 2){
        for(int j = i * i; j <= n; j += 2*i){
            isPrime[j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        if(isPrime[i] == 1){
            cout << i <<  endl;
        }
    }
    return 0;
}
