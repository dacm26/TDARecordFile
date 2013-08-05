#include "TDAFile.h"
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;

TDAFile::TDAFile(){
}

TDAFile::~TDAFile(){
}

bool TDAFile::open(string name,ios_base::openmode modo){
	filename=name;
	mode=modo;
	file.open(name.c_str(), modo);
	if (file.is_open())
		return true;

	return false;
}

bool TDAFile::close(){
	if (!file.is_open())
		return false;
	
	if(file.rdstate()!= 0)
		return false;
	
	return true;
}

int TDAFile::read(char* buffer,int s){
	if (mode==ios_base::out)
		return -1;

	file.read(buffer,s);
	return file.gcount()
}

int TDAFile::write(const char* buffer,int s){
	return 0;
}

bool TDAFile::flush(){
	if (mode==ios_base::out)
	{
		file.flush();
		if(this->file.rdstate()!= 0)
		return false;

	}
	return false;
}

bool TDAFile::seek(int n,char s){
	if (mode==ios_base::in)//utilizariamos la libreria ifstream
	{
	}
	else if(mode==ios_base::out){//utilizariamos la libreria ofstream

	}
	return false;
}

int TDAFile::tell(int n,char s){
	if (mode==ios_base::in)//utilizariamos la libreria ifstream
	{
	}
	else if(mode==ios_base::out){//utilizariamos la libreria ofstream
	}
	return false;
}

bool TDAFile::isOpen(){
	if(file.is_open())
		return true;

	return false;
}

bool TDAFile::isOk(){
	if(file.good())
		return true;

	return false;
}

bool TDAFile::isBoF(){
	if (mode==ios_base::in)//utilizariamos la libreria ifstream
		if(file.tellg()==0)
			return true;

	else if(mode==ios_base::out)//utilizariamos la libreria ofstream
		if(file.tellp()==0)
			return true;

	return false;
}

bool TDAFile::isEoF(){
	if(file.eof())
		return true;
	return false;
}
