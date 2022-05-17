#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void selection_sort(int *a,int n){
    int i, j, min_idx; 
  
    
    for (i = 0; i < n-1; i++) 
    { 
        // Find min ele
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (a[j] < a[min_idx]) 
            min_idx = j; 
  
        // swap min ele to front
        swap(a[min_idx], a[i]); 
    } 
}
int main(){
    int n;
    cout<<"\nEnter number of elements ";
    cin>>n;
    int a[n];
    cout<<"\nEnter elements ";
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    selection_sort(a,n);
    int i;
    cout<<"\nSorted array is \n";
    for (i=0; i < n; i++) 
        cout << a[i] << " "; 
    cout << endl; 
    
    return 0;
}