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
            int iMask = 0x4000; // 15th bit
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


};


int main()
{
    int iNo = 0;
    bool bRet = false;
    
    cout<<"Enter the Number: \n";
    cin>>iNo;

    //bRet = CheakBit(iNo);

    BitCalculation aobj(iNo);
    bRet = aobj. CheakBit();

    if( bRet == true )
    {
        cout<<"15th Bit is ON \n";
    }
    else
    {
        cout<<"15th Bit is OFF \n";
    }

    return 0;
}