#include <iostream>
#include <iomanip>
using namespace std;

void printBanner()
{
    constexpr int bannerWidth = 60;

    cout << setfill('*') << setw(bannerWidth) << " " << endl;
    cout << setfill(' ') << setw((bannerWidth + 13) / 2) << "Welcome to" << endl;
    cout << setw((bannerWidth + 32) / 2) << "Production Worker Management System" << endl;
    cout << setfill('*') << setw(bannerWidth) << " "
        << setfill(' ') << endl;
}

void printHelp()
{
    cout << "Supported commands:\n";
    cout << "    h   print help text.\n";
    cout << "    c   create a new ProductionWorker object.\n";
    cout << "    p   print ProductionWorker information.\n";
    cout << "    q   quit (end the program).\n";
}

void printOutro()
{
    const int bannerWidth = 60;
    cout << setfill('*') << setw(bannerWidth) << "" << endl;
    cout << setfill(' ') << setw((bannerWidth + 21) / 2) << "Thank you for using" << endl;
    cout << setw((bannerWidth + 32) / 2) << "Production Worker Management System" << endl;
    cout << setfill('*') << setw(bannerWidth) << "" << endl;
}