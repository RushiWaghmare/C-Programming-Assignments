#include<iostream>
using namespace std;

class BitCalculation
{
    public:
        int iValue1;
        int iValue2;

        //Constructor
        BitCalculation(int A, int B)
        {
            iValue1 = A;
            iValue2 = B;
        }

        //Behaviour
        void  CountBit()
        {
            int iMask = 0x1;
            int iResult = 0;
            int iCnt = 0;

            for(iCnt = 1; iCnt <= 32; iCnt ++)
            {
                if(iValue1 & iMask && iValue2 & iMask)
                {
                    cout<<"Postion of ON bit is "<<iCnt<<"\n";
                }

                iMask = iMask << 1;
            }
            
        }


};

int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iRet = 0;
    
 
    cout<<"Enter the 1st Number: \n";
    cin>>iNo1;
    cout<<"Enter the 2nd Number: \n";
    cin>>iNo2;

    BitCalculation aobj(iNo1, iNo2);
    aobj.CountBit();

}