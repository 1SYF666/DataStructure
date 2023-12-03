#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include "list.h"

//#include <iostream>
//#include <stack>
//using namespace std;

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

//
//// vector 动态数组
//// c.clear() 移除容器中的所有数据
//// c.empty() 判断容器是否为空
//// c.erase(pos) 删除pos位置的数据
//// c.erase(beg,end) 删除[beg end]区间的数据
//// c.front() 传回第一个数据
//// c.insert(pos,elem)在pos位置插入一个elem
//// c.pop_back() 删除最后一个元素
//// c.push_back(elem) 在尾部加入一个数据
//// c.resize(num)重新设置该容器的大小
//// c.size()返回容器中实际数据的个数
//// c.begin()返回指向容器第一个元素的迭代器
//// c.end() 返回指向容器最后一个元素的迭代器
////
//
//#include<vector>
//
//int main()
//{
//	//声明v
//	vector<int> v;
//	//向向量v中添加数据
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//从向量V中读取数据后输出
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << " " << v[i];
//	}
//	cout << endl;
//
//	//使用迭代器遍历数组 迭代器相当于指针
//	cout << "使用迭代器获取数据" << endl;
//	vector<int>::iterator iter;
//
//	for (iter = v.begin(); iter != v.end(); iter++)
//	{
//		cout << " " << *iter;
//	}
//	cout << endl;
//
//	//删除数据
//	//for (vector<int>::iterator it = v.begin(); it != v.end();)
//	//{
//	//	v.erase(it);
//	//}
//	
//	int num = v.size();
//	
//	for (int i = 0; i < num; i++)
//	{
//		vector<int>::iterator it = v.begin();
//		v.erase(it);
//	}
//
//	if (v.empty())
//	{
//		cout << " 向量v为空 " << endl;
//	}
//
//	return 0;
//}

