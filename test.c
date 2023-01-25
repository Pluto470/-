#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



//int main()
//{
//	printf("hello world");
//
//    return 0;
//}
//
//int main()
// {
//	char ch = 'a';
//
// }
//
//
//int main()
//{
//	printf('hell');
//		 
//		return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//	
//	return 0;
//
//
//
//
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//
//
//		return 0;
//}
//
//
//
//
//

//int main()
//{
//	int age = 17;
//	float weight = 15;
//	age = age + 1;
//	weight = weight + 10;
//	printf("%f\n", weight);
//	printf("%d\n", age);
//
//	return 0;
//}




//int main()
//{
//	int arr[10];
//
//	const int n = 10;
//	int b = 20;
//	printf("%d\n", n);
//
//	return 0;
//}


//#define max 1000
//
//int main()
//{
//	int n = max;
//	printf("%d\n", n);
//	return 0;
//}



//int main()
//{
//
//	printf("牛魔酬宾\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n ", sum);
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum =%d ", sum);
//	return 0;
//}


//#define max 1000
//
//int main()
//{
//	int n = max;
//	printf("n = %d\n",n);
//
//	return 0;
//}
//extern int max;
//
//int main()
//{
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	num = 20;
//	printf("num = %d\n", num);
//
//	return 0;
//}
//const int n;
//int main()
//{
//	int n = 10;
//	int arr[n] = { 0 };
//	
//	return 0;
//}
//
//enum sex//枚举常量
//{
//
//	male = 3,//赋初值
//	female,
//	secret,
//};
//
//int main()
//{
//	enum sex s = male;
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello";
//	char arr1[] = "adc";
//	char arr2[] = { 'a','b','c','\0' };//需要\0 不然就是乱码！！！！！
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main()
//{
//
//	//printf("ab\ncd");//转义字符 \n ! ! !
//	printf("%c\n", '\'');
//
//	return 0;
//}
//int main()
//{
//	printf("\a\a\a");
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\130');
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\101');
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入f4:\)\n");
//	printf("选择你的角色（1开始）!:\)");
//	scanf("%d", &input);
//
//	if (input == 1);
//	printf("谭宇桐\n");
//	if (input == 2);
//	printf("李锦煊\n");
//	if (input == 3);
//	printf("曾宇翔\n");
//	if (input == 0);
//	printf("李静源\n");
//		return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("娶付彤彤\n");
//	printf("那要好好学习吗(1/0)？\n");//选择语句 哦耶 可以简单编程了！！！
//	scanf("%d", &a );
//	
//	if (a == 1)
//		printf("大圆满\n");
//	else 
//		printf("一个人孤寡\n"); 
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	while(line<30000)
//	{
//		printf("学习,%d\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("咸鱼翻身\n");
//	}
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;//函数！！！！！！！！！！要会用！！
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = add(num1 , num2);
//	printf("%d\n", sum);
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", !a);//" ! "可以把真改为假 假改为真！！
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n" ,sizeof (arr));//算的是 arr 的数量 单位字节
//	printf("%d\n", sizeof(arr[10]));//算的是 arr[10] 第一个数组的 大小 单位字节
//	int g = sizeof(arr) / sizeof(arr[10]);//算的是 arr[10]里面数组数量
//	printf("%d\n", g);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	// ~ 按位取反！！
//	return 0;
//}

//int main0()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}

//typedef unsigned int u_int;//typedef 类型重命名！！！！！！！！！
//
//int main()
//{
//	u_int num1 = 100;
//	unsigned int num2 = 100;
//	printf("%d\n", num1);
//	printf("%d\n", num2);
//	return 0;
//}

//void test()
//{
//	static int a = 1;//static  修饰局部变量！！！！！
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int max;//extern   全局变量！！！！！！！ 和static 修饰局部变量 冲突！！！！！
//
//int main()
//{
//	printf("%d\n", max);
//	return 0;
//}
//extern int add(int , int);
//
//int main()  
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//#define add(x , y) (x + y)
//
//int main()
//{
//	int sum = add(2, 3);
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n" , & a);
//	int * pa = &a;// * 说明pa 是指针变量 int说明 pa执行的对象是int类型的！！！！！
//	//pa 是用来存放地址的，在c语言中叫做指针变量！！！！！！
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	
//	*pa = 20;//*解引用操作 | *pa就是通过pa里边的地址，找到a
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//
//};
////创建一个书的类型
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct stu s = { "张三" ,20 , 99.5};//结构体的创建和初始化
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量，成员变量
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	return 0;
//}

