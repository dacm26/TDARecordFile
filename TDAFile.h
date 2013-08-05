#ifndef TDAFILE_H
#define TDAFILE_H
#include <string>
#include <ios>
#include <fstream>
using namespace std;
class TDAFile
{
public:
	TDAFile();
	~TDAFile();
	bool open(string,ios_base::openmode);
	bool close();
	int read(char*,int);
	int write(char*,int);
	bool flush();
	virtual bool seek(int,char);
	virtual int tell(int,char);
	bool isOpen();
	bool isOk();
	bool isBoF();
	bool isEoF();
private:
	fstream file;
	string filename;
	ios_base::openmode mode;
};
#endif