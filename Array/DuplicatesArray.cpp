#include<bits/stdc++.h>
using namespace std;
void duplicateArray(vector<int> &v1, int n){
    vector<int> a;
    bool p = false;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(v1[i] == v1[j]){ 
                auto it = std::find(a.begin(), a.end(), v1[i]);
                if(it != a.end()){
                    break;
                }
                else{
                    a.push_back(v1[i]);
                    p = true;
                }      
            }
        }
    }
    if(p == true){
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
  }
  else{
      cout<<"-1"<<"\n";
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