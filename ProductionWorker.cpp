// Implementation file for the ProductionWorker class

#include "ProductionWorker.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Mutators

/*
 * Sets the worker’s shift (1 = day, 2 = night).
 * In simpler terms: Changes the worker’s shift.
 */
void ProductionWorker::setShift(int s)
{
    shift = s;
}

/*
 * Sets the worker’s hourly pay rate.
 * In simpler terms: Changes how much the worker is paid per hour.
 */
void ProductionWorker::setPayRate(double r)
{
    payRate = r;
}

// Accessors

/*
 * Returns the numeric shift code (1 = day, 2 = night).
 * In simpler terms: Gets the worker’s shift number.
 */
int ProductionWorker::getShiftNumber() const
{
    return shift;
}

/*
 * Converts the numeric shift to a string ("Day" or "Night").
 * In simpler terms: Gets the shift as text instead of a number.
 */
string ProductionWorker::getShiftName() const
{
    if (shift == 1)
        return "Day";
    else if (shift == 2)
        return "Night";
    else
        return "Unknown";
}

/*
 * Returns the worker’s hourly pay rate.
 * In simpler terms: Gets how much the worker earns per hour.
 */
double ProductionWorker::getPayRate() const
{
    return payRate;
}

/*
 * Displays all ProductionWorker information in formatted columns.
 * In simpler terms: Prints all the worker’s details, lined up neatly.
 */
void ProductionWorker::printWorkerData() const
{
    constexpr int labelWidth = 25;

    cout << left  << setw(labelWidth) << "Name:"            << right << getEmployeeName()    << endl;
    cout << left  << setw(labelWidth) << "Employee number:" << right << getEmployeeNumber()  << endl;
    cout << left  << setw(labelWidth) << "Hire date:"       << right << getHireDate()        << endl;
    cout << left  << setw(labelWidth) << "Shift:"           << right << getShiftName()       << endl;
    cout << left  << setw(labelWidth) << "Shift number:"    << right << getShiftNumber()     << endl;
    cout << left  << setw(labelWidth) << "Pay rate:"        << right << fixed << setprecision(2) << "$" << payRate << endl;
}

/*
 * Creates a new ProductionWorker object by prompting the user for data.
 * In simpler terms: Asks the user for info and builds a new worker.
 */
ProductionWorker *ProductionWorker::createNewProductionWorker()
{
    string name, date;
    int s;
    double rate;

    cout << "Enter name of new employee: ";
    getline(cin, name);

    cout << "Enter hire date of new employee: ";
    getline(cin, date);

    cout << "Enter shift for new employee (1 = day, 2 = night): ";
    cin >> s;
    while (s != 1 && s != 2)
    {
        cout << "Invalid shift. Enter 1 for day or 2 for night: ";
        cin >> s;
    }

    cout << "Enter hourly pay rate for new employee: ";
    cin >> rate;
    while (rate < 0)
    {
        cout << "Pay rate cannot be negative. Enter hourly pay rate: ";
        cin >> rate;
    }
    cin.ignore(); // Clear newline for next getline

    return new ProductionWorker(name, date, s, rate);
}
