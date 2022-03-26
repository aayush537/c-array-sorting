#include <iostream>
 using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 1; i<n; i++){
        int currElem = arr[i];
        int j = j-1;
        while(arr[j]>currElem){
            arr[j+1]= arr[j];
            j--;
        }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    }

    return 0;
}