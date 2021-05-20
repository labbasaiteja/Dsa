#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, temp;
	cin>>n;
	vector<int>v1;
	for(int i = 0; i < n; i++){ cin>>temp;
	v1.push_back(temp);
	}
	for(int i = n - 1; i >= 0; i--){ cout<<v1[i]<<" "; 
	}
	return 0;
}
