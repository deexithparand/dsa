// 12.26 mins
#include<bits/stdc++.h>

using namespace std;

void printer(vector<int> v){
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
}

int select_minimum_element_index(vector<int> v, int i, int n){
    int min_element_index = i;
    for(int j=i+1; j<n; j++){
        if(v[min_element_index] > v[j]){
            min_element_index = j;
        }
    }
    return min_element_index;
}

void selection_sort(vector<int>& v, int n){
    for(int i=0; i<v.size()-1; i++){
        int min_element_index = select_minimum_element_index(v,i,n);
        if(v[min_element_index] < v[i]){            
            // swap
            int t = v[i];
            v[i] = v[min_element_index];
            v[min_element_index] = t;
        }
    }
}

int main(){
    vector<int> v{2,1,5,6,8};
    selection_sort(v, v.size());
    printer(v);
    return 0;
}