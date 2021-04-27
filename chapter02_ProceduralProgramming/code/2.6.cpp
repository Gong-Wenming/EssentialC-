#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

template <typename type>
inline type max(type a, type b)
{
    return a > b ? a : b;
}

template <typename elemtype>
inline elemtype max(const vector<elemtype> &vec)
{
    return *max_element(vec.begin(), vec.end());
}

template <typename arraytype>
inline arraytype max(const arraytype *array, int size)
{
    return *max_element(array, array + size);
}