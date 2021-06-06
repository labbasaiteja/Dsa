#include<bits/stdc++.h>
using namespace std;
void duplicateArray(vector<int> &v1, int n){
  unordered_map<int, int> um;
  for(int i = 0; i < n; i++){
      um[v1[i]]++;
  }
  bool p = false;
  unordered_map<int, int>:: iterator it;
  for(it = um.begin(); it != um.end(); it++){ 
      if(it -> second > 1){ cout<<it->first<<" ";
      p = true; 
       }
      if(p == false){ cout<<"-1"; }
  }
}
int main(){
    int n, temp;
    cin>>n;
    vector<int> v1;
    for(int i = 0; i < n; i++){
        cin>>temp;
        v1.push_back(temp);
    }
    duplicateArray(v1, n);
    return 0;
}