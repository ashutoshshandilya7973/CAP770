#include<iostream>
using namespace std;
bool check(string str,int start,int end){
    if(start>=end){
        return 1;
    }
    if(str[start]!=str[end]){
        return 0;
    }
    return check(str,start+1,end-1);
}
int main(){
    string str="namon";
    if(check(str,0,4)){
        cout<<"The given string is palindrome"<<endl;
    }else{
        cout<<"The given string is not palindrome"<<endl;
    }
}
