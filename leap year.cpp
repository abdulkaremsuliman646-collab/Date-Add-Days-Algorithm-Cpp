#include <iostream>
#include <string>
using namespace std;

struct structadd {
    short Day;
    short Month;
    short Year;
};

bool NumberOfDaysInAYear(short Year)
{
    return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    short NumberOfDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return (Month == 2) ? (NumberOfDaysInAYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

short ReadDay()
{
   
    
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short month;
    cout << "Enter a Month (1-12): ";
    cin >> month;
    return month;
}

short ReadYear()
{
    short year;
    cout << "Enter a Year: ";
    cin >> year;
    return year;
}
structadd readfulldata() {
    structadd data;
    data.Day = ReadDay();
    data.Month = ReadMonth();
    data.Year = ReadYear();
    return data;
}
short readaddDay()
{
    short addday;
    cout << " How many days to add : ";
    cin >> addday;
    return addday;

}

short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month, short Year)
{
    short TotalDays = 0;
    for (int i = 1; i <= Month - 1; i++)
    {
        TotalDays += NumberOfDaysInAMonth(i, Year);
    }
    TotalDays += Day;
    return TotalDays;
}

structadd DateAddDays(short Days, structadd Date)
{
    short RemainingDays = Days + NumberOfDaysFromTheBeginingOfTheYear(Date.Day, Date.Month,Date.Year);
    short MonthDays = 0;
    Date.Month = 1;
    while (true)
    {
        MonthDays = NumberOfDaysInAMonth(Date.Month, Date.Year);
        if (RemainingDays > MonthDays)
        {
            RemainingDays -= MonthDays;
            Date.Month++;
            if (Date.Month > 12)
            {
                Date.Month = 1;
                Date.Year++;
            }
        }
        else
        {
            Date.Day = RemainingDays;
            break;
        }
    }
    return Date;
}


void valdnum(short Year, short Month, short Day, short add) {
  
    cout << "add are [" << add  << "] date after add is : "
        << Day << "/" << Month << "/" << Year;
}
int main()
{
    structadd data = readfulldata();
    short day = readaddDay();

    data = DateAddDays(day, data);
    cout << "\nDate after adding [" << day << "] days is: ";
    cout << data.Day << "/" << data.Month << "/" << data.Year;
        
  
    system("pause>0");
    return 0;
}