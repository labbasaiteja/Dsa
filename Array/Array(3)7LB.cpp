#include<bits/stdc++.h>
using namespace std;
void findk(vector<int> &v1, int k, int n){  //   keeping repeated elements -ve
    int i = 0;
    while(i < n){
    	if(v1[i] <= 0){ i++;           // just to processse and go to next if -ve number
    	continue;                      // gfg
		}
		int elementindex = v1[i] - 1;    // we are keeping index as value - 1
		if(v1[elementindex] > 0){
			v1[i] = v1[elementindex];
			v1[elementindex] = -1;
		}
		else{                          // if new number is occured
			v1[elementindex]--;
			v1[i] = 0;                 // assign to 0
			i++;
		}
	}
	for(int i = 0; i < n; i++){          // so we generally keep i + 1 == k we are decreasing element by 1
		if(i + 1 == k){ cout<<"Count: "<<abs(v1[i])<<endl;
		}
	}
}
int main(){
	vector<int>v1;
	int k, n, temp;
	cin>>k>>n;
	for(int i = 0; i < n; i++){ cin>>temp;
	v1.push_back(temp);
	}
	findk(v1, k, n);      //
	return 0;
}
