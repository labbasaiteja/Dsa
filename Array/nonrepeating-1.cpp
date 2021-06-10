#include<bits/stdc++.h>
using namespace std;
int nonrepeat(vector<int>  &v1, int n){
    unordered_map<int, int> um;
    for(int i = 0; i < n; i++){
        um[v1[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(um[v1[i]] == 1){
            return v1[i];
        }
    }
    return -1;
}
int main(){
    int n, temp;
    cin>>n;
    vector<int> v1;
    for(int i = 0; i < n; i++){
        cin>>temp;
        v1.push_back(temp);
    }
    cout<<nonrepeat(v1, n)<<endl;
    return 0;
}