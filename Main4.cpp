//#pragma warning(disable:4996)
#include <stdio.h>
void SumInteger(int num)
{
  int sum = 0;
  for (int i = 1; i <= num; ++i)
    sum = sum + i;
  printf("sum = %d\n", sum);
}
int main()
{
  int n = 0;
  scanf("%d", &n);
  printf("int :  %d\n", n);
  SumInteger(3);
  SumInteger(10);
  SumInteger(100);
}

//#include <stdio.h>
//void SumInteger()
//{
//  int sum = 0;
//  for (int i = 1; i <= 10; ++i)
//    sum = sum + i;
//  printf("sum = %d\n", sum);
//}
//int main()
//{
//  SumInteger();
//  SumInteger();
//  SumInteger();
//}

//#include <stdio.h>
//int main()
//{
//  int sum = 0;
//  for (int i = 1; i <= 10; ++i)
//  {
//    sum = sum + i;
//  }
//  printf("sum = %d\n", sum);
//}

//#include <stdio.h>
//int main()
//{
//  for (int i = 1; i <= 10; i = i + 1)
//  {
//    if (i % 2 == 0)
//      printf("even : %d\n", i);
//    if (i % 2 == 1)
//      printf("odd : %d\n", i);
//  }
//
//  int sum = 0;
//  for (int i = 1; i <= 3; ++i)
//  {
//    sum = sum + i;
//  }
//  printf("sum = %d\n", sum);
//}

//#include <stdio.h>
//int main()
//{
//  for (int i = 1; i <= 10; i = i + 1)
//  {
//    if (i % 2 == 0)
//      printf("even : %d\n", i);
//    if (i % 2 == 1)
//      printf("odd : %d\n", i);
//  }
//
//  int sum = 0;
//  for (int i = 1; i <= 3; ++i)
//  {
//    printf("sum = %d\n", sum);
//    sum = sum + i;
//  }
//}

//#include <stdio.h>
//int main()
//{
//  for (int i = 1; i <= 10; i = i + 1)
//  {
//    if (i % 2 == 0)
//      printf("even : %d\n", i);
//    if (i % 2 == 1)
//      printf("odd : %d\n", i);
//  }
//
//  int sum = 0;
//  printf("sum = %d\n", sum);
//  sum = sum + 1;
//  printf("sum = %d\n", sum);
//  sum = sum + 2;
//  printf("sum = %d\n", sum);
//  sum = sum + 3;
//  printf("sum = %d\n", sum);
//}

//#include <stdio.h>
//int main()
//{
//  for (int i = 1; i <= 10; i = i + 1)
//  {
//    if (i % 2 == 0)
//      printf("even : %d\n", i);
//    if (i % 2 == 1)
//      printf("odd : %d\n", i);
//  }
//}

//#include <stdio.h>
//int main()
//{
//  for (int i = 1; i <= 10; i = i + 1)
//  {
//    if (i % 2 == 0)
//      printf("even : %d\n", i);
//    else
//      printf("odd : %d\n", i);
//  }
//}

//#include <stdio.h>
//int main()
//{
//  for (int i = 1; i <= 10; i = i + 1)
//  {
//    if(i%2 == 0)
//      printf("%d\n", i);
//  }
//}

//#include <stdio.h>
//int main()
//{
//  for (int i = 2; i <= 10; i = i + 2)
//  {
//    printf("%d\n", i);
//  }
//}

//#include <stdio.h>
//int main()
//{
//  for (int i = 1; i <= 10; ++i)
//    printf("%d\n", i);
//}

//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//  int run = 1;
//  while (run)
//  {
//    printf("문자 입력(종료:q) : ");
//    char c = _getch();
//    if (c == 'q')
//      run = 0;
//    else
//      printf("Hello : %c\n", c);
//  }
//}

//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//  while (1)
//  {
//    printf("문자 입력(종료:q) : ");
//    char c = _getch();
//    if (c == 'q')
//      break;
//    printf("Hello : %c\n", c);
//  }
//}

//#include <stdio.h>
//int main()
//{
//  int i = 0;
//  while ( i < 5 )
//  {
//    printf("[%d] : %d\n", i, i + 1);
//    ++i;
//  }
//}

//#include <stdio.h>
//int main()
//{
//  for (int i = 0; i <= 4; ++i)
//  {
//    printf("[%d] : %d\n", i, i + 1);
//  }
//}

//#include <stdio.h>
//int main()
//{
//  for (int i = 0; i < 5; ++i)
//  {
//    printf("[%d] : %d\n", i, i+1);
//  }
//}

//#include <stdio.h>
//int main()
//{
//  for (int i = 1; i <= 5; ++i)
//  {
//    printf("Hello : %d\n", i);
//  }
//}

//#include <stdio.h>
//int main()
//{
//  for (int i = 1; i <= 5; ++i)
//  {
//    printf("Hello\n");
//  }
//}

