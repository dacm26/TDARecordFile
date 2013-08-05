#ifndef TDAFILE_H
#define TDAFILE_H
#include <string>
#include <ios>
using namespace std;
class TDAFile
{
public:
	TDAFile();
	TDAFile(string,ios_base::openmode);
	~TDAFile();
	bool open(string,ios_base::openmode);
	bool close();
	bool trunc();
	int read(char*,int);
	int write(char*,int);
	bool flush();
	virtual bool seek();
	virtual int tell();
	bool isOpen();
	bool isOk();
	bool isBoF();
	bool isEoF();
private:
	string filename;
	int size;
	ios_base::openmode mode;
};
#endif