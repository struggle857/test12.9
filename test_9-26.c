#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<windows.h>
#include<stdio.h>
//int main()
//{
	//printf("hello\n");
	//printf("%d\n", sizeof(char));//1
	//printf("%d\n", sizeof(long));

	//return 0;
//}
//int main()
//{
	//计算2个数的和
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//输入数据-使用输入函数
	//scanf("%d%d", &num1, &num2);//取地址符号&
	//sum=num1+num2;
	//printf("sum=%d\n",sum);
	//return 0;

	//const修饰的常变量
	//const int num = 10;
	//printf("%d/n",num );
	//num = 8;
	//printf("%d/n", num);
	// C2166.cpp
	 //const-常属性


        //枚举常量
        //枚举--列举
      
//enum Sex



//{
//	MALE,
//	FEMALE,
//	SECRET,

	//#define MAX 10
	//define定义的标识符常量



//};
//int main()
//{
//	printf("%d/n", MALE);
//	printf("%d/n", FEMALE);
//	printf("%d/n", SECRET);
//	return 0;
//
//}
//int main()
//{
	//char arr1[] = "abc";
	//char arr2[]= { 'a', 'b', 'c',0 };\0字符串结束标志
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	 //数字在计算机存储的时候，存储的是2进制
	//return 0;
	//ASCII表、\0-0,
	//strlen-string length-计算字符的长度     从而可以打印出printf("%d\n",strlen(arr1));




//}
/*不能接受嵌套
int main()
{//转义字符
	printf("c:\test\32\test.c");水平制表符-\t
	printf("(are you ok \? \?)\n");
	printf("(are you ok \\t)\n");如果要强打那么就要加\这样才不会被转义
	printf("%d\n",strlen("c:\test\32\test.c"));


	
	return 0;
int main ()*/

//选择语句
/*int main()
{
	int input = 0;
	printf("加入赣南科技学院\n");
	printf("你要好好学习吗\?(1\0)>: ");
	scanf("%d", &input);
	if (input == 1)
	  printf("好offer\n");
	else
	  printf("回家种田\n");
	return 0;

}*/

//循环语句while循环
//int main()
//{
//	int line = 0;
//	printf("加入赣南科技学院\n");
//
//	while (line < 10000)
//	{
//		printf("敲一行代码:%d\n", line);
//		line++;
//	}
//	if (line >= 10000)
//		printf("一份好offer\n");
//	return 0;
//
//} 

//函数Add(intx,inty)
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//自定义函数  库函数

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*printf("%d\n", arr[5]);*/
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	    int a = 5 % 2;
//		printf("%d\n", a);取模
//		return 0;


//int main()
//{
//	//移（2进制）位操作符
//	//<<左移操作符
//	//>>右移操作符
//	int a = 1;
//	int b = a << 2;
//	//b = a + 1;
//	printf("%d/n", b);
//	printf("%d/n", a);
//}
//二进制：1 1 1 1  =1*2^3

/*int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	//011
	//101
	printf("%d\n",c);
	return 0;
	//&按位与   相同1不同为0相同为1
	//^按位异或    有相同就行
	//|按位或   有1 则为1否则为0

}*/


//=赋值 ==判断相等
//c语言我们判断真假0-假  非0-真

//int main ()
//{
//
//	//int a = 10;
//	//sizeof计算的变量/类型所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//注意int得用（）
//	return 0;
//}



//分支语句和循环语句
//c语言是一门结构化的程序设计语言
//1.顺序结构
//2.选择结构
//3.循环结构

//if语句1
//else  if语句2
//else语句3

//int main()

	/*int age = 9;
	if (age < 18)
	{
		printf("未成年\n");
		printf("不能谈恋爱\n");
	}
	
	else
	{
		if (age > 18 && age <= 28)
			printf("青年\n");

	else if (age >= 28 && age < 50)
	printf("壮年\n");
	else if (age >= 50 && age < 100)
	printf("老年\n");
	else
	printf("老不死\n");
	}*/
	
	//else 
	//	printf("成年\n");
	///*	if ("age<18");
	//	printf(" 未成年\n");*/


	/*int a = 0;
	int b = 2;
	if (a == 0)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");*/
	//else与最近的未匹配的if匹配    也可以直接给大括号从而直接确定匹配
	/*int num = 4;
	if (num == 5)
	{return (1);  }

	
*/

//=赋值 ==判断相等
	//作业列出所有的奇数且在100以下

	/*int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d", i);
		i++;
	}*/
	
	
	/*int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d", i);
		i++;
	}
	return 0;*/



