#include<stdio.h>
main()
{
	//1. Display the menu
	printf("Pick an number : \n1. 0\n2. 1");
	//2. Read thier number
	int number=0;
	scanf("%d",&number);
	//3. Display based on thier number
	
	switch(number)
	{
		case 1:
			printf("You picked 0.");
			break;
		case 2:
			("You picked 1.");
			break;
		default : printf("since i am not too great with number other than 0 and 1");
		
	}
}
