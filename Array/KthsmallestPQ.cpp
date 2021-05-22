#include<bits/stdc++.h>
using namespace std;
int findk(vector<int> &v1, int k, int n){ 
  priority_queue <int, vector<int>, greater<>> pq(v1.begin(), v1.end());   
    while(--k
	){
  	pq.pop();
  }
  return pq.top();
}
int main(){
	int n, k, temp;
    cin>>k;
	cin>>n;
  vector<int>v1;
	for(int i = 0; i < n; i++){  cin>>temp;
	v1.push_back(temp);
	}
	cout<<"kth smallest element: "<<findk(v1, k, n)<<endl;
	return 0;
}