//int main()
//{
     /*int day =0;
	 scanf("%d",&day);
	 if(1 == day)
	     printf("星期1\n");
    if(2 == day)
	     printf("星期2\n");
    if(3 == day)
	     printf("星期3\n");
	if(4 == day)
	     printf("星期4\n");
	if(5 == day)
		 printf("星期5\n");
    if(6 == day)
	     printf("星期6\n");
    if(7 == day)
	     printf("星期7\n");
		 return 0;*/
	//由于这样太麻烦所以改用switch语句
	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}*/
	//switch 无整形语句、搭配break才是完美的整形语句

	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			printf("工作日\n");
				break;
			case 6:
			case 7:
			printf("休息日\n");
				break;
				
	}*/
	
		   //case 7:
		   //printf("休息日\n");
			 //  break;int day = 0;
	//int m = 1;
   //scanf("%d", &day);
   //switch (day)
   //{
   //case 1:
	 //  if (m == 1)
		//   printf("hehe\n");
		//   case 2:
		//   case 3:
		 //  case 4:
		 //  case 5:
		 //  printf("工作日\n");
			//   break;
		 //  case 6:
		  // default:
		//	 printf("输入错误\n");
		//	 break;
   //}


	
	
	
	
//	return 0;

//循环语句
//while 循环语句
	/*int i = 1;

	while(i<=10)
	{
		if (i == 5)
			break;
		printf("%d", i);
		i++;
	}
	return 0;*/
 



//分支循环语句（2）
	/*int ch = getchar();

	putchar(ch);
	printf("%c\n", ch);
	return 0;*/
	/*int ch = 0;
	while ((ch=getchar() !=EOF)
   {
		putchar(ch);

	}



	return 0;*/ 
	//EOF - end  of file 文件结束标志*（空文件）
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0}; 
	//printf("请输入密码:>");
	//scanf("%s", password);//输入密码，并存放在password中
	////缓冲区还剩余一个"\n"
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}

	//printf("请确认(Y/N):>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("确认成功\n");

	//}
	//else
	//{
	//	printf("放弃确认\n");
	//}
	//	
	//	return 0;
	//	//输入函数password,scanf输入缓冲区123456\n
 
//int main ()
//{int ch = 0;
//while ((ch = getchar()) != EOF)
//{
//	if (ch < '0' || ch>'9')
//		continue;
//	putchar(ch);
//
//
//}
//return 0;
//	}

//For循环
// int初始化 while调整    i++调整   （ 表达1 表达2  表达3 ）

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}


//复习内容



//int main()
//{
//	int i = 0;
//    for (i = 0; i < 10; i++)
//{   
//		if (i == 5)
//		printf("hehe\n");
//		//printf("haha\n");
//
//	}
//	return 0;
//}

//for语句 的循环的控制变量的取值采用"前闭后开区间"写法

//int main()变种1
//{
//	for (;;);陷入循环for语句
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	{
//		for (i = 0; i < 10; i++)
//		{
//			for (j = 0; j < 10; j++)
//				printf("hehe\n");
//		}
//	}
//	return 0;
//}从而能够达到一百个呵呵若将i=0去除那么将只能得到10个呵呵因为j达到了自己的独立性
 
//变种2
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0;  i++, k++)k被赋值被陷入死循环结果为非0则陷入死循环
//		k++;
//		return 0;
//}

//do-while循环
//int main()
//{
//	int i = 1;
//	do {
//		
//		
//		printf("%d", i);
//		i++
//
//	} while (i <= 10);
//		return 0;
//}
// 
// 
// 
// 练习1.
//int main()
//{ 
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//
//	scanf("%d", &n);
//	for(i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n",ret);
//	return 0;
//}用for语句求n的阶乘


//练习2.
//int main()
//{
//  int y= 0 ;	
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &y);
//	for(n=1;n<=y;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//
//
//	}
//	printf("sum= %d\n", sum);
//		return 0;
//}用for语句求n的阶乘的总和


//练习3.折半查找算法，二分查找算法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数由于为int所以它sizeof只需要减1
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//
//		int mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("没有找到\n");
//		}
//	}
//	return 0;
//}


//练习4.
//int main()
//{
//	char arr1[] = "welcome to china!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//不能减1因为这是char a b c为四字符4-2=2， 0 1 2而你需要2
//	int right = strlen(arr1) - 1;//为另一种写法
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s/n", arr2);
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls-清空函数
//		left++;
//		right--;
//	}
//	return 0;
//}



//练习5.
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "阮某是帅b") == 0)//strcmp用来比较两个字符串相等而==不能
//		{
//			printf("登入成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//
//		}
//	}
//		if (i == 3)
//			printf("三次密码均错误，退出程序\n");
//		return 0;
//	}


//将最大值进行排列，需要使用临时变量
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b ,&c);//213需要用空格隔开，不开空格会默认成一个数
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//
//	}
//	printf("%d %d %d\n", a, b, c);
//		return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//
//	}
//	return 0;
//
//}



//求最大公约数
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int ret = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n==0)
//	{
//		ret = m % n;
//		m = n;
//		n = ret;
//
//
//	}
//	printf("%d\n", n);
//	return 0;
//
//}

//打印闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//		//判断润年的两个标准
//		//能够被4整除&&（并且）不能被100整除
//		//2.能够被400整除
//		if (year%4 == 0 && year%100!= 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if (year%400 == 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	
//	}
//	printf("\ncount=%3d\n   ", count);
//		return 0;
//}


//方法2
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year%4==0&&year%100!=0))||(year%400==0))
//		{
//			printf("%d\n", year);
//			count++;
//		};
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}



