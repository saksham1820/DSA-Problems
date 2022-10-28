#include <iostream>
#include <vector>
using namespace std;

vector<int> seq{3, 1, 2};

void subsequences(int idx, vector<int> sub_seq){
    if(idx >= seq.size()){
        if(sub_seq.size() == 0){
            cout<<"{}";
            return;
        }
        cout<<'{';
        for(int i = 0; i < sub_seq.size(); i++){
            cout<<sub_seq[i]<<" ";
        }
        cout<<"\b}"<<endl;
        return;
    }
    sub_seq.push_back(seq[idx]);
    subsequences(idx + 1, sub_seq);
    sub_seq.pop_back();
    subsequences(idx + 1, sub_seq);
}
int main(){
    vector<int> sub_seq;
    subsequences(0, sub_seq);
    return 0;
}
