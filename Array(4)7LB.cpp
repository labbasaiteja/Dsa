#include<bits/stdc++.h>
using namespace std;
void findk(vector<int> &v1, int k, int n){                  // adding n and keeping track of count
   for(int j = 0; j  < n; j++){ v1[j] = v1[j] - 1;          // we decremrnt the index to run 0  to n - 1
    }
    for(int i = 0;i < n; i++){  v1[v1[i] % n] += n;        // v1[i] % n gives no of occurence and we add n to keep track of v1[i]
	}
	for(int i = 0; i  < n; i++){
		if(i + 1 == k){ cout<<"Count: "<<v1[i] / n<<endl;		}
	}
}
int main(){
	vector<int>v1;
	int k, n, temp;
	cin>>k>>n;
	for(int i = 0; i < n; i++){ cin>>temp;
	v1.push_back(temp);                                   
	}
	findk(v1, k, n);      //  we can call function and in that func we can print the answer
	return 0;
}
