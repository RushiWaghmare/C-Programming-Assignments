#include<iostream>
using namespace std;

class BitCalculation
{
    public:
        int iValue1;
        int iPlace1;
        int iPlace2;

        //Constructor
        BitCalculation(int A, int B, int C)
        {
            iValue1 = A;
            iPlace1 = B;
            iPlace2 = C;
        }

        //Behaviour
        bool  CountBit()
        {
            int iMask1 = 0x1;
            int iMask2 = 0x1;
            int iFlag = 0;

            iMask1 = iMask1 << (iPlace1 - 1);
            iMask2 = iMask2 << (iPlace2 - 1);

            if((iValue1 & iMask1 )|| (iValue1 & iMask2))
                {
                   iFlag ++;
                }


            if(iFlag > 0)
            {
                return true;
            }
            else
            {
                return false;
            }
            
        }


};

int main()
{
    int iNo1 = 0, iPos1 = 0, iPos2 = 0;
    bool bRet = false;
    
 
    cout<<"Enter the 1st Number: \n";
    cin>>iNo1;
    cout<<"Enter the 1st position: \n";
    cin>>iPos1;
    cout<<"Enter the 2ndt position: \n";
    cin>>iPos2;

    BitCalculation aobj(iNo1, iPos1, iPos2);
    bRet = aobj.CountBit();

    if(bRet == true)
    {
        cout<<"TRUE\n";
    }
    else
    {
        cout<<"FALSE\n";
    }


    return 0;

}