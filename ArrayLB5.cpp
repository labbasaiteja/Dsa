#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int> &v1,int n){
	for(int i = 0; i < n - 1; i++){
		int imin = i;
		for(int j = i + 1; j < n; j++){ if(v1[j] < v1[imin]){
			imin = j;
		}
		}
		int temp = v1[i];
		v1[i] = v1[imin];
		v1[imin] = temp;
	}
}
int main(){
	int k, n, val;
	cin>>k>>n;
	vector<int>v1;
	for(int i = 0; i < n; i++){ cin>>val;
	v1.push_back(val);
	}
	selectionsort(v1,n);
	int l,s;
	s = k - 1;
	l = n - k;
	
	cout<<"Small: "<<v1[s]<<endl;
	cout<<"Large: "<<v1[l]<<endl;
	return 0;
}
