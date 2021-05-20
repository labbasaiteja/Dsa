#include<bits/stdc++.h>
using namespace std;
void rearrange(vector<int> &v1, int n){                    // quick sort partition approach
	int j = 0;
	for(int i = 0; i < n; i++){
		if(v1[i] < 0){
			if( i != j){ swap(v1[i],v1[j]);               //  first element checking 
			}
			j++;
		}		}
	}
void print(vector<int> &v1, int n){ for(int i = 0; i < n; i++){ cout<<v1[i]<<" ";
}
} 
int main(){
	int n, temp;
	cin>>n;
	vector<int>v1;
	for(int i = 0; i < n; i++){ cin>>temp;
	v1.push_back(temp);
	}
	rearrange(v1,n);
	print(v1,n);
	return 0;
}
