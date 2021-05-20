#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int> &v1, int n){                // divide the array into 4 parts
	int l = 0, mid = 0, r = n - 1;                   // 1 - l, l - mid, mid + 1 - high, high to n
	while(mid <= r){                                 // refer gfg
	switch(v1[mid]){
		case 0: swap(v1[l++], v1[mid++]);
		        break;
	    case 1: mid++;
	            break;
	    case 2: swap(v1[mid++], v1[r--]);
	            break;
	}
  } 
}
int main(){
	int n, temp;
	cin>>n;
	vector<int>v1;
	for(int i = 0; i < n; i++){ cin>>temp;
	v1.push_back(temp);
	}
	sort012(v1, n);                               // func to rearrange 012
	for(int i = 0; i < n; i++){                   // we can another func to print 
		cout<<v1[i]<<" ";
	}
	
	return 0;
}

