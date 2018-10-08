//*******************************Ex1*******************************//
void swap16()
{
	unsigned short varToSwap = 0;

    printf("Input 2 bytes variable to swap: ");
    scanf("%i", &varToSwap);

	varToSwap = ((varToSwap & 0xFF) << 8) | ((varToSwap & 0xFF00) >> 8);
}

void swap32()
{
	unsigned int varToSwap = 0;

    printf("Input 4 bytes variable to swap: ");
    scanf("%i", &varToSwap);

	varToSwap = ((varToSwap & 0x000000FF) << 24) |
  		    ((varToSwap & 0x0000FF00) <<  8) |
		    ((varToSwap & 0x00FF0000) >>  8) |
		    ((varToSwap & 0xFF000000) >> 24);
}

void swap64()
{
	unsigned long long varToSwap = 0;

    printf("Input 8 bytes variable to swap: ");
    scanf("%i", &varToSwap);

    varToSwap = ((varToSwap & 0x00000000000000FFULL) << 56) |
		((varToSwap & 0x000000000000FF00ULL) << 40) |
		((varToSwap & 0x0000000000FF0000ULL) << 24) |
		((varToSwap & 0x00000000FF000000ULL) <<  8) |
		((varToSwap & 0x000000FF00000000ULL) >>  8) |
		((varToSwap & 0x0000FF0000000000ULL) >> 24) |
		((varToSwap & 0x00FF000000000000ULL) >> 40) |
		((varToSwap & 0xFF00000000000000ULL) >> 56);
}



//*******************************Ex2*******************************//
void rgb_convert()
{
    unsigned char r, g, b;
    unsigned short rgb;

    r = 255;        // 0xFF 1111 1111
    g = 100;        // 0x64 0110 0100
    b = 50;         // 0x32 0011 0010

    r = r >> 3;     // 0x31 0001 1111
    g = g >> 2;     // 0x19 0001 1001
    b = b >> 3;     // 0x06 0000 0110

    //r = r & something; //
    //g = g & something; //
    //b = b & something; //

    // Desired result:
    //          R      G     B
    // 0xFB26 11111 011001 00110
    rgb = r | g | b;

    printf( "r 0x%x g 0x%x b 0x%x, rgb 0x%08x\n", r, g, b, rgb );
}


//*******************************Ex3*******************************//
void rectangle_perimeter_and_area_calc()
{
 	float length_m = 0;
	float width_m = 0;
	float perimeter_inch = 0;
	float area_inch = 0;
	float inchConvertionValue = 0.0254;

	printf("Input length in meters: ");
	scanf("%f", &length_m);
	printf("Input width in meters: ");
	scanf("%f", &width_m);

	perimeter_inch = ((length_m + width_m) * 2) / inchConvertionValue;
	area_inch = (length_m * width_m) / inchConvertionValue;

	printf("Perimeter of rectangle in inches = %f inches \n", perimeter_inch);
	printf("Area of rectangle in inches = %f inches \n", area_inch);
}


//*******************************Ex4*******************************//
void circle_perimeter_and_area_calc()
{
	float perimeter = 0;
	float area = 0;
	float radius_m = 6;

	perimeter = (2 * M_PI) * radius_m;

	radius_m = pow(radius_m, 2);
	area =  M_PI * radius_m;

	printf("Perimeter of circle is = %f", perimeter);
	printf("Area of circle is = %f", area);
}


//*******************************Ex5*******************************//
void factorail_calc(int number)
{
	int fact = 1;

	int i;
	for (i = 1; i <= number; i++)
	{
		fact = fact * i;
	}

	printf("Factorial of number 10 is = %i ", fact);
}



//*******************************Ex6*******************************//
void numbers_calc()
{
	int result = 0;
	int numbersArray[500];
	int numberPosition = 0;
	int numbersQuantity = 0;
	int userDivider = 0;

	printf("Input divider: ");
	scanf("%i", &userDivider);

	int number;
	for (number = 1; number <= 500; number++)
	{
		result = number % userDivider;

		if (result == 0)
		{
			numbersArray[numberPosition++] = number;
			numbersQuantity++;
		}
	}

	int i = 0;
	while(i < numbersQuantity)
	{
		printf("%i \n ", numbersArray[i]);
		i++;
	}
}
