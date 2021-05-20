#include<bits/stdc++.h>
using namespace std;
void findk(vector<int> &v1, int k, int n){  // Using it as hashmap appraoch
	int hash[n] = {0};                      // first filled hash map with all 0 s
	int i = 0;                              // gfg
	while(i < n){
       hash[v1[i] - 1]++;                   // we kept index 3 elment in 2 index of hashmap taken as extra space
       i++;
	}
	for(int i = 0; i < n; i++){
		if( i + 1 == k){ cout<<"Count: "<<hash[i]<<endl;       // we are printing index 3 in 2 index of hash
		}  
	}
}
int main(){
	vector<int>v1;
	int k, n, temp;
	cin>>k>>n;
	for(int i = 0; i < n; i++){ cin>>temp;
	v1.push_back(temp);
	}
	findk(v1, k, n);      //
	return 0;
}
