#include <iostream>

using namespace std;

int main()
{
	float t,p,r;
	cin >> t;
	cin >> p;
	if (p>20){
		r=(float ) p/(100-t);
		cout << (double ) (100-t-20)*r+40*r;
	} else{
		r=(float ) t/(80+2*(20-p));
		cout << (double ) 2*r*p;
	}
	return 0;
}
