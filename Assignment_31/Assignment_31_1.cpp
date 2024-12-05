#include<iostream>
using namespace std;

class String
{
    String()
    {
        char *
    }









        void Reverse(char *str)
        {
            char *cStart = str;
            char *cEnd = str; 
            char cTemp = '\0';

            while(*cEnd != '\0')
            {
                cEnd ++;
            }

            cEnd --;

            while(cStart < cEnd)
            {
                cTemp = *cStart;
                *cStart = *cEnd;
                *cEnd = cTemp;

                cStart ++;
                cEnd --;
            }

            
        }

};


int main()
{
    char Arr[30];

    cout<<"Enter String: \n";
    cin.getline(Arr,30);

    Reverse(Arr);

    cout<<"String after reversal: \n"<<Arr<<"\n";


    return 0;


}