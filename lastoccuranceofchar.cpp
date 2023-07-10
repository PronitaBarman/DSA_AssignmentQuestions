// Last occurance of a char

#include<iostream>
using namespace std;

//From left to right
int lastoccurance(string &str, int n, int i, char x, int &ans){
    //Base case
    if(i>=n){
        return -1;
    }
    if(str[i]==x){
        ans=i;
    }
    lastoccurance(str, n, i+1,x,ans);
    return ans;
}

// From right to left

int lastoccurance(string &str, int n, int i, char x, int &ans){
    //Base case 
    if(i<0){
        return -1;
    }
    if(str[i]==x) return i;
    return lastoccurance(str, n, i--,x,ans);
}

int main(){
    string str = "aaaaaaaaaap";
    int n = str.size();
    //int i =0;
    int i= n-1;
    char x ='p';
    int ans;
    cout<< lastoccurance(str, n , i, x,ans);


    return 0;
}

//Time complexcity O(n+1), SC=O(n+1).