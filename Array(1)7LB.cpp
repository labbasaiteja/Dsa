#include<bits/stdc++.h>
using namespace std;
int findk(vector<int> &v1, int k, int n){  
	int c = 0;
	for(int i = 0; i < n; i++){
		if(v1[i] == k){ c++;
		} 
	}
	return c;
}
int main(){
	vector<int>v1;
	int k, n, temp;
	cin>>k>>n;
	for(int i = 0; i < n; i++){ cin>>temp;
	v1.push_back(temp);
	}
	int ct = findk(v1, k, n);      // when we are assign var to function we should return value to that
	cout<<"Count: "<<ct<<endl;
	return 0;
}
