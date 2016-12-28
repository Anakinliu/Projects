////求最大公约数
//#include <stdio.h>
//int main(void)
//{
//	int a,b,temp,c;
//	printf("Input two integer numbers:\n");
//	scanf("%d%d", &a, &b);
//	c = a*b;
//	while (b != 0)  /* 余数不为0，继续相除，直到余数为0 */
//	{
//		temp = a%b; a = b;  b = temp;
//	}
//   LCM=（a*b）/GCD；
//	printf("The GCD（最大公约数）largest common divisor:%d\n", a);
//	printf("The LCM（最小公倍数）least common multiple:%d\n", c/a);
//	system("pause");
//}

//	int m,n,t;
//	
//	int aim;
//	printf("input\n");
//	
//	
//	scanf("%d%d",&m, &n);
//	if (m < n)
//	{
//		t = n;
//		n = m;
//		m = t;
//	}
//	aim = n;
//	if (m%n != 0)
//	{
//		for (aim = n / 2; aim >= 2; aim--)
//		{
//			if (n%aim == 0 && m%aim == 0)
//			{
//				break;
//			}
//		}
//
//	}
//	printf("%d/t", aim);
//	system("pause");
//}
