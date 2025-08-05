/*
    Author      : Sauel Almonte
    Date        : August 5th, 2025
    Due Date    : August 5th, 2025
    Course      : CSC 237
    Lab         : 15a – Inheritance
    Program     : Production Worker Management System

    Description:
        This program manages a list of production worker employees using
        inheritance in C++. The user can add new production workers,
        each with name, hire date, shift (day/night), and hourly pay rate.

        All employees receive a unique, sequential employee number
        automatically assigned at creation. The user interacts with the
        system through simple commands to add workers, view all details,
        print help, or quit the program.

        The program demonstrates single inheritance, encapsulation, use
        of static and dynamic member functions, and dynamic memory
        management in C++.
*/

#include <iostream>
#include <vector>
#include "ProductionWorker.h"
#include "PrintHelpAndBanner.h"

using namespace std;

/*
 * Entry point for the Production Worker Management System. Handles user commands and manages ProductionWorker objects.
 * In simpler terms: This is the main code that runs the whole program and responds to user actions.
 */
int main()
{
    /*
     * Dynamic container for storing pointers to ProductionWorker objects created during program execution.
     * In simpler terms: List that keeps track of all workers the user adds.
     */
    vector<ProductionWorker*> workers;

    /*
     * Stores the current command entered by the user.
     * In simpler terms: Keeps what the user typed as their command.
     */
    char command;

    /*
     * Control flag for the main command loop.
     * In simpler terms: Decides if the program should keep running.
     */
    bool running = true;

    printBanner();

    cout << "Enter command (or 'h' for help): ";
    while (running && cin >> command)
    {
        cin.ignore(); // Clear newline after command

        /*
         * Command 'c': Instantiates a new ProductionWorker and adds it to the container.
         * In simpler terms: When the user types 'c', create a new worker and remember it.
         */
        if (command == 'c')
        {
            ProductionWorker *pw = ProductionWorker::createNewProductionWorker();
            workers.push_back(pw);
        }
        /*
         * Command 'h': Prints help text to the console.
         * In simpler terms: When the user types 'h', show instructions.
         */
        else if (command == 'h')
        {
            printHelp();
        }
        /*
         * Command 'p': Iterates through all workers and prints their data, or notifies if none exist.
         * In simpler terms: When the user types 'p', show all workers’ details, or say none exist.
         */
        else if (command == 'p')
        {
            if (workers.empty())
            {
                cout << "No ProductionWorker objects created yet.\n";
            }
            else
            {
                for (ProductionWorker* worker : workers)
                {
                    worker->printWorkerData();
                    cout << endl;
                }
            }
        }
        /*
         * Command 'q': Signals the loop to end and exit the program.
         * In simpler terms: When the user types 'q', stop running the program.
         */
        else if (command == 'q')
        {
            running = false;
        }
        /*
         * Any unrecognized command triggers an error message.
         * In simpler terms: If the user types something else, tell them it’s not a valid command.
         */
        else
        {
            cout << "Invalid command. Type 'h' for help.\n";
        }

        if (running)
            cout << "Enter command (or 'h' for help): ";
    }

    /*
     * Iterates through the vector to free dynamically allocated ProductionWorker objects.
     * In simpler terms: Deletes all workers from memory before quitting.
     */
    for (ProductionWorker* worker : workers)
        delete worker;

    printOutro();

    return 0;
}
