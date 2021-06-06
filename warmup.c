#include<stdio.h>
#include<stdlib.h>

int main(){
int *arr;
int i,n, numOfElements, searchnum;
printf("Enter the number of elements:\n");
scanf(" %d", &numOfElements);
// We have to create the array of numOfElements number of elements
arr = (int *)calloc(numOfElements, sizeof(int));
for ( i = 0; i < numOfElements; i++)
{
	printf("Enter arr[%d]: ", i);
	scanf("%d", (arr+i));
}
// Printing arr
for ( i = 0; i < numOfElements; i++)
{
	printf("arr[%d] = %d\n", i, *(arr+i));
}
//Reallocation: Now we want (numOfElements+1) elements	  
arr = realloc(arr, numOfElements*sizeof(int)+1);
printf("Enter arr[%d]: ",(numOfElements));
scanf("%d", (arr+numOfElements));

for ( i = 0; i < numOfElements+1; i++)
{
	printf("arr[%d] = %d\n", i, *(arr+i));
}

//Find an element
printf("Which element you want to find?\n");
scanf("%d", &searchnum);
for ( i = 0; i < numOfElements+i; i++)
{
	if (searchnum == *(arr+i))
	{
		printf("Found at index %d", i);
		break;
	}else
	{
		printf("No element found");
		break;
	}
	
}

return 0