#include <iostream>
#include <vector>
using namespace std;

vector<int> seq{1, 2, 1};

void subsequences(int idx, vector<int> sub_seq, int sum){
    if(idx >= seq.size()){
        if(sum == 3){
            cout<<'{';
            for(int i = 0; i < sub_seq.size(); i++){
                cout<<sub_seq[i]<<" ";
            }
            cout<<"\b}"<<endl;
        }
        return;
    }
    sub_seq.push_back(seq[idx]);
    sum += seq[idx];
    subsequences(idx + 1, sub_seq, sum);
    sub_seq.pop_back();
    sum -= seq[idx];
    subsequences(idx + 1, sub_seq, sum);
}

int subsequences_count(int idx, int sum){
    if(idx >= seq.size()){
        if(sum == 3){
            return 1;
        }
        return 0;
    }
    sum += seq[idx];
    int l = subsequences_count(idx + 1, sum);
    sum -= seq[idx];
    int r = subsequences_count(idx + 1, sum);
    return l + r;
}

int main(){
    vector<int> sub_seq;
    int sum = 0;
    cout<<subsequences_count(sum, sum);
    return 0;
}
