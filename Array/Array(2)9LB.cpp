#include<bits/stdc++.h>
using namespace std;
struct Pair{    // struct name always capital 
	int max;
	int min;
};
 struct Pair range(vector<int> &v1, int l, int r){    // divide and conqer approach
 	struct Pair minmax, mml, mmr;       // struct should be mmr and mml                 
	int mid;
	
	if(l == r){ minmax.max = v1[l];
	minmax.min = v1[l];
	return minmax;
	}
	
	if(r == l + 1){ 
	  
	  if(v1[l] < v1[r]){ minmax.min = v1[l];
	  minmax.max = v1[r];
	  }
	  else{ minmax.min = v1[r];
	  minmax.max = v1[l];
	  }
	  return minmax;
	}
	
	mid = (l + r) / 2;            // mml is one part of array and mmr is another 
	mml = range(v1, l, mid);      // calling recursive functions
	mmr = range(v1, mid + 1, r);    // divide array into 2 parts and compare min or max values in both parts
	if(mml.min < mmr.min){ minmax.min = mml.min;
	}
	else{ minmax.min = mmr.min;
	}
	
	if(mml.max > mmr.max){ minmax.max = mml.max;
	}
	else{ minmax.max = mmr.max;
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
	struct Pair minmax = range(v1, 0, n - 1);  // calling the struct pair minmax
	int ran = minmax.max - minmax.min;
	cout<<"Range: "<<ran<<endl;
	return 0;
}

