/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void name(int i, int n){
    if(i == n){
        return;
    }
    cout<<"Saksham\n";
    name(i+1, n);
}

void linear_1_n(int i, int n){
    if(i > n){
        return;
    }
    cout<<i<<endl;
    linear_1_n(i+1, n);
}

void linear_n_1(int i, int n){
    if(i < n){
        return;
    }
    cout<<i<<endl;
    linear_n_1(i-1, n);
}

void linear_1_n_back(int i, int n){
    if(i < 1){
        return;
    }
    linear_1_n_back(i-1, n);
    cout<<i<<endl;
}

void linear_n_1_back(int i, int n){
    if(i > n){
        return;
    }
    linear_n_1_back(i+1, n);
    cout<<i<<endl;
}

int main()
{
    // name(0, 5);
    // linear_1_n(1, 10);
    // linear_n_1(10, 1);
    // linear_1_n_back(10, 10);
    // linear_n_1_back(1, 10);
    return 0;
}
