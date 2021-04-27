#include<iostream>
#include<vector>
//#include<string>

using namespace std;

bool sum_pentagonal(int num, vector<int> &vec)
{
    if(num < 0 || num > 100)
    {
        cerr<<"The size of num is invalid!\n";
        cerr<<"please input num ranges in [0, 100]"<<endl;

        return false;
    }
    else
    {
        for(int i = 0; i <= num; ++i)
        {
            int value = i*(3*i-1)/2;
            vec.push_back(value);
        }

        return true;
    }
}

void display(const vector<int> &vec, string str = "Pentagonal")
{
    cout<<"The seqeue in the vecter is: "<<str<<endl;
    cout<<"The elements is: \n";
    for(auto &r : vec)
    {
        cout<<r<<" ";
    }
    cout<<"\n";
}

int main()
{
    int use_num = -1;
    cout<<"Input the number you want to know: ";
    cin>>use_num;
    vector<int> use_vec;
    if(sum_pentagonal(use_num, use_vec))
        display(use_vec);

    return 0;
}