//打印素数方法1.

	//int count = 0;

	//for (i = 100; i <= 200; i++)
	//{
	//	//判断i是否为素数
	//	//素数的判断规则
	//	//1.试除法
	//   //2->i-1
	//	int j = 0;

	//	for (j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			break;

	//		}

	//	}
	//	if (i == j)
	//	{
	//		printf("%d\n", i);
	//		count++;

	//	}
	//	printf("\ncount=%d\n");
	//	
	//}
	//return 0;


//方法2.a和b至少有一个<=i开平方的数
//#include<math.h>
//	int main()
//	{
//		int i = 0;
//		int count = 0;
//
//		for (i = 100; i <= 200; i++)
//		{
//			//判断i是否为素数
//			//素数的判断规则
//			//1.试除法
//		   //2->i-1
//			int j = 0;
//
//			for (j = 2; j <= sqrt(i); j++)//sqrt是库函数开平方
//			{
//				if (i % j == 0)
//				{
//					break;
//
//				}
//
//			}
//			if (j>sqrt(i))
//			{
//				count++;
//				printf("%d\n", i);
//				
//
//			}
//			printf("\ncount=%d\n",count);
//
//		}
//		return 0;
//
//	}


//辗转相除法cotinue跳过下一次的步骤
//计算出现多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		count++;
//		if (i / 10 == 9)
//		count++;
//
//	}
//	printf("count=%d\n",count);
//	return 0;
//}



//分数求和
//1/1-1/2+1/3....
//int main()
//{
//	int i = 0;
//    double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求10个整数中的最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max=arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//
//
//
//	return 0;
//}


//乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//打印9行
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//
//	}
//		printf("\n");//关键步骤换行
//		}
//		
//
//	return 0;
//
//}
//！！！重新写上述练习


//猜数字游戏
//1.电脑会生成一个随机的数字
//2.猜数字
//#include <stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("***************************\n");
//	printf("****   1.paly   0.exit ****\n");
//	printf("***************************\n");
//
//}
//
//
//void game()
//{
//	//1.生成一个随机数字
//	int ret = 0;
//	int guess = 0;
//	
//	//所需要运用的一个能够随机变化的数字
//	 ret = rand()%100+1;
//	 //printf("%d\n", ret);
//	 //2.猜数字
//	 while (1)
//	 {
//		 printf("请猜一个数字\n");
//		 scanf("%d", &guess);
//		 if (guess > ret) {
//			 printf("猜大了\n");
//
//		 }
//		 else if (guess < ret)
//		 {
//			 printf("猜小了\n");
//
//		 }
//		 else
//		 {
//			 printf("恭喜你，猜对了\n");
//			 break;
//		 }
//	 }
//
//}
//
//
//
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//设置一次游戏就行NULL用于指针和对象跟0很像但是0只是用于数值
//	do
//	{
//		menu();
//		printf("请选择>:");
//		
//		scanf("%d", &input);//&符号意思是指这个值要取在这个地方
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏从而实现game函数
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//			
//		}
//	} while (input);//do-while循环是至少循环一次为达到目的或者结束
//
//
//	return 0;
//}




//goto  语句例子能够60s关闭cmd
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	//shotdown -s -t 60
//	//system()-执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在一分钟后关机请输入我是猪取消关机\n请输入");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//----比较两个字符串-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//
//}
















//函数

//int Add(int x, int y)//由于没有add这个函数所以需自己制造此函数
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//
//
//}
//
//
//
//
//int  main()
//{
//	int a = 2;
//	int b = 3;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);//返回到目的地  来源后有\0直接结束   源头数据没有目的地那么长
//	printf("%s\n", arr2);
//	return 0;
//
//}
//strcpy-string copy-字符串拷贝
//strlen-string length-字符串的长度有关
//memset  viod*指针 
//memory-内存set-设置
//cplusplus查找
//c 语言的官方资料cppreference

//int main()
//{
//	char arr[] = "hello word";
//	memset(arr, '*',5);
//	printf("%s\n", arr);
//	return 0;
//
//}



//自定义函数
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//函数的使用
//	
//	int max=get_max(a, b);
//	printf("max=%d\n",max);
//		return 0;
//
//
//}


//写一个函数交换整形的内容
//void swap(int x, int y)//无返回值
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d,b=%d\n", a, b);
//	swap(a, b);
//	//a = b;
//	//tmp = a;
//	//b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//
//}不能完成我们所需要的任务
//int *pa=a;pa为指针变量。、*pa=20为解引用操作    
//&取地址符号

//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//
//}
//当实参传给形参时，形参其实是实参的拷贝，对形参的修改是不影响实参的



//判断是否为素数，是素数为1不是则为2.
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2;j<n;j++)
//	{
//		if (n % j == 0)
//			return 0;
//
//	}
//	return 1;//return 1;放在外面由于要经过循环所以j++
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i)==1)
//			printf("%d\n", i);
//	}
//		return 0;
//}



//写一个函数判断为闰年
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	
//		return 1;
//	else
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%5d", year);
//		}
//		
//	}
//	return 0;
//}


