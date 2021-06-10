#include<bits/stdc++.h>
using namespace std;
int nonrepeat(vector<int>& v1, int n){
for(int i = 0; i < n; i++){
    int j;
    for(j = 0; j < n; j++){
        if(i != j && v1[i] == v1[j]){
            break;
        }
    }
    if(j == n){ return v1[i]; }
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