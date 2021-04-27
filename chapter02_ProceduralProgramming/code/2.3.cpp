#include<iostream>
#include<vector>

using namespace std;

void sum_pentagonal(vector<int> &vec, int size);
inline bool size_is_ok(vector<int> &vec, int size)
{
    if(size < 0 || size > 100)
    {
        cerr<<"invalid siez "<<size<<endl;
        cout<<"The range of size should be ranged in [0, 100]\n";
        return false;
    }
    else if(size > vec.size())
    {
        sum_pentagonal(vec, size);
    }
    return true;
}

void sum_pentagonal(vector<int> &vec, int size)
{
    for(int i = vec.size(); i < size; ++i)
        vec.push_back(i*(3*i-1)/2);
}