//#include <stdio.h>
//int main()
//{
//  printf("Hello\n");
//  printf("Hello\n");
//  printf("Hello\n");
//  printf("Hello\n");
//  printf("Hello\n");
//}

//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//  switch (_getch() - '0')
//  {
//  case 1:
//    printf("Hello : %d\n", 1);
//    break;
//  case 2:
//    printf("Hello : %d\n", 2);
//    break;
//  case 3:
//    printf("Hello : %d\n", 3);
//    break;
//  default:
//    printf("default\n");
//    break;
//  }
//}

//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//  switch (_getch() - '0')
//  {
//  case 1:
//    printf("Hello : %d\n", 1);
//    break;
//  case 2:
//    printf("Hello : %d\n", 2);
//    break;
//  case 3:
//    printf("Hello : %d\n", 3);
//    break;
//  default:
//    printf("default\n");
//    break;
//  }
//}

//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//  switch ('1' - '0')
//  {
//  case 1:
//    printf("Hello : %d\n", 1);
//    break;
//  case 2:
//    printf("Hello : %d\n", 2);
//    break;
//  case 3:
//    printf("Hello : %d\n", 3);
//    break;
//  default:
//    printf("default\n");
//    break;
//  }
//}

//#include <stdio.h>
//int main()
//{
//  switch (5)
//  {
//  case 1:
//    printf("Hello : %d\n", 1);
//    break;
//  case 2:
//    printf("Hello : %d\n", 2);
//    break;
//  case 3:
//    printf("Hello : %d\n", 3);
//    break;
//  default:
//    printf("default\n");
//    break;
//  }
//}

//#include <stdio.h>
//int main()
//{
//  switch (2)
//  {
//  case 1:
//    printf("Hello : %d\n", 1);
//    break;
//  case 2:
//    printf("Hello : %d\n", 2);
//    break;
//  case 3:
//    printf("Hello : %d\n", 3);
//    break;
//  }
//}

//#include <stdio.h>
//int main()
//{
//  switch (1)
//  {
//  case 1:
//    printf("Hello : %d\n", 1);
//    break;
//  }
//}

//#include <stdio.h>
//int main()
//{
//  int a = 10;
//  int b = 20;
//  if (a < b)
//    printf("Hello True\n");
//  else
//    printf("Hello False\n");
//}

//#include <stdio.h>
//int main()
//{
//  int a = 10;
//  int b = 20;
//  if (a < b)
//  {
//    printf("Hello True\n");
//  }
//  else
//  {
//    printf("Hello False\n");
//  }
//}


//#include <stdio.h>
//int main()
//{
//  int a = 10;
//  int b = 5;
//  if ( a < b )
//  {
//    printf("Hello True\n");
//  }
//  if ( a >= b )
//  {
//    printf("Hello False\n");
//  }
//}

//#include <stdio.h>
//int main()
//{
//  if (1)
//  {
//    printf("Hello True\n");
//  }
//  else
//  {
//    printf("Hello False\n");
//  }
//}

//#include <stdio.h>
//int main()
//{
//  if (1)
//  {
//    printf("Hello True\n");
//  }
//  if (0)
//  {
//    printf("Hello False\n");
//  }
//}

//#include <stdio.h>
//int main()
//{
//  if (1)
//  {
//    printf("Hello True\n");
//  }
//}

//#include <stdio.h>
//int main()
//{
//  char n = 10;
//
//  printf("%p , %d\n", &n, n);
//  printf("%p , %d\n", &n+1, n+1);
//}

//#include <stdio.h>
//int main()
//{
//  int n = 10;
//
//  printf("%p , %d\n", &n, n);
//}

//#include <stdio.h>
//int main()
//{
//  char c = 10;
//  short s = 10;
//  int n = 10;
//  long l = 10;
//  float f = 10;
//  double d = 10;
//
//  printf("%d , %d\n", sizeof(char), sizeof(c));
//  printf("%d , %d\n", sizeof(short), sizeof(s));
//  printf("%d , %d\n", sizeof(int), sizeof(n));
//  printf("%d , %d\n", sizeof(long), sizeof(l));
//  printf("%d , %d\n", sizeof(float), sizeof(f));
//  printf("%d , %d\n", sizeof(double), sizeof(d));
//}

//#include <stdio.h>
//int main()
//{
//  int n = 10;
//
//  printf("%d , %d\n", sizeof(int), sizeof(n));
//}

//#include <stdio.h>
//int main()
//{
//  int n1 = 1;
//  int n2 = 2;
//  printf("%d + %d = %d\n", 1, 2, 3);
//  printf("%d + %d = %d\n", 1, 2, 1 + 2);
//  printf("%d + %d = %d\n", n1, n2, n1+n2);
//  int result = n1 + n2;
//  printf("%d + %d = %d\n", n1, n2, result);
//}

//#include <stdio.h>
//int main()
//{
//  printf("Hello\n");
//}
