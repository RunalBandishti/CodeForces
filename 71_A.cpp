#include<iostream>
using namespace std;

string StringMan(string newStr){
    if(newStr.length()<=10){
        return newStr;
    }
    char strfirst = newStr[0];
    int strlast = newStr.length() - 1;

    string iCnt= to_string(newStr.length() - 2);

    string wholeString = strfirst + iCnt + newStr[strlast];

    return wholeString;
}

int main(){
    int Testcases=0;
    cin>>Testcases;

    while(Testcases--){
        string str;
        cin>>str;

        cout<<StringMan(str)<<endl;
    }
    return 0;
}