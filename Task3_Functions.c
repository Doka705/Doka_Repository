//Task 3
void largest_element_in_array()
{
	int array[10];

	printf("Input 10 numbers to find the largest \n");

	int arrayElement;
	for(arrayElement = 0; arrayElement < 10; arrayElement++)
	{
		printf("Input %i element: ", arrayElement + 1);
		scanf("%i", array + arrayElement);
	}

	int largestElement = 0;
	for(arrayElement = 0; arrayElement < 10; arrayElement++)
	{
		if(array[arrayElement] > largestElement)
		{
			largestElement = array[arrayElement];
		}
	}

	printf("Largest element in the array: %i \n", largestElement);
}
