class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here    
    vector<int> ans;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        int n=ans.size();
        if(n%2==1)
        return ans[(n/2)];
        else
        return ans[n/2-1];
    }
