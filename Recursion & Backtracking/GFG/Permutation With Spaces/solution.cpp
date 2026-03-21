/*
Link : https://www.geeksforgeeks.org/problems/permutation-with-spaces3627/1
Date : 21-03-26
Topic : Recursion
*/

class Solution {
  public:

    void solve(int index,string s,vector<string> &ans,string temp){
        //Base Case: 
        if(index == s.size()){
            ans.push_back(temp);
        }
        else if(index == s.size()-1)
            solve(index+1, s, ans, temp+s[s.size()-1]);
        else{
            solve(index+1, s, ans, temp+s[index]+" ");
            solve(index+1, s, ans, temp+s[index]);
        }
    }
    vector<string> permutation(string s) {
        vector<string> ans;
        solve(0,s,ans,"");
        // sort(ans.begin(),ans.end()); ==> For sorting , here it is not needed !!!
        return ans;
    }
};