//#define LEN 14
//#define SEATS 12
//
//typedef struct
//{
//    int seat_id;
//    bool status;
//    char last[LEN];
//    char first[LEN];
//} plane;
//
//void init(plane* pl, plane* ps[])
//{
//    int i;
//
//    for (i = 0; i < SEATS; i++)
//    {
//        ps[i] = &pl[i];
//    }
//    for (i = 0; i < SEATS; i++)
//    {
//        pl[i].status = false;
//        pl[i].seat_id = i + 1;
//    }
//    return;
//}
//
//void eatline()
//{
//    while (getchar() != '\n')
//    {
//        continue;
//    }
//    return;
//}
//
//int get_first(void) 
//{
//    int ch;
//
//    do
//    {
//        ch = tolower(getchar());
//    } while (isspace(ch));
//    eatline();
//
//    return ch;
//}
//
//int show_airline_menu(void)
//{
//    int ch;
//
//    puts("There are some airlines for you to choose.");
//    puts("a) Airline 102.");
//    puts("b) Airline 311.");
//    puts("c) Airline 444.");
//    puts("d) Airline 519.");
//    puts("q) Quit the program.");
//    printf("Please you enter to choose: ");
//    ch = get_first();
//    while (strchr("abcdq", ch) == NULL)
//    {
//        printf("Please enter a, b, c, d or q: ");
//        ch = get_first();
//    }
//    return ch;
//}
//
//int getmenu(int choice)
//{
//    int ch;
//
//    if (choice == 'a')
//    {
//        printf("The airline 102 is being processed.\n");
//    }
//    else if (choice == 'b')
//    {
//        printf("The airline 311 is being processed.\n");
//    }
//    else if (choice == 'c')
//    {
//        printf("The airline 444 is being processed.\n");
//    }
//    else if (choice == 'd')
//    {
//        printf("The airline 519 is being processed.\n");
//    }
//
//    puts("To choose a function, enter its letter label:");
//    puts("a) Show number of empty seats");
//    puts("b) Show list of empty seats");
//    puts("c) Show alphabetical list of seat");
//    puts("d) Assign a customer to a seat");
//    puts("e) Delete a seat assignment");
//    puts("f) Quit");
//    puts("g) Confirm seat assignment");
//   
//    printf("Please you enter to choose: ");
//
//    ch = get_first();
//
//    while (strchr("abcdefg", ch) == NULL)
//    {
//        printf("Please enter a,b,c,d,e,f or g: ");
//        ch = get_first();
//    }
//
//    return ch;
//}
//
//int openings(const plane pl[], int n)
//{
//    int seat;
//    int count = 0;
//
//    for (seat = 0; seat < n; seat++)
//    {
//        if (pl[seat].status == false)
//        {
//            count++;
//        }
//    }
//
//    return count;
//}
//
//void  makelist(const plane pl[], char* str, int kind)
//{
//    int seat;
//
//    char temp[LEN];
//
//    *str = '\0';
//    for (seat = 0; seat < SEATS; seat++)
//    {
//        if (pl[seat].status == kind)
//        {
//            sprintf(temp, "%d", pl[seat].seat_id);
//            strcat(str, temp);
//        }
//    }
//    return;
//}
//
//void show_empty_seats(const plane pl[], int n)
//{
//    char seating[3 * SEATS];
//    if (openings(pl, n) == 0)
//    {
//        puts("All seats are assigned");
//    }
//    else
//    {
//        // 为分配和删除座位提供当前处理的座位数
//        // provide the number of seats ————currently processed
//        // for the allocation and deletion of seats
//        makelist(pl, seating, false);
//        printf("The following seating are avaliable: ");
//        puts(seating);
//    }
//
//    return;
//}
//
//void sort(plane* array[], int n)
//{
//    int i, j;
//
//    plane* temp;
//
//    // 冒泡排序
//    // bubble sorting
//
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            if (strcmp(array[j]->last, array[i]->last) < 0)
//            {
//                temp = array[i];
//                array[j] = array[i];
//                array[i] = temp;
//            }
//        }
//    }
//
//    return;
//
//}
//
//void list_assign(plane* ps[], int n)
//{
//    int i;
//
//    if (openings(*ps, n) == SEATS)
//    {
//        puts("All seats are empty");
//    }
//    else
//    {
//        // 按照ASCII码进行座位排序
//        // sort the seats according to the ASCII code
//
//        sort(ps, n);
//
//        for (i = 0; i < SEATS; i++)
//        {
//            if (ps[i]->seat_id == true)
//            {
//                printf("Seat %d: %s, %s\n", ps[i]->seat_id, ps[i]->last, ps[i]->first);
//            }
//        }
//
//    }
//
//    return;
//
//}
//
//char* s_gets(char* st, int n)
//{
//    char* ret_val;
//    char* find;
//
//    ret_val = fgets(st, n, stdin);
//    if (ret_val)
//    {
//        find= strchr(st, '\n');
//        if (find)
//        {
//            *find = '\0';
//        }
//        else
//        {
//            while (getchar()!='\n')
//            {
//                continue;
//            }
//        }
//    }
//
//
//    return ret_val;
//}
//
//void assign_seat(plane pl[], int n)
//{
//    int flag;
//    int seat;
//    int ch;
//    char list[3 * SEATS];
//    
//    if (openings(pl, n) == false)
//    {
//        // 这里的false 指的是0，非零指的是true;
//        // False here refers to zero, and non-zero refers to true
//        puts("All seats are assigned. Can't assign again!");
//    }
//    else
//    {
//        makelist(pl, list, false);
//        printf("Available seats: %s\n", list);
//        printf("Whi seat do you wang? Please you enter from the list: ");
//
//        do
//        {
//            while (scanf("%d", &seat) != 1)
//            {
//                eatline();
//                printf("Seats: %s\n", list);
//                printf("Enter a number from the lists: ");
//            }
//            if (seat<1 || seat>SEATS || pl[seat - 1].status == true) 
//            {
//                printf("Seats: %s\n", list);
//                printf("Enter a number from the lists: ");
//                flag = 1; // 继续执行循环--continue the loop
//            }
//            else
//            {
//                flag = 0;  // 结束循环，选取座位符合要求
//                           // end the cycle and choose a seat that meets the requirements. 
//            }
//        } while (1 == flag);
//
//        eatline();
//
//        puts("Enter first name: ");
//        s_gets(pl[seat - 1].first, LEN);
//        puts("Enter last name: ");
//        s_gets(pl[seat - 1].last, LEN);
//
//        printf("%s %s assigned to seat %d.\n", pl[seat - 1].first, pl[seat - 1].last, seat);
//
//        printf("Enter a to accept assignment,c to cancel it: ");
//
//        ch = get_first();
//        while (strchr("ac", ch) == NULL)
//        {
//            printf("Please enter a or c: ");
//            ch = get_first();
//        }
//
//        if (ch == 'a')
//        {
//            pl[seat - 1].status = true;
//            puts("Passenger assigned to seat.");
//        }
//        else if (ch == 'c')
//        {
//            puts("Passenger not assigned.");
//        }
//
//    }
//
//    return;
//}
//
//void show_seat(const plane pl[])
//{
//    int i;
//
//    puts("Seats currently taken: ");
//    for (i = 0; i < SEATS; i++)
//    {
//        if (pl[i].status == true)
//        {
//            printf("Seats %d: %s, %s\n", pl[i].seat_id, pl[i].last, pl[i].first);
//        }
//    }
//
//    return;
//}
//
//void delete_seat(plane pl[], int n)
//{
//    int flag = 1;
//    int seat = 1;
//    int ch = 1;
//    char list[3 * SEATS];
//
//    if (openings(pl, n) == SEATS)
//    {
//        puts("All seats already are empty.Can't delete!");
//    }
//    else
//    {
//        // 显示已经分配的座位
//        // show assigned seats
//        show_seat(pl);
//        makelist(pl, list, true);
//        printf("Enter the number of the seat to be deleted: ");
//        do
//        {
//            while (scanf("%d", &seat) != 1)
//            {
//                eatline();
//                printf("Seats: %s\n", list);
//                printf("Enter a number from the lists: ");
//            }
//
//            if (seat<1 || seat>SEATS || pl[seat - 1].status == false)
//            {
//                printf("Seats: %s\n", list);
//                printf("Enter a number from this list: ");
//                flag = 1;
//            }
//            else
//            {
//                flag = 0;
//            }
//
//        } while (1== flag);
//
//        eatline();
//
//        printf("%s %s to be canceled for seat %d.\n", pl[seat - 1].first, pl[seat - 1].last, seat);
//        printf("Enter d to delete assignment,a to abort: ");
//
//        ch = get_first();
//
//        while (strchr("da", ch) == NULL)
//        {
//            printf("Please enter d or a: ");
//            ch = get_first();
//        }
//
//        if (ch == 'd')
//        {
//            pl[seat - 1].status = false;
//            puts("Passenger dropped.");
//        }
//        else if(ch=='a')
//        {
//            puts("Passenger retained.");
//        }
//    }
//
//    return;
//}
//
//void confirm_seat(plane pl[])
//{
//    int i;
//
//    puts("Seat assignment lists:");
//
//    for (i = 0; i < SEATS; i++)
//    {
//        if (pl[i].status == true)
//        {
//            printf("Seat %-2d: assigned.\n", pl[i].seat_id);
//        }
//        else
//        {
//            printf("Seat %-2d: unassigned.\n", pl[i].seat_id);
//        }
//    }
//
//    return;
//}
//
//void airline(int choice, plane pl[], plane* ps[])
//{
//    int ch;
//
//    while ((ch = getmenu(choice)) != 'f')
//    {
//        switch (ch)
//        {
//        case 'a':
//        {
//            // 显示空座位的数量
//            // display the number of empty seats 
//            printf("There are %d empty seats.\n", openings(pl, SEATS));
//            break;
//        }
//        case 'b':
//        {
//            // 显示空座位的信息
//            // display the information of empty seats
//            show_empty_seats(pl, SEATS);
//            break;
//        }
//        case 'c':
//        {
//            // 显示按照字母序列排序后的座位表;
//            // display the seat list sorted by alphabetical order
//            list_assign(ps, SEATS);
//            break;
//        }
//        case 'd':
//        {
//            // 分配空余座位
//            // allocate vacant seats
//            assign_seat(pl, SEATS);
//            break;
//        }
//        case 'e':
//        {
//            // 删除已分配的座位
//            // delete assigned seats
//            delete_seat(pl, SEATS);
//            break;
//        }
//        case 'g':
//        {
//            // 确认座位分配
//            // confirm the seat allocation
//            confirm_seat(pl);
//            break;
//        }
//        default:
//            break;
//        }
//
//        putchar('\n');
//    }
//
//
//    return;
//}
//
//int main(void)
//{
//    int ch;
//    plane airline_102[SEATS];
//    plane airline_311[SEATS];
//    plane airline_444[SEATS];
//    plane airline_519[SEATS];
//    plane* ps_102[SEATS];
//    plane* ps_311[SEATS];
//    plane* ps_444[SEATS];
//    plane* ps_519[SEATS];
//
//    init(airline_102, ps_102);
//    init(airline_311, ps_311);
//    init(airline_444, ps_444);
//    init(airline_519, ps_519);
//    while ((ch = show_airline_menu()) != 'q')
//    {
//        putchar('\n');
//        switch (ch)
//        {
//        case 'a':
//        {
//            airline(ch, airline_102, ps_102);
//            break;
//        }
//        case 'b':
//        {
//            airline(ch, airline_311, ps_311);
//            break;
//        }
//        case 'c':
//        {
//            airline(ch, airline_444, ps_444);
//            break;
//        }
//        case 'd':
//        {
//            airline(ch, airline_519, ps_519);
//            break;
//        }
//        }
//        putchar('\n');
//    }
//    puts("Bye from Colossus Airlines!");
//
//    return 0;
//}
//

