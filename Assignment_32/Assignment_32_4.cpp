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
            int iMask = 0x01c0;
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
    bRet = aobj. CheakBit();

    if( bRet == true )
    {
        cout<<"7th, 8th & 9th bits are ON \n";
    }
    else
    {
        cout<<"7th, 8th & 9th bits are OFF \n";
    }

    return 0;
}