//实现有序二分查找
//int binary_search(int arr[],int k,int sz)//本质上arr是一个指针
//{
//	//算法的实现
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)//一定要等于
//	{
//		int mid = (right + left) / 2;//这句话不能放外面，放外面只循环一次
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//	        right = mid - 1;
//
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//int main()
//{
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回，这个数的下标，找不到返回-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


//写一个函数，每一次使用这个函数num都会加1.
//void ADD(int* p)
//{
//	(*p)++;
//}
//
//
//
//
//
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	return 0;
//}



//函数的嵌套调用和链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));printf打印其字符的个数
//	return 0;
//}
//函数的声明
//在视图中的解决方案中在源文件中***.c,在头文件中***.h
//1.函数声明放在头文件.h中      2.函数的定义放在.c
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//
//}



//函数的递归
/*int main()
{
	printf("hehe\n");
	main();
		return 0;
}*///stack overflow栈溢出
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d",n % 10);
//}
//
//
//
//int main()
//{
//	unsigned int num = 0;//如果你定义了unsigned只能取正值不能取负值
//	scanf("%d", &num);
//	print(num);
//	return 0;
//
//}

 
//求字符号长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "haha";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//2.只能使用已有变量
//int my_strlen(char* str)
//{
//	if (*str!='\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	    return 0;
//}
//
//
//int main()
//{
//	char arr[] = "haha";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int y = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &y);
//	for(n=1;n<=y;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//
//
//	}
//	printf("sum= %d\n", sum);
//		return 0;
//}


//迭代 求n的阶乘
//int Fac1(int n)
//{
//
//	int i = 0;
//	int ret = 1;
//
//	for (i=1;i<=n;i++)
//	{
//		ret = i*ret ;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return n = 1;
//
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//
//}Fac2所运用的是递归


