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

#define MAX 40
int main()
{
	FILE* fp;
	char words[MAX];

	if ((fp = fopen("words", "a+")) == NULL)
	{
		fprintf(stderr, "Can't open \"words\" file.\n");
		exit(1);
	}

	puts("Enter words to add to the file:press the enter");
	puts("Key at the beginning of a line to terminate.");
	
	while (gets_s(words) != NULL && words[0] != '\0') 
	{
		//从标准键盘获取字符串---get string from the stdin 
		fprintf(fp, "%s ", words);
	}

	puts("File contens: ");
	rewind(fp);  // 回到文件的开始处---get bace the beginning of file  

	while (fscanf(fp, "%s", words) == 1) 
	{
		//一个一个字符串输出----output in each string 
		puts(words);
	}

	if (fclose(fp) != 0)
	{
		fprintf(stderr, "Error closing file\n");
	}

	return 0;
}

