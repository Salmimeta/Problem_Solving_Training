#include <iostream>
 
using namespace std;
 
class Exponentiation{
    public :
        long long Mult(long long a,long long b,long long m){
            return ((a%m)*(b%m))%m;
        }
 
        int Power (int a, int b, int m){
            if (b==0)
                return 1;
            int c=Power(a,b/2,m);
            int result=Mult(c,c,m);
            if (b%2==1)
                result=Mult(result,a,m);
            return result;
        }
};
 
int main(){
    int a,b,m;  cin >> a >> b >> m;
    Exponentiation sol;
 
    cout << sol.Power (a, b, m) << endl;
}
