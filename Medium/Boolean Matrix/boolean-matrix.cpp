//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        vector<pair<int,int>>v;
        set<int>p1;
        set<int>p2;
        pair<int,int>p;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==1)
                {
                    p1.insert(i);
                    p2.insert(j);
                }
            }
        }
        for(auto i:p1)
        {
            for(int x=0;x<matrix[0].size();x++)
            {
                
                matrix[i][x]=1;
            }
        }
        for(auto i:p2)
        {
            for(int x=0;x<matrix.size();x++)
            {
                matrix[x][i]=1;
            }
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends