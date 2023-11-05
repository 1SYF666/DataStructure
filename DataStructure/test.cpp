#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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


#define N 15
#define LEN 15

struct names
{
	char fname[N];
	char mname[N];
	char lname[N];

};

struct messages
{
	char ints_num[LEN];
	struct names name;
};

char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);

	if (ret_val)
	{
		find = strchr(st, '\n');

		if (find)
		{
			*find = '\0';
		}
		else
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}
	}

	return ret_val;

}

void show_messages(const struct messages pt)
{
	if (pt.name.mname[0] == '\0')
	{
		printf("%s,%s", pt.name.fname, pt.name.lname);
		printf(" -- %s\n", pt.ints_num);
	}
	else
	{
		printf("%s,%s %c.", pt.name.fname, pt.name.lname, pt.name.mname[0]);
		printf(" -- %s\n", pt.ints_num);
	}

	return;
}


int main(void)
{
	int i = 0;
	int count = 0;
	struct messages m[5];

	printf("Please enter the insurance number:\n");
	printf("Please [enter] at the start of a line to stop.\n");

	while (count < 5 && s_gets(m[count].ints_num, LEN) && m[count].ints_num[0] != '\n')
	{
		printf("Now enter the former name:\n");
		s_gets(m[count].name.fname, N);
		printf("Now enter the middle name(without,[enter] to the next):\n");
		s_gets(m[count].name.mname, N);
		printf("Now enter last name:\n");
		s_gets(m[count].name.lname, N);

		if (count++ < 5)
		{
			printf("Enter the next insurance number:\n");
		}
	}

	if (count > 0)
	{
		printf("All number messages:\n");
		for (i = 0; i < count; i++)
		{
			show_messages(m[i]);
		}
	}
	else
	{
		printf("No data!\n");
	}
	return 0;
}

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








