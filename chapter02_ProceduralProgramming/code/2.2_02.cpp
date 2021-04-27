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
        for(int i = vec.size(); i <= num; ++i)
        {
            int value = i*(3*i-1)/2;
            vec.push_back(value);
        }

        return true;
    }
}

void display(const vector<int> &vec, int size, string str = "Hello Seqeue")
{
    cout<<"The seqeue in the vecter is: "<<str<<endl;
    cout<<"The elements is: \n";
    int count = 0;
    for(int i = 0; i < size; ++i)
    {
        ++count;
        cout<<vec[i]<<((count%10) ? "\t": "\n");
    }
    cout<<"\n";
}

int main()
{
    int use_num = -1;
    string str = "";
    cout<<"Input the number you want to know: ";
    
    vector<int> use_vec;
    while (cin>>use_num)
    {
        if(sum_pentagonal(use_num, use_vec))
        display(use_vec, use_num);
    }
    
    

    return 0;
}