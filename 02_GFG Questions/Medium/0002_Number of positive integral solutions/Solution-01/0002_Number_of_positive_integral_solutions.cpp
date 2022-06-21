// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
#define ll long long
public:
    long posIntSol(string s)
    {
        ll equal_ind = 0;
        ll ans = 0;
        for(int i=0;i<s.size();i++){
            if('='==s[i]){
                equal_ind = i+1;
                break;
            }
        }
        
        ans = stoi(s.substr(equal_ind));
        ll oprands = equal_ind-equal_ind/2;
        ll sum = 1;
        oprands --;
        ans --;
        
        for(ll i=0;i<oprands;i++){
            sum *= ans;
            ans --;
        }
        
        ll divisor = 1;
        while(0<oprands){
            divisor *= oprands;
            oprands--;
        }
        return sum/divisor;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.posIntSol(s)<<endl;
    }
    return 0;
}
  // } Driver Code Ends