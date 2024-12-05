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
            int iMask = 0x80000001;
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

   BitCalculation aobj(iNo);
    bRet = aobj. CheakBit();;

    if( bRet == true )
    {
        cout<<"1th, 32th bits are ON \n";
    }
    else
    {
        cout<<"1th, 32th & 9th bits are OFF \n";
    }

    return 0;
}