//int main()
//{
//	printf("好好学习\n");
//	printf("要不要专升本(1/0)\n");
//	int a = 0;
//	scanf("%d", &a);
//	if (a == 0)
//	{
//		printf("ok\n");
//	}
//	else
//	{
//		printf("no\n");
//		printf("g g\n");//加上大括号就能表达两句指令 不然只能一句！！！！！！！！！
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int age = 60;
//
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if (age >= 18 && age <= 26)
//	{
//		printf("青年");
//	}
//	else if (age >= 27 && age <= 60)
//	{
//		printf("中年\n");
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 0)
//	{
//		printf("偶\n");
//	}
//	else
//	{
//		printf("奇数\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		printf("%d ", a);
//		a++;
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d ", a);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)  //switch 括号里面必须是 整形！！！！！！ 
//	{
//	case 1:  // case 里面 常量表达试
//		printf("星期一\n");
//		break;            // 要加break ！！！！！！！！ 不然全都要打出来！！！！！
//	case 2 :
//		printf("星期二\n");
//		break;
//	case 3 :
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (a == 5)
//			break;   // 跳出当前循环！！！！！！！
//		//continue;  // 继续！！！！
//		printf("%d ", a);
//		a++;
//	}
//
//
//	return 0;
//}

//getchar //得到字符！！！！！！
//EOF - end of file - 文件结束标志！！！！ 
//int main()
//{
//	//int ch = getchar();
//	//printf("%c\n", ch);
//	//putchar(ch);//输出一个字符！！！！！！
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//
//	return 0;
//}



//int main()
//{
//	int password[20] = { 0 };
//	printf("输入密码 :> ");
//	scanf("%s", password);
//	printf("确认密码(y/n) :> ");
//	//getchar();//清理缓冲区！！！！！！！ 处理\n！！！！！
//	//清理缓冲区的多个字符！！！！！
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'y')
//	{
//		printf("确认成功\n :> ");
//	}
//	else
//	{
//		printf("确认失败\n :< ");
//	} 
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)//三个都可以自由省略 ！！！！！！ 判断部分 省略可能导致 死循环！！！ 不建议随便省略 ！！！
//	{
//		printf("%d ", a);
//	}
//
//
//
//
//	return 0;
//}



//int main()
//{
//	int a = 1;
//	do
//	{
//		printf("%d ", a);
//		a++;
//	} while (a <= 10);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 1;
//	int c = 0;
//	int num = 0;
//	scanf("%d", &c);
//	for (b = 1; b <= c; b++)
//	{
//		sum = 1;
//		for (a = 1; a <= b; a++)
//		{
//			sum *= a;
//		}
//		
//		//printf("%d ", sum);
//		num = num + sum;
//	}
//		
//		printf("%d\n", num);
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 1;
//	int c = 0;
//	int num = 0;
//	scanf("%d", &c);
//	for (b  = 1; b <= c; b++)
//	{
//		sum = 1;
//		for (a = 1; a <= b; a++)
//		{
//			sum = sum * a;
//
//		}
//		num += sum;
//	}
//	printf("%d ", num);
//
//
//
//
//	return 0;
//}




//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;// 要查找的数字
//	//在arr这个有序数组中查找k（7）的值
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了：%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}




//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{	
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了：%d\n", mid);
//			break;
//		}
//
//		if (left > right)
//		{
//			printf("找不到了\n");
//		}
//	}
//
//
//	return 0;
//}





//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			mid = left + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			mid = right - 1;
//		}
//		else
//		{
//			printf("找到了：%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到\n");
//		}
//	}
//
//
//
//	return 0;
//}






//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了：%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到\n");
//		}
//	}
//
//
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 1;
//	int c = 0;
//	int num = 0;
//	scanf("%d", &c);
//	for (b = 1; b <= c; b++)
//	{
//		sum = 1;
//		for (a = 1; a <= b; a++)
//		{
//			sum = a * sum;
//
//
//		}
//		num = num + sum;
//	}
//	printf("%d\n", num);
//
//	return 0;
//}




//int main()
//{
//	char arr1[] = "welcome to csjs!!!!!!";
//	char arr2[] = "#####################";
//	//int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠一秒
//		system("cls");//清空屏幕
//		left ++;
//		right --;
//	}
//		printf("%s\n", arr2);
//
//
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int password[20] = {0};
//	int c = 2;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("输入密码：");
//		scanf("%s", password);
//		//if (password == "123123") 两个字符串的比较，不能使用== ，应该使用strcmp
//		if (strcmp(password, "123123") == 0)
//		{
//			printf("确认成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误 请重新登录 次数剩余%d\n", c);
//			c--;
//		
//		}
//		
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序");
//	}
//
//	return 0;
//}




//void menu()
//{
//	printf("*********************************\n");
//	printf("*********************************\n");
//	printf("***********1 . play  ************\n");
//	printf("***********0 . next  ************\n");
//	printf("*********************************\n");
//	printf("*********************************\n");
//
//}
//
//void game()
//{
//	
//
//	int ret = rand()%100 ;
//	//printf("%d\n", ret);
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜一个数字：");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//
//
//
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();//打印菜单
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误,重新选择\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}

