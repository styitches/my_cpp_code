#include <iostream>
using namespace std;

int hcf( int u , int v )
{
	int a,b,temp,r;
	if (u > v)	
    {
		temp = u ;
		u = v ;
		v = temp ;
    }
    a = u ;
    b = v ;
    while ( ( r = b % a ) != 0 )   
    {
	    b = a ;
	    a = r ;
    }
    return a ;
}

int lcd( int u , int v , int h )
{
	return( u * v / h ) ;
}
int main()
{
	int u , v , h , l ;
	cin >> u >> v ;
	h = hcf ( u , v ) ;
	cout << "最大公约数" << h << endl ;
	l = lcd ( u , v, h ) ;
	cout << "最小公倍数" << l << endl ;
}
