#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int> &v1,int n){
    for(int i = 0; i < n - 1; i++){
       // int imin = i; why we did;
        for(int j = i + 1; j < n; j++){
            if(v1[j] < v1[i]){ 
            int temp = v1[i];
            v1[i] = v1[j];
            v1[j] = temp;
            }
        }
          
 
    }
 
}
 
 
int main(){
    vector<int>v1{97,3,103,-2,-9,67};
    selectionsort(v1,6);
    for(int i = 0; i < 6; i++){ cout<<v1[i]<<" ";
    }
    return 0;
}
