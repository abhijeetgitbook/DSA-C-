#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key){
    //defining parameters for start position and end position
    int s = 0;
    int e = n-1;
    
    //algorithm to find the key value in Array using Binary Search
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid +1;
        }
    }

    return -1;
}

int main() {
    //Array decleration
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22};
    int n= sizeof(arr)/sizeof(int);
    
    //user input
    int key;
    cout <<"Please enter your number"<<endl<< "which you wanted to search : ";
    cin >>key;
    
    //calling binary _search function
    int index = binary_search(arr,n,key);
    
    //output
    if(index!=1){
        cout<<key<<" is present at index "<< index <<endl;

    }
    else{
        cout<<key<<" not Found";
    }
    return 0;
}
