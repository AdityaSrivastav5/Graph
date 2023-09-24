//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
    void solve(string S,int i,set<string>&st){
        if(i>=S.size()){
            st.insert(S);
        }
        for(int j=i;j<S.size();j++){
            swap(S[i],S[j]);
            solve(S,i+1,st);
            swap(S[i],S[j]);
        }
    }
	public:
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    set<string>st;
            int i=0;
            solve(S,i,st);
            for(auto i:st){
                ans.push_back(i);
            }
            return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends