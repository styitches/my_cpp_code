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
	cout << "���Լ��" << h << endl ;
	l = lcd ( u , v, h ) ;
	cout << "��С������" << l << endl ;
}
