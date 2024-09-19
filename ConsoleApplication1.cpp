#include <iostream>
using namespace std;

struct students {
    int RollNo;
    int English;
    int Math;
    int Urdu;
    int result;
};
int main()
{   
    int stdSize;
    cout << "Enter how many student you want to have ";
    cin >> stdSize;
    students* s = new students[stdSize];

    s[0].RollNo = 1, s[0].English = 110, s[0].Math = 30, s[0].Urdu = 40;
    s[0].result = s[0].English + s[0].Math + s[0].Urdu;

    s[1].RollNo = 2, s[1].English = 10, s[1].Math = 130, s[1].Urdu = 140;
    s[1].result = s[1].English + s[1].Math + s[1].Urdu;

    s[2].RollNo = 3, s[2].English = 10, s[2].Math = 230, s[2].Urdu = 240;
    s[2].result = s[2].English + s[2].Math + s[2].Urdu;

    cout << "Enter Roll Number from 1 to 3 to print Marksheet";
    int searchRollNum;
    cin >> searchRollNum;
   
    for (int i = 0; i < 3; i++) {
        if (searchRollNum == s[i].RollNo) {
            cout << " Student " << s[i].RollNo << " English Mark is " << s[i].English << endl;
            cout << " Student " << s[i].RollNo << " English Mark is " << s[i].Math << endl;
            cout << " Student " << s[i].RollNo << " English Mark is " << s[i].Urdu << endl;
            cout << " Student " << s[i].RollNo << " Result Mark is " << s[i].result << endl;
        }
    }
}
