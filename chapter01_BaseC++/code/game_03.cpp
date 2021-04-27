#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

//const int seq_length =18;
const int seq_num = 15;
const int display_num = 3;

int main()
{
    srand((unsigned)time(NULL));
    
    vector<int> fibonacci(seq_num), lucas(seq_num), triangular(seq_num), square(seq_num), pentagonal(seq_num);

    int idx_seq = 2;
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    while(idx_seq < seq_num)
    {
        fibonacci[idx_seq] = fibonacci[idx_seq-1] + fibonacci[idx_seq-2];
        ++idx_seq;
    }

    idx_seq = 2;
    lucas[0] = 1;
    lucas[1] = 3;
    while(idx_seq < seq_num)
    {
        lucas[idx_seq] = lucas[idx_seq-1] + lucas[idx_seq-2];
        ++idx_seq;
    }

    idx_seq = 2;
    triangular[0] = 1;
    triangular[1] = 3;
    while(idx_seq < seq_num)
    {
        int sub_num = triangular[idx_seq-1] - triangular[idx_seq-2] + 1; 
        triangular[idx_seq] =  triangular[idx_seq-1] + sub_num;
        ++idx_seq;
    }

    idx_seq = 0;
    while (idx_seq < seq_num)
    {
        square[idx_seq] = (idx_seq + 1) * (idx_seq + 1);
        ++idx_seq;
    }

    idx_seq = 1;
    pentagonal[0] = 1;
    int sub_idx = 4;
    int sub_stable = 3;
    while(idx_seq < seq_num)
    {
        pentagonal[idx_seq] = pentagonal[idx_seq-1] + sub_idx;
        ++idx_seq;
        sub_idx = sub_idx + sub_stable;
    }

    const int seq_cnt = 5;
    vector<int> *seq_array[seq_cnt] = 
    {
        &fibonacci, &lucas, &triangular,
        &square, &pentagonal
    };

    vector<int> *pv = 0;

    int index = rand() % seq_cnt;

    pv = seq_array[index];

    bool next_seq = true;
    bool is_right = false;
    bool continue_guess = true;
    int guess_num = 0;

    while (pv && next_seq == true)
    {
        int index_array = rand() % (seq_num - display_num);
        cout<<"The seqeue's elements are: ";
        cout<<(*pv)[index_array]<<" "<<(*pv)[index_array+1]<<" "<<(*pv)[index_array+2]<<endl;

        while(is_right == false && continue_guess == true)
        {
            cout<<"What's the next number?\n";
            cout<<"Input your answer: ";
            int answer = -1;
            cin>>answer;
            ++guess_num;
            
            if(answer == (*pv)[index_array+display_num])
            {
                is_right = true;
                cout<<"Good!Your answer is right!\n";
                cout<<"The times you have tried is "<<guess_num<<endl;
            }
            else
            {
                cout<<"Pitty!Your answer is wrong!\n";
                cout<<"Do you want to guess again?(Y or y to continue,else to give up)\n";
                char select;
                cin>>select;
                if(select == 'Y' || select == 'y')
                {
                    ;
                }
                else
                {
                    continue_guess = false;
                }
            }
        }
        cout<<"Do you want to gusee another seqeue?(Y or y to continue,else to give up)\n";
        char select;
        cin>>select;
        if(select == 'Y' || select == 'y')
        {
            is_right = false;
            continue_guess = true;
            int index = rand() % seq_cnt;
            pv = seq_array[index];
            guess_num = 0;
        }
        else
        {
            cout<<"Welcome to play in the next time!\n";
            next_seq = false;
        }
    }
    

    return 0;
}

// for(auto &r : fibonacci)
    //     cout<<r<<" ";
    // cout<<endl;