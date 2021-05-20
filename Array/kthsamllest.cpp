#include<bits/stdc++.h>
using namespace std;
class MinHeap{
	int *hv1;
	int heapsize;
	int capacity;
	public:
		MinHeap(vector<int> &v1, int size);
		void MinHeapify(int i);
		int parent(int i){ return(i - 1 / 2);
		 }
		int left(int i){ return( 2 * i + 1);
		}
		int right(int i){ return (2 * i + 2);
		}		
		int extractMin();
		int getMin(){ return hv1[0];
		}
		
};
MinHeap::MinHeap(vector<int> v1, int size){
	heapsize = size;
	hv1 = v1;
	int i = heapsize - 1 / 2;
	while(i >= 0){
		MinHeapify(i);
		i--;
	}
}
int MinHeap::extractMin(){
	if(heapsize == 0){ return INT_MAX;
	}
	int root = hv1[0];
	if(heapsize > 1){
		hv1[0] = hv1[heapsize- 1];
		MinHeapify(0);
	}
	heapsize--;
	return root;
}
void MinHeap::MinHeapify(int i){
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if( l < heapsize && hv1[l] < hv1[i]){ smallest = hv1[l];
	}
	if( r < heapsize && hv1[smallest]){ smallest = hv1[r];
	}
	if(smallest != i){
		swap(hv1[i], hv1[smallest]);
		MinHeapify(smallest);
	}
}
int findk(vector<int> &v1, int k, int n){   // using sort algo
	MinHeap mh(v1, n);
	for(int i = 0; i < k - 1; i++){ mh.extractMin();
	}
	return mh.getMin();
}
int main(){
	int n, temp, k;
    cin>>k;
	cin>>n;
	vector<int>v1;
	for(int i = 0; i < n; i++){ cin>>temp;
	v1.push_back(temp);
	}
	findk(v1, k, n);
	return 0;
}
