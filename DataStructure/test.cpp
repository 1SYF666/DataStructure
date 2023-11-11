#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stack>
using namespace std;

/* reducto.c -- 把您的文件压缩为原来的三分之一 */
/* reducto.c -- Compress your file to 1/3 of the original */

//#define LEN 40
//
//int main(int argc, char* argv[])
//{
//	FILE* in, * out;
//	int ch;
//	char name[LEN];
//	int count = 0;
//
//	//检查命令行参数
//	//Check the command line parameters
//
//	if (argc < 2)
//	{
//		fprintf(stderr, "Usage:%s filename\n", argv[0]);
//		exit(1);
//	}
//
//	//实现输入
//	//Implement input
//
//	if ((in = fopen(argv[1], "r")) == NULL)
//	{
//		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
//		exit(2);
//	}
//
//	// 实现输出
//	// relize output
//	strncpy(name, argv[1],sizeof(char)*4);    //把文件名复制到数组中---Copy the file name into the array
//	strcat(name, ".red");     //在文件名后添加.red---Add after the file name .red
//	if ((out = fopen(name, "w")) == NULL)
//	{
//		fprintf(stderr, "Can't create output file.\n");
//		exit(3);
//	}
//
//	//复制数据
//	//copy data
//
//	while ((ch = getc(in)) != EOF)
//	{
//		if (count++ % 3 == 0)
//		{
//			putc(ch, out);  //打印每3个字符中的1个---print one out of three characters
//		}
//	}
//
//	//收尾工作---Tth finishing work
//
//	if (fclose(in) != 0 || fclose(out) != 0)
//	{
//		fprintf(stderr, "Error in closing files\n");
//	}
//
//	return 0;
//}
//

/* addword.c -- 使用fprintf(),fscanf(),和rewind()函数 */

//#define MAX 40
//int main()
//{
//	FILE* fp;
//	char words[MAX];
//
//	if ((fp = fopen("words", "a+")) == NULL)
//	{
//		fprintf(stderr, "Can't open \"words\" file.\n");
//		exit(1);
//	}
//
//	puts("Enter words to add to the file:press the enter");
//	puts("Key at the beginning of a line to terminate.");
//	
//	while (gets_s(words) != NULL && words[0] != '\0') 
//	{
//		//从标准键盘获取字符串---get string from the stdin 
//		fprintf(fp, "%s ", words);
//	}
//
//	puts("File contens: ");
//	rewind(fp);  // 回到文件的开始处---get bace the beginning of file  
//
//	while (fscanf(fp, "%s", words) == 1) 
//	{
//		//一个一个字符串输出----output in each string 
//		puts(words);
//	}
//
//	if (fclose(fp) != 0)
//	{
//		fprintf(stderr, "Error closing file\n");
//	}
//
//	return 0;
//}

//
//#define N 15
//#define LEN 15
//
//struct names
//{
//	char fname[N];
//	char mname[N];
//	char lname[N];
//
//};
//
//struct messages
//{
//	char ints_num[LEN];
//	struct names name;
//};

//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(st, n, stdin);
//
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//
//	return ret_val;
//
//}
//
//void show_messages(const struct messages pt)
//{
//	if (pt.name.mname[0] == '\0')
//	{
//		printf("%s,%s", pt.name.fname, pt.name.lname);
//		printf(" -- %s\n", pt.ints_num);
//	}
//	else
//	{
//		printf("%s,%s %c.", pt.name.fname, pt.name.lname, pt.name.mname[0]);
//		printf(" -- %s\n", pt.ints_num);
//	}
//
//	return;
//}
//
//
//int main1(void)
//{
//	int i = 0;
//	int count = 0;
//	struct messages m[5];
//
//	printf("Please enter the insurance number:\n");
//	printf("Please [enter] at the start of a line to stop.\n");
//
//	while (count < 5 && s_gets(m[count].ints_num, LEN) && m[count].ints_num[0] != '\n')
//	{
//		printf("Now enter the former name:\n");
//		s_gets(m[count].name.fname, N);
//		printf("Now enter the middle name(without,[enter] to the next):\n");
//		s_gets(m[count].name.mname, N);
//		printf("Now enter last name:\n");
//		s_gets(m[count].name.lname, N);
//
//		if (count++ < 5)
//		{
//			printf("Enter the next insurance number:\n");
//		}
//	}
//
//	if (count > 0)
//	{
//		printf("All number messages:\n");
//		for (i = 0; i < count; i++)
//		{
//			show_messages(m[i]);
//		}
//	}
//	else
//	{
//		printf("No data!\n");
//	}
//	return 0;
//}

