// https://www.codechef.com/submit/MVALUE?tab=statement

#include <bits/stdc++.h>
using namespace std;

// Datatypes
typedef long long ll;
typedef long double ld;
// Pairs
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
// vectors
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;


#define MOD 1000000007
#define llmx 9223372036854775807
#define llmn -9223372036854775808
#define int_min -2147483648
#define int_max 2147483647
#define endl "\n"
#define pb push_back
#define fi first
#define se second
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define INF 2e18
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);
// Call this function if you wish to know if my code give TLE or not
void checkTimeout(){
	double tm=(float)clock()/CLOCKS_PER_SEC;
	if(tm>=2){
		cerr<<"Time limit exeeded"<<endl;
		exit(0);
	}
}
// modulo operation
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
// find gcd
ll gcd(ll a,ll b) { if(!b) return a; return gcd(b,a%b);}
//swap function
template<typename T>
void swap(T *a, T *b){
    T temp = *a;
    *a = *b;
    *b = temp;
}
// find power
ll power(ll base, ll e){
    if ( 0 == e )  return 1;
    else if ( 1 == e ) return base;
    ll temp = power(base, e / 2);
    if ( e & 1 )   return (temp * temp * base);
    return (temp * temp);
}
// find all primefactors of number
void primeFactors(int n){
    if(n == 1) return;
    while(n%2 == 0){
        cout<<2<<" ";
        n /= 2;
    }
    while(n%3 == 0){
        cout<<3<<" ";
        n /= 3;
    }
    for(int i = 5;i*i<=n;i+=6){
        while(n%i == 0){
            cout<<i<<" ";
            n /= i;
        }
        while(n%(i+2) == 0){
            cout<<i+2<<" ";
            n /= (i+2);
        }
    }
    if(n > 3) cout<<n;
}
// check if number is prime or not
bool isPrime(int n){
    if(n == 1)
        return false;
    if(n == 2 || n == 3)    
        return true;
    if((n%2 == 0) || (n%3 == 0))
        return false;
    for(int i=5;i*i<n;i+=6){
        if((n%i == 0) || (n%(i+2) == 0))
            return false;
    }
    return true;
}
// All Digits of given number
vector<int> digit(ll n){
    vector<int> ans;
    while (n){
        ans.pb(n % 10);
        n /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
// array is sorted or not
bool isSorted(int arr[], int n){
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}
// largest sum of contiguous subarray
int kadanesAlgorithm(vector<int> &arr){
    int max_sum = arr[0];
    int previous_sum = arr[0];
    for(int i=1;arr.size()>i;i++){
        previous_sum = max(arr[i],previous_sum+arr[i]);
        max_sum = max(max_sum,previous_sum);
    }
    return max_sum;
}

//   _____     _____              _               
//  |  __ \   |  __ \            (_)              
//  | |  | |  | |__) |___   _ __  _  _   _   __ _ 
//  | |  | |  |  ___// _ \ | '__|| || | | | / _` |
//  | |__| |_ | |   | (_) || |   | || |_| || (_| |
//  |_____/(_)|_|    \___/ |_|   |_| \__, | \__,_|
//                                    __/ |  
//                                   |___/        

// Global Declarations 


// MY FUNCTION


// SOLUTION
void solve(){
    int n;
    cin>>n;
    v64 a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll ans = 0;
    ans = max(a[1]*a[0]+(a[1]-a[0]),a[n-1]*a[n-2]+(a[n-1]-a[n-2]));
    cout<<ans<<endl;
}

int main(){
    fast()
    int testcase=1;
    cin>>testcase;
    while(testcase--){
        solve();
    }
    return 0;
}