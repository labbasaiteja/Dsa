#include<bits/stdc++.h>
using namespace std;
struct Pair{    // struct name always capital 
	int max;
	int min;
};
 struct Pair range(vector<int> &v1, int n){    // Compare in Pairs approach
 	struct Pair minmax;                         // Pairs means adjacent elements
	 int i;     
	if(n % 2 == 0){                             // even no of elements
		if(v1[0] > v1[1]){ minmax.max = v1[0];   // assigning min and max values 
		minmax.min = v1[1];
		}
		else{ minmax.max = v1[1];
		minmax.min = v1[0];
		}
	  i = 2;                             // even no elements so after comparing first 2 elements go to next third element
	}
	else{                              //odd no elements so keeping both to first element
		minmax.max = v1[0];
		minmax.min = v1[0];
		i = 1;
	}

    while(i < n - 1){                                     // loop to traverse all elements
    	if(v1[i] > v1[i + 1]){                           // comapring in pairs
    	     if(v1[i] > minmax.max){ minmax.max = v1[i];
			 }
			 if(v1[i + 1] < minmax.min){ minmax.min = v1[i + 1]; // if less we assign to min
			 }
        }
        else{ 
        if(v1[i + 1] > minmax.max){ minmax.max = v1[i + 1];
		}
		if(v1[i] < minmax.min){ minmax.min = v1[i];
		}
		}
		i += 2;                // after compare adjacent two elements we go to third element
      }
    return minmax; 
}
int main(){
	int n, temp;
	cin>>n;
	vector<int>v1;
	for(int i = 0; i < n; i++){ cin>>temp;
	v1.push_back(temp);
	}
	struct Pair minmax = range(v1, n);  // calling the struct pair minmax
	int ran = minmax.max - minmax.min;
	cout<<"Range: "<<ran<<endl;
	return 0;
}