// 编写一个程序满足下面的要求
// a. name 结构体，两个成员：名 and 姓
// b. student 结构体，三个成员：name grade[(float)[3]] 和 一个变量存储3个分数平均数
// c. main()函数中声明 一个内含CSIZE(CSIZE = 4)个student 类型结构的数组，
//    并初始化这些结构的名字部分。
// d.获取每个学生的成绩，提示用户输入学生的姓名和分数，分数存储到 grade 数组相应的结构中。
// 可在main()函数或其他函数中用循环来完成
// e. 计算每个结构体的平均分，赋给合适的成员
// f. 打印每个结构的信息
// g. 打印班级的平均分，即所有结构的 数值成员的平均值
//

//#define CSIZE 4
//#define LEN 15
//#define N 3
//
//struct name
//{
//	char names[LEN];
//	char surnames[LEN];
//};
//
//struct student
//{
//	struct name name;
//	float grade[N];
//	float average;
//};
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(st, n, stdin);
//
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//
//	}
//	return ret_val;
//}
//
//void getaverage(struct student* stu, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		stu[i].average = (stu[i].grade[0] + stu[i].grade[1] + stu[i].grade[2]) / 3.0;
//	}
//	return;
//}
//
//void showstudent(struct student* stu, int n)
//{
//	printf("Data for all studens information:\n");
//	printf("surnames\tnames\tscores1\tscores2\tscores3\taverage:\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s\t\t%s\t%5.2f\t%5.2f\t%5.2f\t%5.2f\n",
//			stu[i].name.surnames, stu[i].name.names, stu[i].grade[0],
//			stu[i].grade[1], stu[i].grade[2], stu[i].average);
//	}
//	return;
//}
//
//
//int main()
//{
//	int count = 0;
//
//	struct student stu[CSIZE];
//
//	//initial the names of each element of struct 
//
//	for (int i = 0; i < CSIZE; i++)
//	{
//		strcpy(stu[i].name.names, "hello");
//		strcpy(stu[i].name.surnames, "world");
//	}
//
//	putchar('\n');
//
//	while (count < 4)
//	{
//		printf("please enter %d-th stdent information and scores:\n", count + 1);
//		printf("names: ");
//		s_gets(stu[count].name.names, LEN);
//		printf("surnames: ");
//		s_gets(stu[count].name.surnames, LEN);
//		printf("threes scores( >0 ): ");
//		scanf("%f %f %f",
//			&stu[count].grade[0], &stu[count].grade[1], &stu[count].grade[2]);
//
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//
//		count++;
//
//		putchar('\n');
//	}
//
//	//get the average of scores
//	getaverage(stu,CSIZE);
//
//	//show the information of student
//
//	showstudent(stu, CSIZE);
//
//	return 0;
//}

//#define LEN 15
//#define CSIZE 4
//#define SCORES 3
//
//struct name
//{
//	char fname[LEN];
//	char lname[LEN];
//};
//
//struct student
//{
//	struct name mes;
//	float grade[SCORES];
//	float aver;
//};
//
//void set_students(struct student ar[], int n)
//{
//	int i, j;
//
//	for (i = 0; i < n; i++)
//	{
//		printf("Please enter three scores for %s %s:\n",
//				ar[i].mes.fname, ar[i].mes.lname);
//
//		for (j = 0; j < SCORES; j++)
//		{
//			while (scanf("%f",&ar[i].grade[j])!=1)
//			{
//				while (getchar()!='\n')
//				{
//					continue;
//				}
//				printf("Please enter a number: ");
//			}
//		}
//	}
//	return;
//}
//
//void find_averages(struct student ar[], int n)
//{
//	int i, j;
//	float sum;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0, sum = 0.0f; j < SCORES; j++)
//		{
//			sum += ar[i].grade[j];
//		}
//		ar[i].aver = sum / SCORES;
//	}
//
//	return;
//}
//
//void show_messages(struct student ar[], int n)
//{
//	int i, j;
//
//	for (i = 0; i < n; i++)
//	{
//		printf("\n%s %s's three scores: ", 
//				ar[i].mes.fname, ar[i].mes.lname);
//
//		for (j = 0; j < SCORES; j++)
//		{
//			printf("%g ", ar[i].grade[j]);
//		}
//		printf("\nAverage: %g\n", ar[i].aver);
//	}
//	return;
//}
//
//void show_averages(struct student ar[], int n)
//{
//	int i = 0;
//	float total;
//
//	for (i = 0, total = 0.0f; i < n; i++)
//	{
//		total += ar[i].aver;
//	}
//
//	printf("\nClass average: %g\n", total / n);
//
//	return;
//}
//
//
//
//int main()
//{
//	struct student classes[CSIZE] =
//	{
//		{"Flip","Snide"},
//		{"Clare","Voyans"},
//		{"Bingo", "Higgs"},
//		{"Fawn", "Hunter"}
//	};
//
//	set_students(classes, CSIZE);
//	find_averages(classes, CSIZE);
//	show_messages(classes, CSIZE);
//	show_averages(classes, CSIZE);
//	
//
//
//	return 0;
//}

