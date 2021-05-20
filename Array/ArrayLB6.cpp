#include<bits/stdc++.h>
using namespace std;
void findk(vector<int> &v1, int k, int n){   // using sort algo
	sort(v1.begin(), v1.end());
	cout<<"Kth smallest: "<<v1[k - 1]<<endl;   // we are taking 0 to n - 1 so we take k - 1
	cout<<"Kth largest: "<<v1[n - k]<<endl;
}
int main(){
	int n, temp, k;
    cin>>k;
	cin>>n;
	vector<int>v1;
	for(int i = 0; i < n; i++){ cin>>temp;
	v1.push_back(temp);
	}
	findk(v1, k, n);
	return 0;
}
