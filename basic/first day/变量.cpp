#include "iostream"

#include "math.h"

using namespace std;

int Prime(int n)

{  int i,k=(int)sqrt(n)+1;

    

    for(i=2;i<k;i++)

    if(n%i==0)break;

    if((i==k))return 1;

    else return 0;

    }

int main()

{

int a,b,c,longth=0,finnal=0;



for(a=a;a<=b;a++)

{  longth=0; 

    if(Prime(a)==1)

    {
		for(b=1;;b++)

        {
		    if((Prime(a+b)==0)&&(a+b<=b))
		    longth++;

        else break;

        }

        a=a+b;     

      if(longth>=9){finnal++;

              cout<<finnal<<".";             

              for(c=b-1;c>=-1;c--)
			  {cout<<a-c;

              cout<<"\n";

              }

    }

    else continue;           

}

cout<<"\nThe total is "<<finnal;

return 0;


}