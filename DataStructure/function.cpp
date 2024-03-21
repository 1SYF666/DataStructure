#include"function.h"

bool cmp(struct node a, struct node b)
{
    if (a.value < b.value)
    {
        return true;
    }
    return false;
}

template <typename T>
T sort_index(vector<size_t>& idx, vector<T>& v)
{
    node* a = new node[v.size()];
    for (int i = 0; i < v.size(); i++)
    {
        a[i].value = v[i];
        a[i].index = i;
    }

    sort(a, a + v.size(), cmp);
    for (int i = 0; i < v.size(); i++)
    {
        idx.push_back(a[i].index);
    }
    delete[] a;

    return 0;
}
void function_1(void)
{
    vector <size_t> idx;
    vector <int> vec = { 1, 2 ,3 ,1, 23, 1, 33, 21 };
    sort_index(idx, vec);
}