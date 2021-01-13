#include<stdio.h>

double Addition(double dValue1, double dValue2)
{
	double dRet2 = 0.0;

	 printf("ADDITION\n");

	 dRet2 = dValue1 + dValue2;

	 return dRet2;
}

double Substaction(double dValue3, double dValue4)
{
	double dRet3 = 0.0;

	 printf("SUBSTRACTION\n");

	 dRet3 = dValue3 - dValue4;

	 return dRet3;
}

double Multiplication(double dValue5, double dValue6)
{
	double dRet4 = 0.0;

	 printf("MULTIPLICATION\n");

	 dRet4 = dValue5 * dValue6;

	 return dRet4;
}

double Division(double dValue7, double dValue8)
{
	if((dValue7==0)||(dValue8==0))
	{
		return -1;
	}
	else
	{
		double dRet5 = 0.0;

	 	printf("DIVISION\n");

		dRet5 = dValue7 / dValue8;

	 	return dRet5;
	}
}

double Percentage(double dValue9, double dValue10)
{
	double dRet3 = 0.0;

	if((dValue9 == 0)||(dValue10==0)||(dValue9>dValue10))
	{
		return -2;
	}
	else
	{
	 printf("Percentage\n");

	 dRet3 = (dValue9/dValue10)*100 ;

	 return dRet3;
	}

}
double NthMultiple(double dValue7, double dValue8)
{
	
		double dRet5 = 1;
		int i = 0;

	 	printf("DIVISION\n");

		for(i = 1; i<= dValue8; i++)
		{
			dRet5 = dValue7 * dRet5;
		}

	 	return dRet5;
}

double NthRoot(double dValue7, double dValue8)
{
	
		double dRet5 = 1;
		int i = 0;

	 	printf("DIVISION\n");

		for(i = 1; i<= dValue8; i++)
		{
			dRet5 = dValue7 * dRet5;
		}

	 	return dRet5;
}

int main()
{
	double dNo1 = 0.0;
	double dNo2 = 0.0;
	double dRet1 = 0.0;
	int iNum1 = 0;

	printf("Enter your choice\n");
	printf("Addition : 1\n");
	printf("Substaction : 2\n");
	printf("Multiplication : 3\n");
	printf("Division : 4\n");
	printf("Percentage : 5\n");
	printf("NthMultiple : 6\n");
	scanf("%d",&iNum1);

	printf("enter first number/occured Number:\t");
	scanf("%lf",&dNo1);
	printf("Enter second number/total Number\t");
	scanf("%lf",&dNo2);

	if(iNum1 == 1)
	{
		dRet1 = Addition(dNo1,dNo2);
		printf("Addition is %lf",dRet1);
	}
	else if(iNum1 == 2)
	{
		dRet1 = Substaction(dNo1,dNo2);
		printf("Substaction is %lf",dRet1);
	}
	else if(iNum1 == 3)
	{
		dRet1 = Multiplication(dNo1,dNo2);
		printf("Multiplication is %lf",dRet1);
	}
	else if(iNum1 == 4)
	{
		dRet1 = Division(dNo1,dNo2);
		if(dRet1==(-1.000000))
		{
			printf("Numarater or denomerater is zero\n");
		}
		else
		{
			printf("Division is %lf",dRet1);
		}
	}
	else if(iNum1 == 5)
	{
		dRet1 = Percentage(dNo1,dNo2);
		if(dRet1==(-2))
		{
			printf("the value or accured number is zero/ the occured value is more then total value\n");
		}
		else
		{
			printf("occured Percentage is %lf",dRet1);
		}
	}
	else if(iNum1 == 6)
	{
		dRet1 = NthMultiple(dNo1,dNo2);
		printf("NthMultiple is %lf",dRet1);
	}
	else
	{
		printf("Invalid Input\n");
	}

	return 0;
}