#include<iostream>
#include<vector>

using namespace std;

inline bool size_is_ok(int size)
{
    return ((size <= 0 || size > 100) ? false : true);
}

const vector<int> * seq(int size)
{
    static vector<int> vec;
    if(size_is_ok(size))
    {
        if(size > vec.size())
        {
            for(int i = vec.size()+1; i <= size; ++i)
            {
                vec.push_back((i*(3*i-1))/2);
            }
        }
    }
    return &vec;
}

bool real_value(int pos, int &elem)
{
    if(!size_is_ok(pos))
    {
        cerr<<"Warning!pos is invalid!\n";
        elem = -1;
        return false;
    }
    else
    {
        const vector<int> *pvec = seq(pos);
        elem = (*pvec)[pos-1];
        return true;
    }
}

int main()
{
    int pos = -1;
    int elem = -1;
    while (cin>>pos)
    {
        if(real_value(pos, elem))
            cout<<"pos: "<<pos<<" elem: "<<elem<<endl;
    }

    return 0;
    
}