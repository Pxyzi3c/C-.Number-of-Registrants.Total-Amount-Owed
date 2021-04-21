#include <iostream>

using namespace std;

/*Harvy Jones Pontillas DICT 1-2*/
int main()
{
    //declare variables
    int num_ofRegistrants, totalFee;

    //input items
    cout << "NUMBER OF REGISTRANTS: ";
    cin >> num_ofRegistrants;

    //condition, total amount owed computation, and output
    if(num_ofRegistrants >= 1 && num_ofRegistrants <= 4)
    {
        totalFee = num_ofRegistrants * 500;
        cout << "FEE PER PERSON: P500"
             << "\nTOTAL AMOUNT OWED: P" <<totalFee;
    }
    else if(num_ofRegistrants >= 5 && num_ofRegistrants <= 10)
    {
        totalFee = num_ofRegistrants * 400;
        cout << "FEE PER PERSON: P400"
             << "\nTOTAL AMOUNT OWED: P" <<totalFee;
    }
    else if(num_ofRegistrants >= 11)
    {
        totalFee = num_ofRegistrants * 300;
        cout << "FEE PER PERSON: P300"
             << "\nTOTAL AMOUNT OWED: P" <<totalFee;
    }
    else if(num_ofRegistrants <=0)
    {
        cout << "\nINVALID INPUT!";
    }
    cout << endl;
    return 0;
}
