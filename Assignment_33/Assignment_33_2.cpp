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
        bool CheakBit()
        {
            int iMask = 0x80000001; // 7th bit
            int iResult = 0;

            iResult = iValue & iMask;

            if(iResult == iMask)
            {
                return true;
            }

            else 
            {
                return false;
            }

        }

        int ModifyBit()
        {
            int iMask = 0xfdbf;
            int iResult = 0;

            // for 7th & 10th bit
            
            iResult = iValue & iMask;

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
    iRet = aobj.ModifyBit();
    
    cout<<"Number after 7th & 10th bit OFF: "<<iRet<<"\n";

    return 0;
}