#include <iostream>
using namespace std;

int arr[] = {1, 2, 3, 2, 1};
int n = 5;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void reverse_array_double_var(int l, int r){
    if(l >= r){
        return;
    }
    swap(arr[l], arr[r]);
    reverse_array_double_var(l+1, r-1);
}

void reverse_array_single_var(int l){
    if(l >= n/2){
        return;
    }
    swap(arr[l], arr[n-l-1]);
    reverse_array_single_var(l+1);
}

bool palindrome(int l){
    if(l >= n/2){
        return true;
    }
    else if(arr[l] != arr[n-l-1]){
        return false;
    }
    return palindrome(l+1);
}

int main(){
    // reverse_array_double_var(0, 5);
    // reverse_array_single_var(0);
    // for(int i = 0; i < 6; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<palindrome(0);
    return 0;
}
