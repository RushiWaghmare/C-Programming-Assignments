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
        bool  CountBit()
        {
            int iMask = 0x0900;
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
    bRet = aobj.CountBit();

    if(bRet == true)
    {
        cout<<"bit is on\n";
    }
    else{
        cout<<"bit is off\n";
    }
    return 0;
}