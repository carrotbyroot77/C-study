#include <stdio.h>
int main()
{

}

//#include <stdio.h>
//
//void PrintNumber(int start, int end, int isOdd);//識情
//int main()
//{
//  PrintNumber(1, 10, 1);
//  PrintNumber(20, 30, 0);
//}
//void PrintNumber(int start, int end, int isOdd)
//{
//  for (int i = start; i <= end; ++i)
//  {
//    int mod = i % 2;
//    if (mod == isOdd)
//      printf("%d ", i);
//  }
//  printf("\n");
//}


//#include <stdio.h>
//
//void PrintNumber(int start, int end, int isOdd);//識情
//int main()
//{
//  PrintNumber(1, 10, 1);
//  PrintNumber(20, 30, 0);
//}
//void PrintNumber(int start, int end, int isOdd)
//{
//  for (int i = start; i <= end; ++i)
//  {
//    int mod = i % 2;
//    if (mod == isOdd)
//      printf("%d ", i);
//  }
//  printf("\n");
//}

//#include <stdio.h>
//
//void PrintEvenNumber(int start, int end, int isOdd)
//{
//  for (int i = start; i <= end; ++i)
//  {
//    int mod = i % 2;
//    if (mod == isOdd)
//      printf("%d ", i);
//  }
//  printf("\n");
//}
//int main()
//{
//  PrintEvenNumber(1, 10, 1);
//  PrintEvenNumber(20, 30, 0);
//}

//#include <stdio.h>
//
//void PrintEvenNumber(int start, int end, int flag)
//{
//  for (int i = start; i <= end; ++i)
//  {
//    if (i % 2 == flag)
//      printf("%d ", i);
//  }
//  printf("\n");
//}
//int main()
//{
//  PrintEvenNumber(1, 10, 1);
//  PrintEvenNumber(20, 30, 0);
//}

//#include <stdio.h>
//
//void PrintEvenNumber(int start, int end)
//{
//  for (int i = start; i <= end; ++i)
//  {
//    if (i % 2 == 0)
//      printf("%d ", i);
//  }
//  printf("\n");
//}
//int main()
//{
//  PrintEvenNumber(1, 10);
//  PrintEvenNumber(20, 30);
//}

//#include <stdio.h>
//
//void PrintEvenNumber()
//{
//  for (int i = 1; i <= 100; ++i)
//  {
//    if (i % 2 == 0)
//      printf("%d ", i);
//  }
//  printf("\n");
//}
//int main()
//{
//  PrintEvenNumber();
//}

//#include <stdio.h>
//
//int main()
//{
//  for (int i = 1; i <= 100; ++i)
//  {
//    if(i%2 == 0)
//      printf("%d ", i);
//  }
//  printf("\n");
//}

//#include <stdio.h>
//
//int main()
//{
//  for (int i = 1; i <= 100; ++i)
//  {
//    printf("%d ", i);
//  }
//  printf("\n");
//}


//#include <stdio.h>
//int TotalInt(int start, int end)
//{
//  int sum = 0;
//  for (int i = start; i <= end; ++i)
//    sum = sum + i;
//
//  return sum;
//}
//int main()
//{
//  printf("sum = %d\n", TotalInt(1, 5));
//}

//#include <stdio.h>
//int TotalInt(int start, int end)
//{
//  int sum = 0;
//  for (int i = start; i <= end; ++i)
//    sum = sum + i;
//
//  return sum;
//}
//int main()
//{
//  int sum = 0;
//  sum = TotalInt(1, 100);
//  printf("sum = %d\n", sum);
//  sum = TotalInt(6, 7);
//  printf("sum = %d\n", sum);
//  sum = TotalInt(200, 300);
//  printf("sum = %d\n", sum);
//}

//#include <stdio.h>
//void PrintTotalInt(int start, int end)
//{
//  int sum = 0;
//  for (int i = start; i <= end; ++i)
//    sum = sum + i;
//
//  printf("sum = %d\n", sum);
//}
//int main()
//{
//  PrintTotalInt(1, 100);
//  PrintTotalInt(6, 7);
//  PrintTotalInt(200, 300);
//}

//#include <stdio.h>
//void PrintTotalInt()
//{
//  int sum = 0;
//  for (int i = 1; i <= 10; ++i)
//    sum = sum + i;
//
//  printf("sum = %d\n", sum);
//}
//int main()
//{
//  PrintTotalInt();
//}

//#include <stdio.h>
//int main()
//{
//  int sum = 0;
//  for (int i = 1; i <= 10; ++i)
//    sum = sum + i;
//
//  printf("sum = %d\n", sum);
//}

//#include <stdio.h>
//int Add(int a, int b)
//{
//  int sum = a + b;
//  return sum;
//}
//int main()
//{
//  int a = 10;
//  int b = 20;
//  int r = 0;
//  r = Add(a, b);
//
//  printf("sum = %d\n", r);
//  printf("sum = %d\n", Add( 1, 3));
//  printf("sum = %d\n", Add( 12, 12));
//}

//#include <stdio.h>
//int Add(int a, int b)
//{
//  int sum = a + b;
//  return sum;
//}
//int main()
//{
//  int a = 10;
//  int b = 20;
//  int r = 0;
//  r = Add(a, b);
//
//  printf("sum = %d\n", r);
//}

//#include <stdio.h>
//void PrintAdd(int a, int b)
//{
//  printf("%d + %d = %d\n", a, b, a + b);
//}
//int main()
//{
//  int a = 10;
//  int b = 20;
//
//  PrintAdd(a, b);
//  PrintAdd(7, 5);
//}

//#include <stdio.h>
//void PrintHello(int size)
//{
//  for (int i = 0; i < size; ++i)
//    printf("Hello: %d\n", i + 1);
//  puts("");
//}
//int main()
//{
//  PrintHello(2);
//  PrintHello(3);
//  PrintHello(10);
//}

//#include <stdio.h>
//void PrintHello(int size)
//{
//  for (int i = 0; i < size; ++i)
//    printf("Hello: %d\n", i + 1);
//  puts("");
//}
//int main()
//{
//  PrintHello(2);
//  PrintHello(3);
//  PrintHello(10);
//}

//#include <stdio.h>
//void PrintHello()
//{
//  for(int i=0; i<5; ++i)
//    printf("Hello: %d\n", i+1);
//  puts("");
//}
//int main()
//{
//  PrintHello();
//  PrintHello();
//  PrintHello();
//}

//#include <stdio.h>
//void PrintHello()
//{
//  printf("Hello\n");
//  printf("Hello\n");
//}
//int main()
//{
//  PrintHello();
//  PrintHello();
//  PrintHello();
//}

//#include <stdio.h>
//void PrintHello()
//{
//  printf("Hello\n");
//  printf("Hello\n");
//}
//int main()
//{
//  PrintHello();
//  PrintHello();
//}



//#include <stdio.h>
//int main()
//{
//  puts("Hello");
//  printf("integer : %d\n", 100);
//  printf("string : %s\n", "Hello!");
//}

//#include <stdio.h>
//int main()
//{
//  printf("Hello\n");
//  printf("integer : %d\n", 100);
//  printf("string : %s\n", "Hello!");
//}

//#include <stdio.h>
//int main()
//{
//  printf("Hello\n");
//  printf("integer : %d\n", 100);
//  printf("string : %s\n", "Hello!");
//}