//斐波那契（Fib）数列：前两个数之和等于第三个数
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 2) + Fib(n - 1);
//	}
//}效率不高1 1 2 3 5 8
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{    
//	int n = 0;
//	int ret = 0; 
//	scanf("%d", &n);
//	ret = Fib(n);
//    printf("ret=%d\n", ret);
//	return 0;
//}


//汉诺塔问题
//青蛙跳台阶



//数组的创建
//int main()
//{
	//创建一个数组-存放整形-10个
	//int arr2[10] = { 1,2,3 };//不完全初始化，剩下元素默认初始化为0
	//char arr1[5];//strlen求字符串的长度-‘\0’之前的字符个数
	//1.strlen和sizeof没有什么关联
	//2.strlen是求字符串长度的-只能针对字符串求长度-库函数-使用得引头文件
	//3.sizeof计算变量,数组.类型的大小-单位只能是字节
	/*char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));由于不确定\0在其”abc“的位置，所以是随机值
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));*/
	

	/*int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%p\n", &arr[i]);%p打印地址符号
	}
	//一维数组是连续存放的
	return 0;
}*/


//int main()
//{
//	//二维数组
//	int arr[3][4] = { { 1,2,3}, { 4,5 }
//	};//第一个为行第二个为列；
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("*arr[%d][%d]=%p%p\n",i,j, &arr[i][j]);//行由i决定j由列决定
//		}
//		printf("\n");
//	}//二维数组也是连续存放的
//	return 0;
//}
 


//设计一个冒泡函数
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
// int flag = 1;第一趟检测是否有序
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//              int flag = 0;
//			}
// if(flag==1)
// {
// break;//break只能用于循环和switch语句中这个break用于for
// }
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//对arr进行冒泡排序，排成升序
//	int  sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//		return 0;
//
//}


//1.sizeof（数组名），计算整个数组的大小sizeof内部放一个数组名，数组名表示整个数组sizeof（arr）
//2.&数组名，取出的是数组的地址。&数组名，数组名表示整个数组。&arr+1所加的是整个数组1
//除（1）（2）两种情况之外，所有的数组名都表示数组首元素的地址。


//#include"game.h"

//void menu()
//{
//	printf("************************\n");
//	printf("*****1.paly  0..exit****\n");
//	printf("************************\n");
//}//
//void game()
//{
//	char ret = 0;
//	//数组-存放走出的棋盘信息
//	char board[ROW][COL] = { 0 };//全部空格
//	//初始化棋盘
//	InitBoard(board, ROW, COL);
//	//打印棋盘
//	DisplayBoard(board,ROW, COL);
//	//下棋
//	while (1)
//	{
//		//玩家下棋
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//判断玩家是否输赢
//		ret = IsWin(board,ROW,COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//电脑下棋
//		ComputerMove(board, ROW, COL);
//		Displayboard(board, ROW, COL);
//		//判断电脑是否输赢
//		ret = IsWin(board,ROW,COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		if (ret == '*')
//		{
//			printf("玩家赢\n");
//		}
//		else if (ret == '#')
//		{
//			printf("电脑赢\n");
//		}
//		else
//		{
//			printf("平局\n");
//		}
//	}
//		
//			
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,请重新选择!\n");
//			break;
//}
//	} while (input);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
 



//操作符
//double a=5/2=2.5
//移位操作符：哪边丢弃，对边补原符号位
//>>右移操作符
//<<左移操作符
//100000000000000000000000001原码
//111111111111111111111111110反码
//111111111111111111111111111补码；反码加1
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//&按位与相同1为1
//|按位或有1就行
//^按位异或


//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	//计算二进制有多少的一
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num/2;
//}*/
//	//while语句用这样的-1不行
//	/*for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & i))
//		{
//			count++;
//		}用按位与相同是有的
//	}*/
//	printf("%d\n",count);
//	return 0;
//}


//赋值操作符	
//复合操作符例如写x=10，x=x+100与x+=100效果是相等的
//单目操作符
//1.双目操作符例如：a+ b2.单目操作符例如！a -5
//取地址操作符&c
//解引用操作符
//int a = 10;
//int* p = &a;
//*p = 20;

//int main()
//{
//	//sizeof计算变量所占内存所占空间大小，单位是字节
//	int a = 10;
//	char c = ' r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(*p));//4
//	printf("%d\n", sizeof(arr));//40
//	return 0;
//}


//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//不参与预算只能是短整型2个字节
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//		printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	//~按（2进制）位取反
//	//00000000000000000000000000
//	//11111111111111111111111111- 补码
//	//11111111111111111111111110- 反码
//	//00000000000000000000000001- 原码
//	
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//相当于++后的值，前置++，先++，后使用
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制转换类型将3.14转入整形中
//	return 0;
//}

//逻辑语句
//int  main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a || b;//两个同时为假才能为假
//	printf("%d\n", c);
//	return  0;
//}

//i = a++ && ++b && d++若其中有为假则不进行继续计算a++先使用a
//i = a++ || ++b || d++若其中a为真则不进行计算
//int main()
//{
//	//三目操作符
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//	
//		b =-3;
//	b = (a > 5 ? 3: -3);
//	printf("%d\n", b);
//	return 0;
//}

//逗号表达式：用逗号隔开整个表达式用最后结果
//下标引用操作符
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;下标
//	1 = 2;
//	return 0;
//}

//函数调用操作符：调用函数的时候的（）就是函数调用操作符
// 类型创建对象
//创建一个结构类型-struct Stu
//int main()
//{
	//char a = 3;
	////00000000000000000000001
	//char b = 127;
	//
	////8个比特位01111111
	//char c = a + b;
	////10000010—c溢出加一
	////11111111111111110000010-补码结果是原码
	//printf("%d\n", c);
	//return 0;
//sizeof（c)就一个字节但是sizeof（+c，—c）为似乎和字节sizeof（！c）为一个字节

//}

//算术转换
//操作符的属性
//1.操作符具有优先级2.操作符具有结合性L——r
//int fun()
//{
//	static int count = 1;
//	count++
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	return 0;
//}问题函数每一次调用的fun值不同2，3，4，~~~~~~~···

//int main()
//{
	/*printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));*/
	//d都是四个字节

	//int* p;//局部变量不初始化则为随机值
	//*p = 20;
	//返回临时变量是无意义的
	//int a = 10;
	//int* pa = &a;
	//*pa = 10;
	//pa = NULL ;
	//*pa = 20;
	//if(if!=NULL)
	//

	//return 0;
//}

//指针运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);
//		p = p + 1;
//	}
//	return 0;
//}

//
//int my_strlen(char*str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen-求字符长度
//	//递归-模拟实现了strlen-计数器的方式1，递归的方式2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//允许最后一个指针与第一个之前的指针进行比较
//1.arr-&数组名-数组名不是首元素的地址-数组名表示整个数组-&数组名 取出的是整个数组的地址
//2.sizeof（arr）此时此刻的数组名表示整个数组sizeof（数组名）计算整个数组的大小
//int main()
//{ 
//	int arr[10] = { 0 };
//	printf("%p\n", arr); // 地址 - 首元素的
//    printf("%p\n", arr + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);//相减为40
//	return 0;
//}



//int main()
//{   
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p====%p\n", p + i, &arr[i]);数组可以通过指针来访问
//	}
//	return 0;
//
//}


	//int a = 10;
	//int* p = &a;
	//int**ppa = *pa;//此刻**ppa就是二级指针
	//int*** pppa = &ppa;
	
	//return 0;

//指针数组--数组- 存放指针的数组
//数组指针-指针

//整型数组--存放整形
//字符数组--存放字符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr2[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", *(arr2[i]));
//	}
//	return 0;
//}

//关于函数调用：函数可以嵌套调用但是不能嵌套定义
//函数设计应该高内聚低耦合（尽可能独立）
//尽可能少用全局变量
//viod可以不需要返回值，实现main可以任意位置
//地址是由低到高的


//要求实现函数Init（）初始化数组全为0
//实现printf（）打印数组的每个元素
//实现reverse（）函数完成数组元素的位置。
//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr [left] = arr [right];
//		arr [right] =  tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//1.初始化为0
//	//2.先进性逆序reverse
//	Print(arr, sz);//打印,注意函数大小写
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}


//交换数组将数组A的内容跟数组B的内容进行交换（数组大小相等）
//void Print1(int arr1[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//}
//void Print2(int arr2[], int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d", arr2[j]);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 2,4,6,8,0 };
//	int tmp[5] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	Print1(arr1, sz);
//	Print2(arr2, sz);
//	return 0;
//}


