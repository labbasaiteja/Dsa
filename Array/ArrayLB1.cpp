#include<iostream>
#include<vector>
using namespace std;
int main(){
	int m, n, temp;
	int val = 0;
	vector<int> v1;
	cin>>m>>n;
	for(int i = 1; i <= n; i++){ 
	cin>>temp;
	v1.push_back(temp); 	}
		for(int i = 0; i < n; i++){ if(v1[i] == m){ val++;
		} }
		if(val) { cout<<"true"<<endl; }
				else{ cout<<"false"<<endl; }
		return 0;
}
