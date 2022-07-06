#include<bits/stdc++.h>
using namespace std ;
vector<vector<int>> subsets(vector<int>&num){
int n= num.size();
int subset_ct = (1<<n);   
vector<vector<int>>subsets_vec;       
for(int mask=0;mask<subset_ct;++mask){
vector<int>sbset;
for(int j=0;j<n;++j){
    if((mask&(1<<j))!=0){
        sbset.push_back(num[j]);
    }
}
subsets_vec.push_back(sbset);
}
return subsets_vec;
}
int main(){
    //  when binary number represent any quantity then the binary number is called bit maks
    //  2 3 5 6 7 --->[3,6] ---->01010
    // No.of subset -->2^n no. subset present 
   // No. of bit mask present for an array of size n will be --> 0 to ((2^n)-1) 
//     Each subset will have only one bitmask
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;++i){
    cin>>v[i];
    // int x;
    // cin>>x;
    // v.push_back(x);
}
auto all_subset=subsets(v);
for(auto it:all_subset){
    for(auto ele:it){
        cout<<ele<<" ";
    }
    cout<<endl;
}


return 0 ;
}