//short访问两个字节
//char *pc当*pc去操作时只能有一个字节
//无符号数sizeof可能大于等于-1的无符号数特别大10000000000000001

//统计二进制的个数
#include<stdlib.h>
//解法1.int count_bit_one(unsigned int n)//默认为无符号数
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//解法2.int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i & 1) == 1)
//			count++;
//	}
//	return count;
//}//有一的时候能够跟显示
//解法3.int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//写一个求a的二进制（补码）表示中有几个1
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}

//求二进制不同位的个数
//两种方法4
//int count_diff_bit(int n,int m)
//{
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = count_diff_bit(m,n);
//	printf("count=%d\n", count);
//	return 0;
//}


//打印二进制的奇数位和偶数位
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//
//	}
//	printf("\n");
//	printf("偶数位:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i) & i);
//
//	}
//	printf("\n");
//}二进制开始是0
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//使用指针打印数组内容  写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//int print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", (*p + i));
//	}
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//递归的题目
//乘法口诀表自己决定行数列数
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return;
//}

//使用递归将abcdef进行逆序
//int  my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr+1);
//		arr[len - 1] = tmp;
//}



//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//写一个递归函数Digit Sum（n），输入一个非负整数，返回组成它的数字之和
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num/10) + (num % 10);
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1729
//	int ret = DigitSum(num);
//	printf("%d", ret);
//	
//	return 0;
//}


//递归实现n的k次方
//double  Pow(int n, int k)
//{
//	if (k < 0)
//		return  (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double  ret = Pow(n,k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;//结构体可以是其他成员
//	char* pc;//对应的是arr  hello bit 
//
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14}, arr};//ch对应hehe
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;

//函数传参时是要压栈的，结构体过大，参数压栈的系统开销比较大，所以会导致性能下降。
//void print1(Stu tmp)
//{
//	printf("name;%s\n", tmp.name);
//	printf("age;%d\n", tmp.age);
//	printf("tele;%s\n", tmp.tele);
//	printf("sex;%s\n", tmp.sex);
//}
//void print2(Stu* ps)
//{
//	printf("name;%s\n", ps->name);
//	printf("age;%d\n", ps->age);
//	printf("tele;%s\n", ps->tele);
//	printf("sex;%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "李四",40,"18579722284","男" };
//		print1(s);
//	print2(&s);
//	return 0;
//}



//关于代码的调式测试
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//}
//	printf("%d\n", sum);
//	return 0;
//
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//i放在arr数组的后面
//	for (i = 0; i <= 12; i++)//栈区由高到低可能会发生越界
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}


//模拟实现strcpy库函数
//void my_strcpy(char *dest,char *str)
//{
//	while (*str != '\0')
//	{
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	*dest = *str;
//}
//优化一.void my_strcpy(char *dest,char *str）
//{
//while (*dest++ = *str++)
//{
//	;
//}
//}当为零时自动结束
//优化二
//#include<assert.h>
//char my_strcpy(char* dest,const char* str)//const保护源头数据
//{
// char *ret=dest;列示访问
//	assert(dest != NULL);
//	assert(str != NULL);
//	while (*dest++ = *str++)
//	{
//		;
//	}
// return ret;
//}
// 优化三
// void my_strcpy(char* dest,const char* str)//const保护源头数据
//{
// 
//	assert(dest != NULL);
//	assert(str != NULL);
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] =  "***************" ;
//	char arr2[] =  "bit" ;
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//关于const作用
//int main()
//{
//	const int num = 10;
//	int n = 100;
//	const int* p = &num;//const放在指针变量✳的左边时，修饰的是*p，也就是说：不能通过p来改变*p（num）的值，
//	
//	p = &n;
//	printf("%d", num);
//	return 0;
//}


//int main()
//{
//	//写一段代码告诉我们当前字节序是什么
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//进阶
//int check_sys()
//{
//	int i = 1;
//	return *(char*)&i;//&取地址符号是关键
//}
//int main()
//{
//	int i = 1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	//由于char为一个字节八个比特位且unsigned无符号0000000000000000011111111
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//#include<Windows.h>
//int main()
//{
//	unsigned int i;当输入-1时补码等于源码从而数值很大
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	//由于无符号数都大于等于0从而陷入死循环
//	sleep(100);
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//-1到-128是最多后又变成127到0
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//unsigned char i = 0;区间只能是0到255.
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//浮点型在内存中的存储
//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//	return 0;
//}

//int main()
//{
//	float* pFloat = (float*)&n;
//	printf("n的值为%d");
//}

//指针详解
//int main()
//{
//	const char* p = "abcdef\0";//常量字符串
//	printf("%s\n", p);
//	return 0;
//
//
//
//}
//segmentation foult 段错误

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcedf";
//	char* p2 = "abcdef";
//	if (*p1 == *p2)//arr1,arr2对应的内存不同，*p1yu*p2首元素的地址相同
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//
//	}
//	return 0;
//}
///指针数组是数组用来存放指针
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	int ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形指针的数组-指针数组
//	cahr* pch[5];//存放字符指针的数组-指针数组
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for(i=0;i<4;i++)
//	{
//		printf("%d", *(arr[i]));
//
//	}
//	return 0;
//}



