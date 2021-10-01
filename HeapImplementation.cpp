#include<bits/stdc++.h>
using namespace std;
//  implemented using max head
void heapify(int a[],int n,int i){
    int large = i;
    int l_chile = 2*i+1;
    int r_child = 2*i+2;
    if(l_chile<=n && a[l_chile]>a[large]){
        large = l_chile;
    }
    if(r_child<=n && a[r_child]>a[large])
        large = r_child;
    if(large!=i){
        swap(a[i],a[large]);
        heapify(a,n,large);
    }
}
void buildheap(int a[],int n){
    // start from last second level because leaf node have nothing to compare with
    for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
  
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    buildheap(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
