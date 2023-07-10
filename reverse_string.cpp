#include<iostream>
using namespace std;

void reversestring(string &str,int n, int s, int e){
    if(s>e){
        return;
    }
    if(s<=e)  swap(str[s],str[e]);
    reversestring(str,n,s+1,e-1);
}

int main(){
    string str="pronita";
    int n = str.size();
    int s = 0;
    int e = n-1;
    // while(s<=e){
    //     swap(str[s],str[e]);
    //     s++;
    //     e--;
    // }
    reversestring(str,n,s,e);
    for(auto i:str){
        cout<<i;
    }

    return 0;
}