//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//p是整形指针- 指向整形的指针-可以存放整形的地址
//	char* pc = NULL;//pc是字符指针- 指向字符的指针- 可以存放字符的地址
//	//arr指首元素的地址
//	//&arr[0]指首元素的地址			
//	//&arr指整个元素的地址				
//					//数组指针——存放数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址存起来（这其中的【p就是指针）
//	return 0;
//}

//int main()
//{
//	/*char *arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char* (*pa)[10] = &arr;
//	printf("%d", *(*pa));*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//
//	
//	return 0;
//}
// 
// 
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//也可以这样写
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", (*(p + i))[j]);
//			//printf("%d", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//    print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//去掉名字就是类型void(*)()函数指针类型—0就是强制将其转换为指针类型一个函数的地址
//《c陷阱与缺陷》(*(void（*）（））此类型代码

//char* my_strcpy(char* dest, const char* src);
//1.写一个函数指针pf，能够指向my_strcpy
// char*(*pf)(char*,const char*)
//2.写一个函数指针数组pfArr，能够保存4个my_strcpy
//char*(*prArr[4])(char*,const char*)

//计算机
//void menu()
//{
//	printf("********************\n");
//	printf("**   1.add   2.sub**\n");
//	printf("**   3.mul   4.div**\n");
//	printf("**      0.exit    **\n");
//	printf("********************\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		//scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			//scanf("%d%d", &x, &y);
//			printf("%d\n", ADD(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			//scanf("%d%d", &x, &y);
//			printf("%d\n", SUB(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			//scanf("%d%d", &x, &y);
//			printf("%d\n", MUL(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			//scanf("%d%d", &x, &y);
//			printf("%d\n", DIV(x, y));
//			break;
//		case 0:
//				printf("退出\n");
//					break;
//		default:
//				printf("选择错误\n");
//			
//		}
//	} while (input);
//}若想上方更加简便那么就可以使用回调函数
//void Calc(int(*pr)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pr(x, y));
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div ,Xor};
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		//scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//	//		//scanf("%d%d", &x,&y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//	}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//}


//以冒泡排序延申一序列的知识点

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//多少趟冒泡排序
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序多少对进行冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
////void qsort(void*base,
////	       size_t num,
////	       size_t width,//宽度指一个元素有几个字节
////	       int(*cmp)(const void *e1,const void *e2)
////)
//
//int cmp_int(const void*e1,const void*e2)
//{
//	//比较两个整型值的函数
//	return*(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//
//	}
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	/*if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;*/
//	return((int)(*(float)e1 - *(float)e2));
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f", f[j]);
//	}
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - (struct Stu*)e2)->age);//名字同理但是比较名字就是比较字符串，字符串比较不能用<>=应该用strcmp
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[3]);
//	qsort(s, sz, sizeof(s[3]), cmp_stu_by_age);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		
//	}
//}
////实现bubble函数的程序员，他是否知道未来排序的数据类型——不知道
////那程序员也不知道，待排序的两个元素的类型
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//
//	}
//}
//void bubble_sort(void* base, int sz, int width，int(*cmp)(void* e1, void* e2)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j == 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width > 0)
//			{
//				//交换
//				swap((char*)base+j*width,(char*)base+(j+1)*width,width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int));
//			//还需打印
//}
//void test5()
//{
//	int struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wnagwu",10} };
//	bubble_sort(s, sz, sizeof(s[0]),cmp_stu_by_age);
//}
//int main()
//{
//	test4();//改造冒泡函数能够任意类型的指针
//	//test2();
//	//test1();
//	//struct Stu s[3]= { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	//float f[] = { 9.0,8.0,7.0,6.0,5.0,4,0 };
//	
//
//	//bubble_sort(arr, sz);
//	
//	return 0;
//}
////qsort的四个参数
////第一个参数：待排序数组的地址
////第二个参数：待排序数组的个数
////第三个参数：待排序列中每个元素个数中字节的大小
////第四个参数：是函数指针，比较连个元素的所用函数的地址—这个函数使用者自己实现
////                              函数指针的两个参数是：待比较的两个元素的地址

//以上都是回调函数的例题讲解


