#include <iostream>
using namespace std;

void stalinSort(int arr[], int& size) {
    int result[100];
    int j = 0;

    for (int i = 0; i < size; i++) {
        if (j == 0 || arr[i] >= result[j - 1]) {
            result[j] = arr[i];
            j++;
        }
    }
    size = j;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int size = n;

        stalinSort(arr, size);

        if(size==1){
            cout<<0<<endl;
        }
        else if(size==n && size>3){
            cout<<size-2<<endl;
        }
        else if((size-1)>=0){
            cout<<size-1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}
