#include <stdio.h>
#include <stdlib.h>

/*
	Name        : secret
	Description : Practical 9 Question 4
*/
void main()
{
	int num[30] = { -3,5,3,8,12,6,22,18,-9,15, -1, 25, 31, 0, 26, -6, 17, 1, 9, 10, 11, 24, -3, 4, -20, 19, 7, -17, 13, 14 };
	/*                                    //Question [4(a)]
	for (int j = 0; j <10; j++)
	{
		printf("%3d ", num[j]);
	}
	puts("");
	for (int j = 10; j <20; j++)
	{
		printf("%3d ", num[j]);
	}
	puts("");
	for (int j = 20; j <30; j++)
	{
		printf("%3d ", num[j]);
	}
	puts("");
	
	*/
	/*	                                   //QUESTION[4(b)]
	for (int j = 0; j <10; j++)
	{
		if(num[j]%2)
		printf("%3d ", num[j]);
	}
	puts("");
	for (int j = 10; j <20; j++)
	{
		if (num[j] % 2)
		printf("%3d ", num[j]);
	}
	puts("");
	for (int j = 20; j <30; j++)
	{
		if (num[j] % 2)
		printf("%3d ", num[j]);
	}
	puts("");
	*/
	
	           /*                            //QUESION[4(c)]
	for (int j = 0; j <10; j++)
	{
		if (j % 2)
			printf("%3d  ",num[j]);
	}
	puts("");
	for (int j = 10; j <20; j++)
	{
		if (j % 2)
			printf("%3d  ", num[j]);
	}
	puts("");
	for (int j = 20; j <30; j++)
	{
		if (j % 2)
			printf("%3d  ", num[j]);
	}
	puts("");
	*/
	
	
	/*                                     //QUESION[4(d)]
	int even = 0;
	for (int i = 0; i < 30; i++)
	{
		if (num[i] % 2 == 0)
			even++;
	}
	printf("Count of even numbers : %d", even);
	*/                                    
									
	/*								 	//QUESION[4(e)]
	int sum = 0;
	for (int i = 0; i < 30; i++)
	{
		sum += num[i];
    }
	printf("The sum of all values : %d", sum);

	puts("");
	*/
	
	           /*                          //QUESTION[4(f)]
	for (int j = 0; j < 30; j++)
	{
		if (j % 5==0)
		{
			num[j]= num[j] > 0 ? (-num[j]) : (num[j]);
		}
	}
	for (int j = 0; j < 10; j++)
	{

		printf("%3d ",num[j]);
	}
	puts("");
	for (int j = 10; j < 20; j++)
	{
		printf("%3d ", num[j]);
	}
	puts("");
	for (int j = 20; j < 30; j++)
	{
		printf("%3d ", num[j]);
	}
	puts("");
	*/



	 /*                                //Question[4(g)]
	int smallestvalue = 0;         //assume that the smallest value starts from 0
	for (int i = 0; i <30; i++)
	{
		if (num[i] < num[smallestvalue]) //compare every value to determine the smallest
		{
			smallestvalue = i; 
		}
	
	}
	printf("The smallest value is %d located at %d", num[smallestvalue], smallestvalue);
	puts("");
	*/

	/*                                   //Question[4(h)]                 
	int newNum[24] = { 5,3,8,12,6,22,18,15,25, 31, 0, 26,17, 1, 9, 10 ,11, 24, 4,19, 7,13,14 };
       for (int i = 0; i <23 ; i++)
    {
		   printf("%d ", newNum[i]);
	}
	*/





	puts("\n");
	system("pause");
}
