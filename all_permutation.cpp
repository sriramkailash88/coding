#include <bits/stdc++.h>

using namespace std;

void permutationhelper(vector<int> input,vector<int> helper)
{
    if(input.size()==0)
    {
        cout<<"{";
        for(auto u:helper)
        {
            cout<<u<<",";
        }
        cout<<"}"<<endl;
    }
    else
    {
        for(auto it = input.begin();it!=input.end();it++)
        {
            int c = *it;
            helper.push_back(c);
            input.erase(it);
            permutationhelper(input,helper);
            input.insert(it,c);
            helper.pop_back();
        }
    }
}
void permutation(vector<int> input)
{
    vector<int> helpervec;
    permutationhelper(input,helpervec);
    
}


int main() {
   
   
   vector<int> input = {1,1,2,2};
   permutation(input);
   
   }