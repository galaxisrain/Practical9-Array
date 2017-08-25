#include <stdio.h>                       //QUESTION 3(A)
#include <stdlib.h>
#pragma warning(disable:4996)

void main()
{
	//variable declaration
	int integers[10];
	int integerstotal;
	double percentage[10];
	double totalpercentage=0;
	
	
	//process
	for (int i = 0; i < 10; i++)
	{
		printf("Enter an integer ( %d of %d ) : ",i+1,10);
		scanf("%d", &integers[i]);
	}
	for (int i = 0; i < 10; i++)
	{
	    integerstotal = 0;
	}
	for (int i = 0; i < 10; i++)
	{
		integerstotal += integers[i];
	}
	for (int i = 0; i < 10; i++)
	{
		percentage[i] = (integers[i] / (double)integerstotal) * 100;
		totalpercentage += percentage[i];
	}
	//output
	puts("");
	puts("         n\t% of total");
	puts("        ---\t------------");
	for (int i = 0; i < 10; i++)
	{
		printf("        %3d\t", integers[i]);
		printf("%10.2lf %%\n", percentage[i]);

	}
	puts("        ---\t------------");
		printf("Total = %3d\t", integerstotal);
		printf("%10.2lf %%\n", totalpercentage);


		puts("\n");
	system("pause");
	
}


/*                                       //QUESTION 3(B)
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void main()
{
	//variable declaration
	int input;
	int integers[100];
	int integerstotal;
	double percentage[100];
	double totalpercentage = 0;

	//input
	printf("Enter the number of input elements (maximum 100) :");
	scanf("%d", &input);
	for (int i = 0; i < input; i++)
	{
	     printf("Enter an integer ( %d of %d ):",i+1,input);
	     scanf("%d", &integers[i]);
	}
	for (int i = 0; i < input; i++)
	{
		integerstotal = 0;
	}
	for (int i = 0; i < input; i++)
	{
		integerstotal += integers[i];
	}
	for (int i = 0; i < input; i++)
	{
		percentage[i] = (integers[i] / (double)integerstotal) * 100;
		totalpercentage += percentage[i];
	}
	//output
	puts("");
	puts("         n\t% of total");
	puts("        ---\t------------");
	for (int i = 0; i < input; i++)
	{
		printf("        %3d\t", integers[i]);
		printf("%10.2lf %%\n", percentage[i]);

	}
	puts("        ---\t------------");
	printf("Total = %3d\t", integerstotal);
	printf("%10.2lf %%\n", totalpercentage);


	puts("\n");
	system("pause");
	
}
*/
