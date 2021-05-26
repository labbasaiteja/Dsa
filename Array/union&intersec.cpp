#include<bits/stdc++.h>
using namespace std;
void dounion(vector<int> &v1, int n, vector<int> &v2, int m){
  unordered_set<int> un;
  for(int i = 0; i < n; i++){
    un.insert(v1[i]);
  }
  for(int i = 0; i < m; i++){
    un.insert(v2[i]);
  }
  for(int i : un){
    cout<<i<<" "<<endl;
  }
}
void dointersect(vector<int> &v1, int n, vector<int> &v2, int m){
  unordered_set<int> in;
   int i, j;
  i = j = 0;
  while (i < m && j < n) {
		if (v1[i] < v2[j])
			i++;
		else if (v2[j] < v1[i])
			j++;
		else 
		{
			cout << v2[j] << " ";
			i++;
			j++;
		}
	}
  for(auto ele : in){
    cout<<ele<<" "<<endl;
  }
}
int main(){
  vector<int>v1;
  vector<int>v2;
  int n, m, t1, t2;
  cin>>n>>m;
  for(int i = 0; i < n; i++){
    cin>>t1;
    v1.push_back(t1);
  }
  for(int j = 0; j < n; j++){
    cin>>t2;
    v2.push_back(t2);
  }
  dounion(v1, n, v2, m);
  dointersect(v1, n, v2, m);
  return 0;
}