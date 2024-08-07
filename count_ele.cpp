#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    int count=0;
    int x;
    cout<<"size of arr";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    cout<<count;
    }
    
    }