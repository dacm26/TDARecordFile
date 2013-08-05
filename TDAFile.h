#ifndef TDAFILE_H
#define TDAFILE_H
#include <string>
using namespace std;
class TDAFile
{
public:
	TDAFile();
	TDAFile(string,char);
	~TDAFile();
	bool open(string,char);
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
	char mode;
};
#endif