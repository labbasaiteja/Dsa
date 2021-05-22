#include<bits/stdc++.h>
using namespace std;
class MinHeap{
	int *harr;
	int heapsize;
	int capacity;
	public:
		MinHeap(int arr[], int size);
		void MinHeapify(int i);
		int parent(int i){ return(i - 1 / 2);
		 }
		int left(int i){ return( 2 * i + 1);
		}
		int right(int i){ return (2 * i + 2);
		}		
		int extractMin();
		int getMin(){ return harr[0];
		}
		
};
MinHeap::MinHeap(int arr[], int size){
	heapsize = size;
	harr = arr;
	int i = heapsize - 1 / 2;
	while(i >= 0){
		MinHeapify(i);
		i--;
	}
}
int MinHeap::extractMin(){
	if(heapsize == 0){ return INT_MAX;
	}
	int root = harr[0];
	if(heapsize > 1){
		harr[0] = harr[heapsize- 1];
		MinHeapify(0);
	}
	heapsize--;
	return root;
}
void MinHeap::MinHeapify(int i){
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if( l < heapsize && harr[l] < harr[i]){ smallest = harr[l];
	}
	if( r < heapsize && harr[smallest]){ smallest = harr[r];
	}
	if(smallest != i){
		swap(harr[i], harr[smallest]);
		MinHeapify(smallest);
	}
}
int findk(int arr[], int k, int n){   
	MinHeap mh(arr, n);
	for(int i = 0; i < k - 1; i++){ mh.extractMin();
	}
	return mh.getMin();
}
int main(){
	int n, k;
    cin>>k;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){  cin>>arr[i];
	}
	cout<<"kth smallest element: "<<findk(arr, k, n)<<endl;
	return 0;
}