//// stack examples
//// empty堆栈为空则返回真
//// pop移除栈顶元素
//// push在栈顶增加元素
//// size返回栈中元素数目
//// top返回栈顶元素
////
//
//int main()
//{
//	//创建栈
//	stack<int> s;
//
//	//将元素压入栈
//	for (int i = 0; i < 10; i++)
//	{
//		s.push(i);
//	}
//	if (!s.empty())
//	{
//		cout << "栈不是空的" << endl;
//	}
//	cout << "栈中元素的个数为：" << s.size() << endl;
//
//	while (!s.empty())
//	{
//		cout << " " << s.top(); // 获取栈顶元素
//		s.pop();                // 弹出栈顶元素
//	}
//
//	cout << endl;
//
//	if (s.empty())
//	{
//		cout << "栈现在为空" << endl;
//	}
//
//	return 0;
//}

//// queue
//// empty() 判断队列是否为空，返回类型为bool
//// size() 返回队列中元素的个数
//// front() 返回队列中首元素
//// back() 返回队列队尾元素
//// push(ele) 将元素ele插入到队尾
//// pop 对首元素出队
//// 
//
//#include<queue>
//
//int main()
//{
//	int ele;
//	int num;
//	int last;
//
//	queue<int> q;
//
//	for (int i = 0; i < 10; i++)
//	{
//		q.push(i);
//	}
//
//	if (!q.empty())
//	{
//		cout << "队列不是空的" << endl;
//	}
//
//	num = q.size();
//	cout << "队列q的长度为：" << num << endl;
//	last = q.back();
//	cout << "队列q最后一个元素：" << last << endl;
//
//	while (!q.empty())
//	{
//		ele = q.front();
//		
//		cout << ele << " ";
//
//		q.pop();
//	}
//
//	cout << endl;
//
//	if (q.empty())
//	{
//		cout << "队列现在是空的" << endl;
//	}
//
//	return 0;
//}


// vector 动态数组
// c.clear() 移除容器中的所有数据
// c.empty() 判断容器是否为空
// c.erase(pos) 删除pos位置的数据
// c.erase(beg,end) 删除[beg end]区间的数据
// c.front() 传回第一个数据
// c.insert(pos,elem)在pos位置插入一个elem
// c.pop_back() 删除最后一个元素
// c.push_back(elem) 在尾部加入一个数据
// c.resize(num)重新设置该容器的大小
// c.size()返回容器中实际数据的个数
// c.begin()返回指向容器第一个元素的迭代器
// c.end() 返回指向容器最后一个元素的迭代器
//

#include<vector>

int main()
{
	//声明v
	vector<int> v;
	//向向量v中添加数据
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//从向量V中读取数据后输出
	for (int i = 0; i < v.size(); i++)
	{
		cout << " " << v[i];
	}
	cout << endl;

	//使用迭代器遍历数组 迭代器相当于指针
	cout << "使用迭代器获取数据" << endl;
	vector<int>::iterator iter;

	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << " " << *iter;
	}
	cout << endl;

	//删除数据
	//for (vector<int>::iterator it = v.begin(); it != v.end();)
	//{
	//	v.erase(it);
	//}
	
	int num = v.size();
	
	for (int i = 0; i < num; i++)
	{
		vector<int>::iterator it = v.begin();
		v.erase(it);
	}

	if (v.empty())
	{
		cout << " 向量v为空 " << endl;
	}

	return 0;
}





