#include<iostream>
#include<string>
using namespace std;
void reversestring(string &str,int start,int end){
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
}
void reverseWords(string &str){
    int n=str.length();
    reversestring(str,0,n-1);
    int start=0;
    for(int end=0;end<=n;end++){
        if(end==n || str[end]==' '){
            reversestring(str,start,end-1);
            start=end+1;
        }
    }
}
int main(){
    string str;
    cout<<"Enter the string:";
    cin>>ws;
    getline(cin,str);
    reverseWords(str);
    cout<<str<<endl;
    return 0;
}
