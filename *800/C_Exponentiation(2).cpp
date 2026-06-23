#include <iostream>
 
using namespace std;
 
class Exponentiation{
    public :
        long long Power(long long a, long long b, long long m){
            long long result=1;
            if (a==0) return 0;
            while (b>0){
                if (b & 1)
                    result=(result*a)%m;
 
                b=b>>1;
                a=(a*a)%m;
            }
            return result;
        }
};
 
int main(){
    int a,b,m;  cin >> a >> b >> m;
    Exponentiation sol;
 
    cout << sol.Power(a,b,m) << endl;
}
