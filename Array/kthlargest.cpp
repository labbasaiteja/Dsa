#include<bits/stdc++.h>
using namespace std;
int findk(vector<int> &v1, int k, int n){
    priority_queue<int, vector<int>, greater<>> pq(v1.begin(), v1.begin() + k);
    for(int i = k; i < n; i++){
       if(v1[i] > pq.top()){ 
           pq.pop();
           pq.push(v1[i]);
       }
    }
    return pq.top();

}
int main(){
    int k, n, temp;
    cin>>k>>n;
    vector<int>v1;
    for(int i = 0; i < n; i++){
        cin>>temp;
        v1.push_back(temp);
    }
    cout<<"k th largest element: "<<findk(v1, k, n);
    return 0;
}