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
//	printf("ţħ���\n");
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
//enum sex//ö�ٳ���
//{
//
//	male = 3,//����ֵ
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
//	char arr2[] = { 'a','b','c','\0' };//��Ҫ\0 ��Ȼ�������룡��������
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
//	//printf("ab\ncd");//ת���ַ� \n ! ! !
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
//	printf("����f4:\)\n");
//	printf("ѡ����Ľ�ɫ��1��ʼ��!:\)");
//	scanf("%d", &input);
//
//	if (input == 1);
//	printf("̷��ͩ\n");
//	if (input == 2);
//	printf("�����\n");
//	if (input == 3);
//	printf("������\n");
//	if (input == 0);
//	printf("�Դ\n");
//		return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("Ȣ��ͮͮ\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)��\n");//ѡ����� ŶҮ ���Լ򵥱���ˣ�����
//	scanf("%d", &a );
//	
//	if (a == 1)
//		printf("��Բ��\n");
//	else 
//		printf("һ���˹¹�\n"); 
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	while(line<30000)
//	{
//		printf("ѧϰ,%d\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("���㷭��\n");
//	}
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;//������������������������Ҫ���ã���
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
//	char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
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
//	printf("%d\n", !a);//" ! "���԰����Ϊ�� �ٸ�Ϊ�棡��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n" ,sizeof (arr));//����� arr ������ ��λ�ֽ�
//	printf("%d\n", sizeof(arr[10]));//����� arr[10] ��һ������� ��С ��λ�ֽ�
//	int g = sizeof(arr) / sizeof(arr[10]);//����� arr[10]������������
//	printf("%d\n", g);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	// ~ ��λȡ������
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

//typedef unsigned int u_int;//typedef ����������������������������
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
//	static int a = 1;//static  ���ξֲ���������������
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

//extern int max;//extern   ȫ�ֱ����������������� ��static ���ξֲ����� ��ͻ����������
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
//	int * pa = &a;// * ˵��pa ��ָ����� int˵�� paִ�еĶ�����int���͵ģ���������
//	//pa ��������ŵ�ַ�ģ���c�����н���ָ�����������������
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
//	*pa = 20;//*�����ò��� | *pa����ͨ��pa��ߵĵ�ַ���ҵ�a
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
////����һ���������
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct stu s = { "����" ,20 , 99.5};//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ���������Ա����
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	return 0;
//}

//int main()
//{
//	printf("�ú�ѧϰ\n");
//	printf("Ҫ��Ҫר����(1/0)\n");
//	int a = 0;
//	scanf("%d", &a);
//	if (a == 0)
//	{
//		printf("ok\n");
//	}
//	else
//	{
//		printf("no\n");
//		printf("g g\n");//���ϴ����ž��ܱ������ָ�� ��Ȼֻ��һ�䣡����������������
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
//		printf("δ����\n");
//	}
//	else if (age >= 18 && age <= 26)
//	{
//		printf("����");
//	}
//	else if (age >= 27 && age <= 60)
//	{
//		printf("����\n");
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 0)
//	{
//		printf("ż\n");
//	}
//	else
//	{
//		printf("����\n");
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
//	switch (day)  //switch ������������� ���Σ����������� 
//	{
//	case 1:  // case ���� ���������
//		printf("����һ\n");
//		break;            // Ҫ��break ���������������� ��Ȼȫ��Ҫ���������������
//	case 2 :
//		printf("���ڶ�\n");
//		break;
//	case 3 :
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
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
//			break;   // ������ǰѭ����������������
//		//continue;  // ������������
//		printf("%d ", a);
//		a++;
//	}
//
//
//	return 0;
//}

//getchar //�õ��ַ�������������
//EOF - end of file - �ļ�������־�������� 
//int main()
//{
//	//int ch = getchar();
//	//printf("%c\n", ch);
//	//putchar(ch);//���һ���ַ�������������
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
//	printf("�������� :> ");
//	scanf("%s", password);
//	printf("ȷ������(y/n) :> ");
//	//getchar();//���������������������� ����\n����������
//	//���������Ķ���ַ�����������
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'y')
//	{
//		printf("ȷ�ϳɹ�\n :> ");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n :< ");
//	} 
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)//��������������ʡ�� ������������ �жϲ��� ʡ�Կ��ܵ��� ��ѭ�������� ���������ʡ�� ������
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
//	int k = 0;// Ҫ���ҵ�����
//	//��arr������������в���k��7����ֵ
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
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
//			printf("�ҵ��ˣ�%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
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
//			printf("�ҵ��ˣ�%d\n", mid);
//			break;
//		}
//
//		if (left > right)
//		{
//			printf("�Ҳ�����\n");
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
//			printf("�ҵ��ˣ�%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���\n");
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
//			printf("�ҵ��ˣ�%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���\n");
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
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ
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
//		printf("�������룺");
//		scanf("%s", password);
//		//if (password == "123123") �����ַ����ıȽϣ�����ʹ��== ��Ӧ��ʹ��strcmp
//		if (strcmp(password, "123123") == 0)
//		{
//			printf("ȷ�ϳɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("������� �����µ�¼ ����ʣ��%d\n", c);
//			c--;
//		
//		}
//		
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����");
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
//		printf("���һ�����֣�");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		menu();//��ӡ�˵�
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ�����,����ѡ��\n");
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
//		printf("��һ�����֣�");
//		int guess = 0;
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���������");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			break;
//			printf("ѡ�����������ѡ��\n");
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
//			printf("���Լ���ǣ�%d\n", max);
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
//	printf("���������%d\n", b);
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
//			printf("%d ��������\n", y);
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
//			printf("%d ��������\n", y);
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
//			printf("%d ��������\n", sum);
//		}
//	}
//
//	return 0;
//}

//�ػ�����
//shutdown -s -t 60
//shutdown -a



//С�ػ����룡����������������������������������������
//int main()
//{
//	//�ػ�
//	//system() - ִ������ĺ��� c�����У�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ��Ի���һ���Ӻ�ػ� ��������룺��������ȡ���ػ�");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
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

//int get_max(int x , int y)  // ��Ϊ �β� ����ʵ�� ��������
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


//void swap(int* pa, int* pb)// ��ַ ���ã���������
//{
//	int tmp = 0;  // *p ������� ��ַ ȡ��ַ ���� ֱ��Ӱ�쵽 ʵ�Σ������� 
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
//		printf("%d�� ", a);
//	}
//	else
//	{
//		printf("%d����", a);
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
//		printf("%d ��������", y);
//	}
//	else
//	{
//		printf("%d �ⲻ������", y);
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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±��� %d\n", ret);
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


//					 ��������Ƕ�� ʹ�� ���ǲ���Ƕ�׶��壡��������



//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hehe";
//	printf("%s\n", strcpy(arr1, arr2));    //				��ʽ���ʣ�����������
//	return 0;
//}


//int main()
//{
//	printf("hehe\n");						//��򵥵ݹ飡������������������������ 
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
//	if (A > 9)					//�ݹ������������������	�ݹ�ÿ�ε��õ�ʱ�� Խ��Խ�ӽ������������������ ȱһ���ɣ� �����˲�һ���� ������һ��һ����  �ݹ��������̫��
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

//��С����������  �ȱȽ� ��С���Ǹ� ��-- ���û�� �Ǿʹ�ӡ�Ƚ�����С�� ����ҵ��� �ʹ�ӡС��

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
//		printf("%d���������", z);
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