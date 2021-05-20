#include<bits/stdc++.h>
using namespace std;
struct Pair{    // struct name always capital 
	int max;
	int min;
};
 struct Pair range(vector<int> &v1, int n){      //  using linear search approach
 	struct Pair minmax;                         // the worst case occurs when elements are sorted 
	                                        // in descending order  best case occurs when elements are sorted in ascending order.
	int min = v1[0], max = v1[1];
	for(int i = 0; i < n; i++){
		if(v1[i] > max) minmax.max = v1[i];
		if(v1[i] < min) minmax.min = v1[i];
	}
	return minmax;    // return multiple values
	
}
int main(){
	int n, temp;
	cin>>n;
	vector<int>v1;
	for(int i = 0; i < n; i++){ cin>>temp;
	v1.push_back(temp);
	}
	struct Pair minmax = range(v1, n);  // calling the struct pair minmax
	int r = minmax.max - minmax.min;
	cout<<"Range: "<<r<<endl;
	return 0;
}

