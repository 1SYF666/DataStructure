#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 哈夫曼树结点结构
// huffman node structure
typedef struct
{
	int weight;              // 结点权重  knot weight
	int parent, left, right;// 父节点、左孩子、右孩子在数组中的位置下标 
                            // the position of the parent node,the left child and 
                            // the right child in the array 
}HTNode,*HuffmanTree;


//typedef char** HuffmanCode;

//HT数组中存放的哈夫曼树，end表示HT数组中存放结点的最终位置，
// The huffman tree stored in the HT array,end indicates the 
// final location of the nodes stored in the HT array
//s1和s2传递的是HT数组中权重值最小的两个结点在数组中的位置
// S1 and s2 pass the position of the two nodes with the smallest weight
// in the HT array in the array

void Select(HuffmanTree HT, int end, int* s1, int* s2)
{
    int min1, min2;
    //遍历数组初始下标为 1   the initial subscript of the traversal array is one
    int i = 1;
    //找到还没构建树的结点   find the nodes that have not yet built the tree
    while (HT[i].parent != 0 && i <= end) {
        i++;
    }
    min1 = HT[i].weight;
    *s1 = i;

    i++;
    while (HT[i].parent != 0 && i <= end) {
        i++;
    }
    //对找到的两个结点比较大小，min2为大的，min1为小的
    // for the two nodes found,min2 is large and min1 is small

    if (HT[i].weight < min1) {
        min2 = min1;
        *s2 = *s1;
        min1 = HT[i].weight;
        *s1 = i;
    }
    else {
        min2 = HT[i].weight;
        *s2 = i;
    }
    //两个结点和后续的所有未构建成树的结点做比较
    // compare the two nodes with all subsequent nodes
    // that have not been built into trees
    for (int j = i + 1; j <= end; j++)
    {
        //如果有父结点，直接跳过，进行下一个
        // if there is a parent node,skip it directly 
        // and proceed to the next one
        if (HT[j].parent != 0) {
            continue;
        }
        //如果比最小的还小，将min2=min1，min1赋值新的结点的下标
        // if it is smaller than the smallest,assign min2=min1,
        // min1 to the subscript of the new node
        if (HT[j].weight < min1) {
            min2 = min1;
            min1 = HT[j].weight;
            *s2 = *s1;
            *s1 = j;
        }
        //如果介于两者之间，min2赋值为新的结点的位置下标
        // if it is between the two, assign min2 as 
        // the position subscript of the new node 
        else if (HT[j].weight >= min1 && HT[j].weight < min2) {
            min2 = HT[j].weight;
            *s2 = j;
        }
    }
}


//HT为地址传递的存储哈夫曼树的数组，w为存储结点权重值的数组，n为结点个数
// HT is the array of the Huffman tree passed by the address,
// w is the array of the weight value of the node,
// and n is the number of nodes  
//
void CreateHuffmanTree(HuffmanTree* HT, int* w, int n)
{
    if (n <= 1) return; // 如果只有一个编码就相当于0   if there is only one code,
                        // it is equivalent to 0
    int m = 2 * n - 1;  // 哈夫曼树总节点数，n就是叶子结点
                        // Huffman tree sums up the point tree,n is the leaf node
    *HT = (HuffmanTree)malloc((m + 1) * sizeof(HTNode)); // 0号位置不用  zero location is not used
    HuffmanTree p = *HT;
    // 初始化哈夫曼树中的所有结点  initialise all nodes of huffman tree
    for (int i = 1; i <= n; i++)
    {
        (p + i)->weight = *(w + i - 1);
        (p + i)->parent = 0;
        (p + i)->left = 0;
        (p + i)->right = 0;
    }
    // 从树组的下标 n+1 开始初始化哈夫曼树中除叶子结点外的结点
    // initilise the nodes in the huffman tree except for
    // lead nodes from the subscript n+1 of the array
    for (int i = n + 1; i <= m; i++)
    {
        (p + i)->weight = 0;
        (p + i)->parent = 0;
        (p + i)->left = 0;
        (p + i)->right = 0;
    }
    //构建哈夫曼树 creat the huffman trees

    for (int i = n + 1; i <= m; i++)
    {
        int s1, s2;
        Select(*HT, i - 1, &s1, &s2);
        (*HT)[s1].parent = (*HT)[s2].parent = i;
        (*HT)[i].left = s1;
        (*HT)[i].right = s2;
        (*HT)[i].weight = (*HT)[s1].weight + (*HT)[s2].weight;
    }
}


