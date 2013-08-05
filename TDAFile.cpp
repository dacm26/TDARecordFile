#include "TDAFile.h"
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;

TDAFile::TDAFile(){
	filename="\0";
	size=0;
	mode='\0';
}

TDAFile::TDAFile(string name,char modo){
	filename=name;
	mode=modo;
}

TDAFile::~TDAFile(){

}

bool TDAFile::open(string name,char modo){
	return false;
}

bool TDAFile::close(){
	return false;
}

bool TDAFile::trunc(){
	return false;
}

int TDAFile::read(char* buffer,int s){
	return 0;
}

int TDAFile::write(char* buffer,int s){
	return 0;
}

bool TDAFile::flush(){
	return false;
}

bool TDAFile::seek(){
	return false;
}

int TDAFile::tell(){
	return false;
}

bool TDAFile::isOpen(){
	return false;
}

bool TDAFile::isOk(){
	return false;
}

bool TDAFile::isBoF(){
	return false;
}

bool TDAFile::isEoF(){
	return false;
}
