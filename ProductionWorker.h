// Specification file for the ProductionWorker Class
#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

/*
 *  The ProductionWorker class leverages single inheritance to extend the base Employee class,
 *  encapsulating additional state (shift, payRate) and member functions pertinent to production-floor staff.
 *  In simpler terms:
 *  ProductionWorker adds shift and hourly pay info to Employee and provides functions specific to factory workers.
 */
class ProductionWorker : public Employee
{
private:
    /*
     *  Primitive data member storing the worker’s shift code (1 = day, 2 = night).
     *  In simpler terms:
     *  Holds the shift (day or night) as a number.
     */
    int shift;

    /*
     *  Double-precision floating-point member variable to track compensation per hour.
     *  In simpler terms:
     *  Holds the worker’s hourly pay.
     */
    double payRate;

public:
    /*
     *  Default constructor initializes the derived class and zeros domain-specific members.
     *  In simpler terms:
     *  Makes a blank ProductionWorker with empty data.
     */
    ProductionWorker() : Employee() {
        shift = 0; payRate = 0.0;
    }

    /*
     *  Fully-qualified constructor relays name/date to base Employee and initializes the worker’s shift and pay rate.
     *  In simpler terms:
     *  Makes a worker with all info (name, date, shift, pay).
     */
    ProductionWorker(const string& aName, const string& aDate, int aShift, double aPayRate)
        : Employee(aName, aDate) {
        shift = aShift; payRate = aPayRate;
    }

    // Mutators

    /*
     *  Inline setter for the shift data member.
     *  In simpler terms:
     *  Lets you change the shift.
     */
    void setShift(int s);

    /*
     *  Inline setter for the payRate data member.
     *  In simpler terms:
     *  Lets you change the hourly pay.
     */
    void setPayRate(double r);

    /*
     *  Static factory method to instantiate a ProductionWorker object with interactive user input.
     *  In simpler terms:
     *  Lets the user create a new worker by answering questions.
     */
    static ProductionWorker *createNewProductionWorker();

    // Accessors

    /*
     *  Const-qualified accessor retrieves the shift code.
     *  In simpler terms:
     *  Gets the shift number.
     */
    [[nodiscard]] int getShiftNumber() const;

    /*
     *  Const-qualified accessor returns a string label for the current shift code.
     *  In simpler terms:
     *  Gets the shift as "Day" or "Night".
     */
    [[nodiscard]] string getShiftName() const;

    /*
     *  Const-qualified accessor returns the current hourly pay rate.
     *  In simpler terms:
     *  Gets the worker's pay.
     */
    [[nodiscard]] double getPayRate() const;

    /*
     *  Const-qualified member outputs all relevant ProductionWorker data to the standard output stream.
     *  In simpler terms:
     *  Prints the worker’s details to the screen.
     */
    void printWorkerData() const;

};

#endif
