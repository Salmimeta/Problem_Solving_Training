#include <iostream>
 
 
using namespace std;
 
 
 
int main(){
    string s;  cin >> s;
    long long counter=0;
    int n=(int)s.size();
    int countA=0,countC=0;
    for (char c:s)
        if (c=='c')
            countC++;
    for (int i=0;i<n;i++){
        if (s[i]!='b'){
            if (s[i]=='a')  countA++;
            if (s[i]=='c')  countC--;
            continue;
        }
        counter+= (long long) countA*countC;
    }
    cout << counter << endl;
return 0;
}