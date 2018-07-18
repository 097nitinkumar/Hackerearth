//funny comment section https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/
#include <iostream>

using namespace std;
int no_set_bit(int n)
{   int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main() {
	int cases,n;
	scanf("%d",&cases);
	for(int i=0;i<cases;i++)
	{
	    scanf("%d",&n);
	    printf("%d\n",no_set_bit(n));
	}
}

