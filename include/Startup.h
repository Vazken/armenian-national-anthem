#ifndef STARTUP_H
#define STARTUP_H
#include <iostream>
#include <windows.h>
#include <string>
#include <libgen.h>
using namespace std;

class Startup
{
    public:
        Startup();
        virtual ~Startup();
        static string GetOurPath(const bool append_separator);
        static void copyFile(char*);
        static void addToRegistry(char*);
    protected:

    private:
};

#endif // STARTUP_H
