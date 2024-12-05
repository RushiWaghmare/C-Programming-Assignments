#include<iostream>
using namespace std;

class BitCalculation
{
    public:
        int iValue;
        int iStart;
        int iEnd;

        //Constructor
        BitCalculation(int A, int B, int C)
        {
            iValue = A;
            iStart = B;
            iEnd = C;
        }

        //Behaviour
        int  CountBit()
        {
            int iMask = 0x0;
            int iResult = 0;
            int iCnt = 0;

            for(iCnt = iStart; iCnt <= iEnd; iCnt ++)
            {
                iMask = iMask | (0x1 << (iCnt - 1));
                
            }

            iResult = iValue ^ iMask;

            return iResult;
            
        }


};

int main()
{
    int iNo1 = 0, iPos1 = 0, iPos2 = 0;
    int iRet = 0;
    
 
    cout<<"Enter the 1st Number: \n";
    cin>>iNo1;
    cout<<"Enter the 1st position of range: \n";
    cin>>iPos1;
    cout<<"Enter the last position of range: \n";
    cin>>iPos2;

    BitCalculation aobj(iNo1, iPos1, iPos2);
    iRet = aobj.CountBit();

    cout<<"Numbr after Toggle bit form range "<<iPos1<<" to "<<iPos2<<" is: "<<iRet<<"\n";

    return 0;

}