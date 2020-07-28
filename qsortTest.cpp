#include <cstdio>
#include <cstdlib>

int main()
{
	int a[10] = {7, 8, 0, 6, 9, 3, 2, 5, 1, 4};

	qsort((void*)a, 10, sizeof(int), [](const void *p1,
                                     const void *p2)->int
	    {
		    int i = *((int*)p1);
		    int j = *((int*)p2);
		    return (i - j);
	    }
	);

	for(int i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}

	printf("\n");

	return 0;

}