//指针的进阶（习题）
//int main()
//{
	//数组名是首元素的地址
	//都没有1.sizeof（数组名）-数组名表示整个数组
	//2.&数组名- 数组名表示整个数组
	//其他的都表示首元素的地址
	//一堆数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n",sizeof(a+0));//4/8-32个比特位是4个字节64个比特位是8个字节
	//printf("%d\n", sizeof(*a));//4—数组名表示首元素的地址，*a就是首元素，sizeof（*a)就是4
	//printf("%d\n", sizeof(a + 1));//4/8第二个元素的大小
	//printf("%d\n", sizeof(a [1]));//第二个元素的大小-4
	//printf("%d\n", sizeof(&a));//4/8？取地址a是数组的地址但是数组的地址也是地址
	//printf("%d\n", sizeof(*&a));//16/&a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是素组的大小单位就是字节
	//printf("%d\n", sizeof(&a + 1));//&a是数组的地址，&a+1虽然地址跳过整个数组，却还是地址，所以是4/8个字节
	//printf("%d\n", sizeof(&a[0]));//4/8
	//printf("%d\n", sizeof(&a[0] + 1));//4/8是第二个元素是的低价值

	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//sizeof计算的是数组的大小，6*1
	//printf("%d\n", sizeof(arr + 0));//4/8arr是首元素的地址+0还是首元素的地址
	//printf("%d\n", sizeof(*arr));//1—arr是首元素的地址，*arr是首元素的地址，首元素的字符大小字节是一个字节。
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0]+1));//4/8 第二个元素的地址


	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr + 0));//随机值
	////printf("%d\n", strlen(*arr));//err’a'对应97，把97当错地址
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1));//随机值-6有差值变化
	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1
	//return 0;
	


//}

//int main()
//{
	//char arr[] = { "abcdef" };
	//printf("%d\n", sizeof(arr));//sizeof(arr)计算的数组的大小，单位是字节：7计算/0
	//printf("%d\n", sizeof(arr + 0));//4/8计算的是地址的大小-arr+0j是首元素 的地址
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8跳过整个数组后的地址，但也是地址
	//printf("%d\n", sizeof(&arr[0]+1));//4/8

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6&arr取的数组的地址-数组指针char（*p）[7]=&arr，
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5区别在于\0就在数组的后面
    
	//char* p =  "abcdef";
	//printf("%d\n", strlen(p));//6但是在sizeof就是p4/8
	//printf("%d\n", strlen(p + 1));//5  在sizeof里面就是4/8
	//printf("%d\n", strlen(*p));//err  在sizeof里面就是1得到就是第一个字符a
	//printf("%d\n", strlen(p[0]));//err  在sizeof里面就是个1
	//printf("%d\n", strlen(&p));//随机值 //4/8
	//printf("%d\n", strlen(&p + 1));//随机值 //4/8
	//printf("%d\n", strlen(&p[0] + 1));//5区别在于\0就在数组的后面//4/8

    //二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48=4*3*4
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16=4*4
	//printf("%d\n", sizeof(a[0]+1));//4也就是说a[0]单独存在才能使第一行为第一行的数组名，数组名此时表示首元素的地址所以就得到第一行第二个的地址
	//printf("%d\n", sizeof(*(a[0]+1)));//4
	//printf("%d\n", sizeof(a+1));//4——a是二维数组的数组名，没有sizeof（a），也没有&（a），所以a是首元素地址
	////而把二维数组当作一维数组时，二维数组的首元素是他的第一行
	//printf("%d\n", sizeof(*(a+1));//16——第二行的地址，地址进行解引用就是数组
	//printf("%d\n", sizeof(&a[0]+1));//4——第二行的地址
	//printf("%d\n", sizeof(*(&a[0]+1));//16
	//printf("%d\n", sizeof((*a));//16——第一行的地址
	//printf("%d\n", sizeof(a[3]));//16——第四行虚拟不需要进行访问


	/*return 0;

}*/

//已知test结构类型的变量大小是20个字节
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x%x", ptr1[-1], *ptr2);//ptr本是00000020但是以小端的形式进去就要以小端的形式出来所以就为02000000
//	return 0;
//}
//小端存储是将低位字节存储到低地址中，从高位字节存储到高地址中而大端储存恰好相反低位字节存储到高地址中，从高位字节储存到低地址中

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),（4，5) };//逗号表达式1，3，5
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//p还是4个但是在】能在a中内存显示%pFF FF FF FC，后-4
//	return 0;
//
//}

//int main()
//{
//	int aa[5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;//在一维数组中*（arr+1）==arr[2]
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
// 
//	char* pa = a;
//	pa++;
//	printf("%s\n", *pa);%s打印字符串根据分析得printf  at
//	return 0;
//
//}

//char*p={"abcde"};就是将第一个元素的首字母a放入在p中

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//cpp值一直发生变化不会再回去从而ER
//	printf("%s\n", *cpp[-2] + 3);//cpp加-2  值不发生改变ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW原理是cpp[-1][-1]=*(*(cpp-1)-1)+1
//	return 0;
//}

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;//+=3可以理解为加3够直接输出
//	
//	printf("%d", % d\n, *pulPtr, *(pulPtr + 3));//6,12
//	
//	return 0;
//}

//void reverse(char *str)
//{
//	int len = strlen(str);
//	char *left = str;
//	char *right = str + len - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		* right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//abcdef--->fedcba
//	gets(arr);//读取一行
//	//逆序函数
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//计算a+aa+aaa+aaaa
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//2/5
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = (ret) * 10 + a;
//		sum += ret;
//
//	}
//	printf("%d", sum);
//	return 0;
//}


//打印“水仙花数”-自幂数
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 10000; i++)
	{
		//1.计算i的位数
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;//意思是如果商不等于零继续进行
		}
		//2.计算i的每一位的n次方之和sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//3.比较i==sum
		if (i == sum)
		{
			printf("%d  \n", i);
		}
	}
	return 0;

}






























 





                    





 








