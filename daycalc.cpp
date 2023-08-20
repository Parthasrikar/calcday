#include<iostream>
using namespace std;

int odInC (int x) {
    int ref = (x%400)/100;
    int od;
    switch (ref)
    {
    case 1:
        od = 5;
        break;
    case 2:
        od = 3;
        break;
    case 3:
        od = 1;
        break;
    case 0:
        od = 0;
        break;
    }
    return od;
}
int odInPy (int y) {
    int ref = y +(y/4);
    int od = ref % 7;
    return od;
}
int odInCy (int z) {
    int od;
    if (z == 0) {
        return 0;
    }
    else {
        switch (z)
        {
        case 1:
            od = 3;
            break;
        case 2:
            od = 3;   break;
        case 3:
            od = 6;   break;
        case 4:
            od = 8;   break;
        case 5:
            od = 11;  break;
        case 6:
            od = 13;  break;
        case 7:
            od = 16;  break;
        case 8:
            od = 19;  break;
        case 9:
            od = 21;  break;
        case 10:
            od = 24;  break;
        case 11:
            od = 26;  break;
        }
        return od%7;
    }
}
int odInCm (int d) {
    int od = d % 7;
    return od;
}
void day (int g) {
    switch (g)
    {
    case 1:
        cout    <<  "GIVEN DATE IS MONDAY\n";
        break;
    case 2:
        cout    <<  "GIVEN DATE IS TUESDAY\n";
    break;
    case 3:
        cout    <<  "GIVEN DATE IS WEDNESDAY\n";
        break;
    case 4:
        cout    <<  "GIVEN DATE IS THRUSDAY\n";
        break;
    case 5:
        cout    <<  "GIVEN DATE IS FRIDAY\n";
        break;
    case 6:
        cout    <<  "GIVEN DATE IS SATURDAY\n";
        break;
    case 0:
        cout    <<  "GIVEN DATE IS SUNDAY\n";
        break;
    }
}

int main() {
    cout    <<  "ENTER THE YEAR IN THE FORMAT DD/MM/YYYY\n";
    cout<<  "ENTER THE DATE DD\n";
    int date;
    cin >> date;
    cout    <<  "ENTER THE MONTH MM\n";
    int month;
    cin >> month;
    cout    <<  "ENTER THE YEAR YYYY\n";
    int year;
    cin >> year;
    int nood;
    if (year%100 != 0){
    nood = odInC(year/100) + odInPy((year%100)-1) + odInCy(month-1) + odInCm(date);
    day(nood%7);
    }
    else{
        nood = odInC((year-100)/100) + odInPy(100) + odInCy(month-1) + odInCm(date);
        day(nood%7);
    }
    return 0;
}