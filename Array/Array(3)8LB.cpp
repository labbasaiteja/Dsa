#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int> &v1, int n){                // count the 0,1,2 appraoch
	int c0 = 0, c1 = 0, c2 = 0, i  = 0;
	for(int i = 0; i  < n; i++){                  
	switch(v1[i]){                                // refer gfg
		case 0: c0++;
		        break;
	    case 1: c1++;
	            break;
	    case 2: c2++;
	            break;
	}
  } 
  i = 0;                                  // we update i to 0
  while(c0 > 0){ v1[i++] = 0;             // individually we are incrementing the values and update the index
  c0--;
  } 
  while(c1 > 0){ v1[i++] = 1;
  c1--;
  }
  while(c2 > 0){ v1[i++] = 2;
  c2--;
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

