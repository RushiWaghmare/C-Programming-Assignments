#include<iostream>
using namespace std;

class BitCalculation
{
    public:
        int iValue;

        //Constructor
        BitCalculation(int A)
        {
            iValue = A; 
        }

        //Behaviour
        int  CountBit()
        {
            int iMask = 0x1;
            int iResult = 0;
            int iCnt = 0;
            int iCount = 0;

            for(iCnt = 1; iCnt <= 32; iCnt ++)
            {
                if(iValue & iMask )
                {
                    iCount++;
                }

                iMask = iMask << 1;
            }

            return iCount;
            
        }

};

int main()
{
    int iNo = 0;
    int iRet = 0;
    
 
    cout<<"Enter the Number: \n";
    cin>>iNo;

    BitCalculation aobj(iNo);
    iRet = aobj.CountBit();

    cout<<"Count of ON(1) bit "<<iRet<<"\n";
    return 0;
}