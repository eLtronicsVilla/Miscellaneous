#include <stdio.h>
struct Scope 
{
	//anonymous union
	union
	{
		char alpha;
		int num;
	};
};
int main()
{
	struct Scope x;
	x.num = 65;

	printf ("x.alpha = %c , x.num = %d",x.alpha, x.num);
	return 0;
} 
