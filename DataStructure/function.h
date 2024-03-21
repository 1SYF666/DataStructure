#pragma once

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
    1.对vector进行排序，并返回索引值
*/
struct node
{
    int value;
    int index;
};
bool cmp(struct node a, struct node b);

template <typename T>
T sort_index(vector<size_t>& idx, vector<T>& v);

void function_1(void);