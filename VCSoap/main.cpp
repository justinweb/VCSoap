#include "..\VCSoapUtil\soapOuterRCAVMvouServiceSoapProxy.h"
#include "..\VCSoapUtil\OuterRCAVMvouServiceSoap.nsmap"
#include "..\VCSoapUtil\soapOuterRCAVMvinServiceSoapProxy.h"
//#include "..\VCSoapUtil\OuterRCAVMvinServiceSoap.nsmap"
#include <cstdio>
int main()
{
}

void TestMoveIn()
{
	OuterRCAVMvinServiceSoapProxy service;
	_VC1__DoOuterRCAVMvin inParam;
	_VC1__DoOuterRCAVMvinResponse output;
	std::string xmlInputData; // �o�شN�n�̹�赹����ƶ񨺥�xml�榡�F
	inParam.xmlInput = &xmlInputData;
	service.DoOuterRCAVMvin(&inParam, output);
	service.destroy();
}

void TestMoveOut()
{
	OuterRCAVMvouServiceSoapProxy service;
	_VC1__DoOuterRCAVMvou inParam;
	_VC1__DoOuterRCAVMvouResponse output;
	std::string xmlInputData; // �o�شN�n�̹�赹����ƶ񨺥�xml�榡�F
	inParam.xmlInput = &xmlInputData;
	service.DoOuterRCAVMvou(&inParam, output);
	service.destroy();
}