//使用程序求哈夫曼编码有两种方法
//1. 从叶子结点一直找到根结点，逆向记录途中经过的标记。
//   例如，图 3 中字符 c 的哈夫曼编码从结点 c 开始一直找到根结点，
//   结果为：0 1 1 ，所以字符 c 的哈夫曼编码为：1 1 0（逆序输出）

//2. 从根结点出发，一直到叶子结点， 记录途中经过的标记。
//   例如，求图 3 中字符 c 的哈夫曼编码，就从根结点开始，依次为：1 1 0。


typedef char* HuffmanCode; 

// HT为哈夫曼树，HC为存储结点哈夫曼编码的二维动态数组，n为结点的个数
// HT is the Huffman tree,HC is the two-dimensional dynamic array
// encoded by the storage node Huffman,and n is the number of nodes
//
void HuffmanCoding1(HuffmanTree HT, HuffmanCode* HC, int n) {
    *HC = (HuffmanCode)malloc((n + 1) * sizeof(char*));
    char* cd = (char*)malloc(n * sizeof(char)); //存放结点哈夫曼编码的字符串数组 
                                                //store the array of strings encoded by Huffman
    cd[n - 1] = '\0';//字符串结束符   string terminator

    for (int i = 1; i <= n; i++)
    {
        //从叶子结点出发，得到的哈夫曼编码是逆序的，需要在字符串数组中逆序存放
        // starting from the leaf node,the Huffman code obtained is reverse order
        // and needs to be stored in reverse order in the string array
        //
        int start = n - 1;
        //当前结点在数组中的位置   the current node is located in the array
        int c = i;
        //当前结点的父结点在数组中的位置 the position of the parent node of current node in the array 
        int j = HT[i].parent;
        // 一直寻找到根结点 search all the away to the root node
        while (j != 0)
        {
            // 如果该结点是父结点的左孩子则对应路径编码为0，否则为右孩子编码为1
            // if the node is the leaf child of the parent node,the corresponding
            // path code is 0;otherwise the right child is encoded as 1 
            //
            if (HT[j].left == c)
                cd[--start] = '0';
            else
                cd[--start] = '1';
            //以父结点为孩子结点，继续朝树根的方向遍历
            // take the parent node as the child's node and 
            // continue to traverse in the direction of the tree root
        
            c = j;
            j = HT[j].parent;
        }
        // 跳出循环后，cd数组中从下标 start 开始，存放的就是该结点的哈夫曼编码
        // jumpintg out of the loop,the cd array starts from the subscript start
        // and stores the Huffman code of the node
        //

        HC[i] = (char*)malloc((n - start) * sizeof(char));
        strcpy(HC[i], &cd[start]);
    }
    //使用malloc申请的cd动态数组需要手动释放
    // the cd dynamic array applied with malloc needs tobe released manually

    free(cd);
}


//HT为哈夫曼树，HC为存储结点哈夫曼编码的二维动态数组，n为结点的个数
void HuffmanCoding2(HuffmanTree HT, HuffmanCode* HC, int n) {
    *HC = (HuffmanCode)malloc((n + 1) * sizeof(char*));
    int m = 2 * n - 1;
    int p = m;
    int cdlen = 0;
    char* cd = (char*)malloc(n * sizeof(char));
    //将各个结点的权重用于记录访问结点的次数，首先初始化为0
    for (int i = 1; i <= m; i++) {
        HT[i].weight = 0;
    }
    //一开始 p 初始化为 m，也就是从树根开始。一直到p为0
    while (p) {
        //如果当前结点一次没有访问，进入这个if语句
        if (HT[p].weight == 0) 
        {
            HT[p].weight = 1;//重置访问次数为1
            //如果有左孩子，则访问左孩子，并且存储走过的标记为0
            if (HT[p].left != 0) 
            {
                p = HT[p].left;
                cd[cdlen++] = '0';
            }
            //当前结点没有左孩子，也没有右孩子，说明为叶子结点，直接记录哈夫曼编码
            else if (HT[p].right == 0)
            {
                HC[p] = (char*)malloc((cdlen + 1) * sizeof(char));
                cd[cdlen] = '\0';
                strcpy(HC[p], cd);
            }
        }
        //如果weight为1，说明访问过一次，即是从其左孩子返回的
        else if (HT[p].weight == 1) {
            HT[p].weight = 2;//设置访问次数为2
            //如果有右孩子，遍历右孩子，记录标记值 1
            if (HT[p].right != 0) {
                p = HT[p].right;
                cd[cdlen++] = '1';
            }
        }
        //如果访问次数为 2，说明左右孩子都遍历完了，返回父结点
        else {
            HT[p].weight = 0;
            p = HT[p].parent;
            --cdlen;
        }
    }
}
