/*Anagram*/
#include<iostream>
using namespace std;
bool isAnagram(const char* str1,char* str2)
{
    int length1=0,length2=0;
    while(str1[length1]!='\0')length1++;
    while(str2[length2]!='\0')length2++;
    if(length1!=length2)return false;
    int count1[26]={0};
    int count2[26]={0};
    for(int i=0;i<length1;i++)
    {
        count1[str1[i]- 'a']++;
        count2[str2[i]- 'a']++;
    }
        for(int i=0;i<26;i++)
        {
            if(count1[i]!=count2[i])return false;
        }
        return true;
}
int main(){
    char str1[100];
    char str2[100];
    cout<<"Enter the first string:";
    cin>>str1;
    cout<<"Enter the second string:";
    cin>>str2;
    if(isAnagram(str1,str2)){
        cout<<"The strings are anagram";
    }
    else{
        cout<<"The strings are not anagram";
    }
    return 0;
}
