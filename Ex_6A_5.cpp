#include <stdio.h>
main()
{
	int n=0, m=0, i=1, p=2, x=1;
	printf("Dame n y m en ese orden\n");
	scanf("%d", &n);
	scanf("%d", &m);
	
	while(p<n||x<m)
	{
		printf("Suma: %d\n", p);
		p+=2;
		
		printf("Multiplicacion: %d\n", x);
		i+=2;
		x=x*i;
		
	if(p>n)
	{
		return (0);
	}
	if(x>m)
	{
		return (0);
	}
}
}
