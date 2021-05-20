#include<bits/stdc++.h>
using namespace std;
void rearrange(vector<int> &v1, int n){            // two ptr approach
	int l = 0, r = n - 1;
	while(l <= r){ 
	if(v1[l] < 0 && v1[r] < 0) l++;
	else if(v1[l] > 0 && v1[r] < 0){ swap(v1[l], v1[r]);
	l++;
	r--;
	}
	else if(v1[l] > 0 && v1[r] > 0) r--;
	else {                                        // when r > 0 and l < 0 no need to swap just inc l and dec r
		l++;
		r--;
	}
	}
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