/* booksave.c -- 把结构内存保存到文件中 */
/* booksave.c -- save the structural memory to the file */

//#define MAXTITL 40
//#define MAXAUTL 40
//#define MAXBKS 10
//
//struct book
//{
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	float value;
//};
//
//void eatline()
//{
//	while (getchar() != '\n')
//	{
//		continue;
//	}
//	return;
//}
//
//
//int main()
//{
//	struct book library[MAXBKS];
//	int count = 0;
//	int index, filecount;
//	FILE* pbooks;
//
//	int size = sizeof(struct book);
//
//	if ((pbooks = fopen("D:\\Post_graduate\\code\\self_code\\book.dat", "a+b")) == NULL)
//	{
//		fputs("Can't open book.dat file\n", stderr);
//		exit(1);
//	}
//	rewind(pbooks);
//
//	// 每次运行，一开始结构体是空的，然后从文件流里读入数据到结构体
//	// every time it runs,the structure is empty at first,
//	// and then reads data from the file stream into the structure
//	//
//	while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
//	{
//		if (count == 0)
//		{
//			puts("Current contents of book.dat: ");
//		}
//		printf("%s by %s: $%.2f\n",
//			library[count].title, library[count].author, library[count].value);
//
//		count++;
//	}
//
//	filecount = count;
//
//	if (count == MAXBKS)
//	{
//		fputs("The book.dat file is full.", stderr);
//		exit(2);
//	}
//
//	//下面继续输入内容到结构体里
//	//next,continue to enter the content into the structure
//
//	puts("Please add new book title.");
//	puts("Press [enter] at the start of a line to stop.");
//	while (count < MAXBKS
//		&& gets_s(library[count].title) != NULL
//		&& library[count].title[0] != '\0')
//	{
//		puts("Now enter the author.");
//		gets_s(library[count].author);
//		puts("Now enter the value.");
//		scanf("%f", &library[count++].value);
//		eatline();
//
//		if (count < MAXBKS)
//		{
//			puts("Enter the next title.");
//		}
//	}
//
//	if (count > 0)
//	{
//		puts("Here is the list of your books: ");
//
//		for (index = 0; index < count; index++)
//		{
//			printf("%s by %s: $%.2f\n", 
//				library[index].title, 
//				library[index].author, 
//				library[index].value);
//		}
//		// 把新输入到结构体里的内容 写到文件流中
//		// write the newly entered content into the structure into the file stream
//
//		fwrite(&library[filecount], size, count - filecount, pbooks);
//	}
//	else
//	{
//		puts("No books? Too bad.\n");
//	}
//
//	puts("Bye.\n");
//
//	fclose(pbooks);
//
//	return 0;
//}


