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


template <typename T>
vector<size_t>sort_indexes_(vector<T>& v)
{
    vector<size_t>idx(v.size());
    iota(idx.begin(), idx.end(), 0);
    sort(
        idx.begin(), idx.end(),
        [&v](size_t i1, size_t i2)
        {
            return v[i1] < v[i2];
        }
    );
    return idx;
}

void function_2(void)
{
    vector<int> v = { 11, 32, 1, 23,  12, 44, 53 };
    vector<size_t>idx;
    idx = sort_indexes_(v);
}