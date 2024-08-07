#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    int min=0;
    int max,s_max;
    cout<<"size of arr";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    max=INT_MIN; 
    for(int i=1;i<n;i++){
        if(arr[i]>max){

            max=arr[i];
    
    
 }
 }
 s_max=INT_MIN;
 for(int i=0;i<n;i++){
    if(arr[i]!=max && s_max<arr[i]){
        s_max=arr[i];
    }
 }
 cout<<s_max;

}
