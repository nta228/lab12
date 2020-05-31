#include<stdio.h>
	struct strucintcal
	{	char name[20];
		int numb;
		float amt;
	};
	void main()
	
	{	struct strucintcal xyz;
		void intcal(struct strucintcal);
	printf("\nEnter Customer name: ");
	gets(xyz.name);
	printf("\nEnter Customer number: ");
	scanf("%d", &xyz.numb);
	printf("\nEnter Principal amount: ");
	scanf("%f", &xyz.amt);
	intcal(xyz);
	getch();
}
	void intcal(struct strucintcal abc)
{	float si, rate = 5.5, yrs = 2.5;
	si = (abc.amt *rate* yrs);
	printf("\nThe customer name is %s", abc.name);
	printf("\nThe customer number is %d", abc.numb);
	printf("\nThe amount is %f", abc.amt);
	printf("\nThe interest is %f", si);
	return;
}
