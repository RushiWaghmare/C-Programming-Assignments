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
        int  CheakBit()
        {
            int iMask = 0x4f;
            int iResult = 0;

            iResult = iValue | iMask;

            return iResult;
            
        }


};

int main()
{
    int iNo = 0;
    int iRet = 0;
    
    cout<<"Enter the Number: \n";
    cin>>iNo;

    BitCalculation aobj(iNo);
    iRet = aobj.CheakBit();
    
    cout<<"Number after 1st 4 bit on: "<<iRet<<"\n";

    return 0;
}