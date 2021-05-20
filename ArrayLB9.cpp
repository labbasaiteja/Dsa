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
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
		if(v1[i] > v1[j]){ int val = v1[i];
		v1[i] = v1[j];
		v1[j] = val;
		}
	}
	}
	int max = v1[n -1], min = v1[0];
	int range = max - min;
	cout<<"Range: "<<range<<endl;
	return 0;
}
