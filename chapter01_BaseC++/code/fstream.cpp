#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>

using namespace std;

int main()
{
    string t_string;
    vector<string> v_string;
    ifstream infile("data.txt");
    if(!infile)
    {
        cerr<<"Something is wrong in openning the file!"<<endl;
    }
    else
    {
        while (infile >> t_string)
        {
            v_string.push_back(t_string);
        }
        
    }

    for(auto &r : v_string)
    {
        cout<<r<<endl;
    }

    sort(v_string.begin(), v_string.end());
    for(auto &r : v_string)
    {
        cout<<r<<endl;
    }

    ofstream out_file("data_copy.txt");
    for(auto &r : v_string)
    {
        out_file<<r<<" ";
    }

    return 0;
}