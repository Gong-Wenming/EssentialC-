#include <iostream>
//#include <cstdlib>

using namespace std;

const int seq_length = 18;
int main()
{
    int data_array[seq_length] = {
            1, 2, 3, //Fibonacci
            3, 4, 7, //Lucas
            2, 5, 12, //Pell
            3, 6, 10, //Triangular
            4, 9, 16, //Square
            5, 12, 22, //Pentagonal
        };
    string sqe_array[] = {
        "Fibonacci",
        "Lucas",
        "Pell",
        "Triangular",
        "Square",
        "Pentagonal"
    };
    
    int index = 0;

    bool next_seq = true;
    bool guess_again = true;
    bool guess_right = false;
    int guess_total_num = 0;

    while (next_seq == true)
    {
        while((guess_right == false) && (guess_again == true))
        {
            int guess_num = -1;
            cout<<"The data of the sequce is : "<<data_array[index]
                <<" "<<data_array[index+1]<<endl;
            cout<<"Please input your guess number:";
            cin>>guess_num;
            ++guess_total_num;

            if(guess_num == data_array[index+2])
            {
                cout<<"You are right!"<<endl;
                cout<<"The sequence is :"<<sqe_array[index/3]<<endl;
                cout<<"The total times you tried is： "<<guess_total_num<<endl;

                //guess_right = true;

                index += 3;
                guess_total_num =0;

                cout<<"Do you want to continue? (Y or y to continue)\n";
                 cout<<"your choice: ";
                char is_again;
                cin>>is_again;
                if(is_again == 'Y' || is_again == 'y')
                {
                    continue;
                }
                else
                {
                    next_seq = false;
                    break;
                }
            }
            else 
            {
                cout<<"You are wrong!\n";
                cout<<"Try again? (Y or y to continue)\n";
                
                cout<<"your choice: ";
                char is_again;
                cin>>is_again;
                if(is_again == 'Y' || is_again == 'y')
                {
                    continue;
                }
                else
                {
                    next_seq = false;
                    break;
                }
            }
        }


    }
    
}