//void menu()
//{
//
//	printf("***********************\n");
//	printf("***********************\n");
//	printf("*******1 . play  ******\n");
//	printf("*******2 . next  ******\n");
//	printf("***********************\n");
//	printf("***********************\n");
//
//
//
//}
//
//void game()
//{	
//	int ret = rand()%100;
//	while (1)
//	{
//		
//		printf("猜一个数字：");
//		int guess = 0;
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("才小了\n");
//		}
//		else
//		{
//			printf("猜对啦！！！");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			break;
//			printf("选择错误请重新选择\n");
//			break;
//		}
//	} while (input);
//
//
//
//
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		 a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (c > b)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d ", a);
//			
//		}
//		
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (1)
//	{
//		if (a > b)
//		{
//			printf("%d ", a);
//			a--;
//		}
//		else
//		{
//			printf("%d ", b);
//			b--;
//		}
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//
//	if (a > b)
//	{
//		 max = a;
//	}
//	else
//	{
//		 max = b;
//	}
//
//	while (1)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("最大公约数是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	int los = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		max = a;
//		los = b;
//	}
//	else
//	{
//		max = b;
//		los = a;
//	}
//	/*if (max % a == 0)
//	{
//		printf("%d\n", a);
//	}
//	if(max % b == 0)
//	{
//		printf("%d\n", b);
//	}*/
//	while (c = max % los)			//24 18
//	{
//		max = los;
//		los = c;
//		
//	}
//	printf("%d\n", los);
//	return 0;
//}


//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	while (max = a % b)
//	{
//		a = b; 
//		b = max;
//	}
//	printf("最大公因数：%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	int s = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		a = b;
//		b = b;
//	}
//	else
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	int c = a;
//	do 
//	{
//		c++;
//	} while (s = a * b / c);
//	printf("%d\n", c-1);
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d 这是闰年\n", y);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int sum = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d 这是闰年\n", y);
//			sum++;
//		}
//	}
//	printf("\nsum = %d", sum);
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	for (sum = 100; sum <= 200; sum++)
//	{
//		if (() || ())
//		{
//
//		}
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	for (sum = 100; sum <= 200; sum++)
//	{
//		int i = 0;
//		for (i = 2; i < sum; i++)
//		{
//			if (sum % i == 0 )
//			{
//				break;
//			}
//		}
//		if (sum == i)
//		{
//			printf("%d 这是素数\n", sum);
//		}
//	}
//
//	return 0;
//}

//关机程序
//shutdown -s -t 60
//shutdown -a



//小关机代码！！！！！！！！！！！！！！！！！！！！！
//int main()
//{
//	//关机
//	//system() - 执行命令的函数 c语言中！！！
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("你的电脑会在一分钟后关机 如果请输入：我是猪，就取消关机");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}




//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int get_max(int x , int y)  // 此为 形参 并非实参 ！！！！
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//
//	return 0;


//void swap(int* pa, int* pb)// 传址 调用！！！！！
//{
//	int tmp = 0;  // *p 这个代表 地址 取地址 可以 直接影响到 实参！！！！ 
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("%d = a %d = b\n", a, b);
//	return 0;
//}

//int is_prime(int x)
//{
//	int y = 0;
//	for (y = 2; y < sqrt(x); y++)
//	{
//		if (x % y == 0)
//		{
//			return 0;
//		}
//		
//	}
//	return 1;
//
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (is_prime(a) == 1)
//	{
//		printf("%d是 ", a);
//	}
//	else
//	{
//		printf("%d不是", a);
//	}
//
//	return 0;
//}

//int is_leap_year(int a)
//{
//	if ((a % 100 != 0 && a % 4 == 0) || (a % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	if (is_leap_year(y) == 1)
//	{
//		printf("%d 这是闰年", y);
//	}
//	else
//	{
//		printf("%d 这不是闰年", y);
//	}
//
//	return 0;
//}

//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//	
//			if (a[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else if(a[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				return mid;
//			}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是 %d\n", ret);
//	}
//	return 0;
//}

//void add(int*p)
//{
//	(*p)++;
//
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);
//
//	return 0;
//}


//					 函数可以嵌套 使用 但是不能嵌套定义！！！！！



//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hehe";
//	printf("%s\n", strcpy(arr1, arr2));    //				链式访问！！！！！！
//	return 0;
//}


//int main()
//{
//	printf("hehe\n");						//最简单递归！！！！！！！！！！！！！ 
//	main();
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
// 	return 0;
//}

//void print(int A)
//{
//	if (A > 9)					//递归存在限制条件！！！	递归每次调用的时候 越来越接近这个限制条件！！！ 缺一不可！ 都有了不一定对 但是少一个一定错  递归层数不能太大
//	{
//		print(A / 10);
//	}
//	printf("%d ", A % 10);
//
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int sum = 0;
//	scanf("%d %d", &a, &b);
//	int sum = a % b;
//	printf("%d\n", sum);
//
//
//	return 0;
//}

//最小公因数！！  先比较 最小的那个 再-- 如果没用 那就打印比较起来小的 如果找到了 就打印小的

//int gong(int a ,int b)
//{
//	int max;
//	if (a > b)
//	{
//		max = a;
//	}
//	else(a < b);
//	{
//		max = b;
//	}
//	while (1)
//	{
//		if(a % max == 0 && b % max == 0)
//		{
//			break;
//			
//		}
//		
//		max--;
//	}
//	return max;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int z = gong(a, b);
//	if (-1 != z)
//	{
//		printf("%d是最大公因数", z);
//	}
//	
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "hehe";
//	printf("%d\n", my_strlen(arr));
//
//
//	return 0;
//}

// 1 1 2 3 5 8 13

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n - 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;



}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}