#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, temp, ma, mi;
	cin>>n;
	vector<int>v1;
	for(int i = 0; i < n; i++){ cin>>temp;
	 v1.push_back(temp);
	}
	mi = v1[0];
	ma = v1[0];
	for(int i = 0; i < n; i++){ if(v1[i] > ma){ ma = v1[i];  }
	if(v1[i] < mi){ mi = v1[i]; 
	}
	}
	cout<<"Max: "<<ma<<endl;
		cout<<"Min: "<<mi<<endl;
	return 0;
}
