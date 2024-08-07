// find max element from the array
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cout<<"size of arr";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<=n-1;i++){
        if(arr[i]>max){

            max=arr[i];
    
    
 }}
    cout<<max;
}