// 开发一个包含你需要的预处理器定义的头文件
// develop a header file that you need to
// define as a preprocessor
//

//#define HMEAN(X,Y) ( 2.0*(X)*(Y)/((X)+(Y)) )
//int main()
//{
//	double x, y, ans;
//
//	printf("Enter a pair of numbers(q to quit): ");
//	while (scanf("%lf %lf",&x,&y)==2)
//	{
//		ans = HMEAN(x, y);
//		printf("%g= harmonic mean of %g %g.\n", ans, x, y);
//		printf("Enter a pair of numbers (q to quit): ");
//	}
//	puts("Done.");
//
//	return 0;
//}

//#define PI 3.1415926
//
//typedef struct
//{
//	double length;
//	double angle;
//}polar;
//
//typedef struct
//{
//	double x;
//	double y;
//}rect;
//
//rect polar_to_rect(const polar* temp);
//
//int main()
//{
//	polar input;
//	rect answer;
//
//	printf("Enter magnitude and angle in degrees(q to quit): ");
//	while (scanf("%lf %lf",&input.length,&input.angle)==2)
//	{
//		answer = polar_to_rect(&input);
//		printf("polar coord: %g %g\n", input.length, input.angle);
//		printf("rectangle coord: %g %g\n", answer.x,answer.y);
//		printf("You can enter again (q to quit): ");
//
//	}
//	puts("Done.");
//	return 0;
//}
//
//rect polar_to_rect(const polar* temp)
//{
//	rect res;
//	static const double rad = PI / 180.0;
//	double ans = rad * temp->angle;
//
//	res.x = temp->length * cos(ans);
//	res.y = temp->length * sin(ans);
//
//	return res;
//}
// 
//#define TSIZE 45
//#define FMAX 5
//
//struct film
//{
//	char title[TSIZE];
//	int rating;
//	struct film* next;
//};
//
//int main()
//{
//	time_t start;
//	time_t end;
//	struct film* head = NULL;
//	struct film* prev=NULL;
//	struct film* current=NULL;
//
//	char input[TSIZE];
//
//	puts("Enter first movie title: ");
//	while (gets_s(input) != NULL
//		&& input[0] != '\0')
//	{
//		current = (struct film*)malloc(sizeof(struct film) * 1);
//		if (head == NULL)
//		{
//			head = current; //first struct node
//		}
//		else
//		{
//			prev->next = current; //second struct node
//		}
//
//		current->next = NULL;
//
//		strcpy(current->title, input);
//		puts("Enter your rating <0-10>: ");
//		scanf("%d", &current->rating);
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//
//		puts("Enter next movie title (empty line to stop): ");
//
//		prev = current;
//	}
//
//	start = time(NULL);
//	if (head == NULL)
//	{
//		printf("No data entered. ");
//	}
//	else
//	{
//		printf("Here is the movie list: \n");
//	}
//
//	current = head;
//
//	while (current != NULL)
//	{
//		printf("Movie:%s Rating: %d\n", current->title,
//			current->rating);
//		current = current->next;
//	}
//
//	// free up memory
//	current = head;
//	struct film* temp;
//	while (current != NULL)
//	{
//		//free(current);
//		//current = current->next; //free后 使得 current 成为野指针
//
//		temp = current->next;
//		free(current);        
//		current = temp;
//	}
//
//	end = time(NULL);
//
//	printf("end-start=%.6fs\n", (float)(end - start));
//
//	printf("Bye!\n");
//
//	return 0;
//}

void showmovies(Item item);

int main(void)
{
	List movies;
	Item temp;

	//initialize
	InitializeList(&movies);

	if (ListIsFull(&movies))
	{
		fprintf(stderr, "No memory avaliable! Bye!\n");
		exit(1);
	}

	//clocate and save
	puts("Enter first movie title: ");
	while (gets_s(temp.title) != NULL
		&& temp.title[0] != '\0')
	{
		puts("Enter your rating <0-10>: ");
		scanf("%d", &temp.rating);
		while (getchar() != '\n')
		{
			continue;
		}

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "Problem allocating memory\n");
			break;
		}

		if (ListIsFull(&movies))
		{
			puts("The list is now full. ");
			break;
		}

		puts("Enter next movie title (empty line to stop): ");

	}

	if (ListIsEmpty(&movies))
	{
		printf("No data entered. ");
	}
	else
	{
		printf("Here is the movie list: \n");
		Traverse(&movies, showmovies);
	}

	printf("You entered %d movies.\n", ListItemCount(&movies));

	//free
	EmptyTheList(&movies);

	printf("Bye!\n");

	return 0;

}

void showmovies(Item item)
{
	printf("Movie:%s Rating: %d\n", item.title, item.rating);
}



