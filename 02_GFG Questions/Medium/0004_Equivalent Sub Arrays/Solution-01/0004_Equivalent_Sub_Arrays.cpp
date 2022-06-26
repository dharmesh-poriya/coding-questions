// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int countDistinctSubarray(int arr[], int n)
    {
        int ans = 0;
        set<int> distinct;
        map<int,int> m;
        for(int i=0;i<n;i++){
            distinct.insert(arr[i]);
        }
        
        int total_distinct = distinct.size();
        distinct.clear();
        int left=0;
        int right=0;
        while(n>right){
            distinct.insert(arr[right]);
            m[arr[right]] ++;
            while(distinct.size()==total_distinct){
                ans += (n-right);
                if(m[arr[left]]==1)
                    distinct.erase(arr[left]);
                m[arr[left]]--;
                left ++;
            }
            right ++;
        }
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.countDistinctSubarray(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends