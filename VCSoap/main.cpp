#include "..\VCSoapUtil\soapOuterRCAVMvouServiceSoapProxy.h"
#include "..\VCSoapUtil\OuterRCAVMvouServiceSoap.nsmap"
#include "..\VCSoapUtil\soapOuterRCAVMvinServiceSoapProxy.h"
//#include "..\VCSoapUtil\OuterRCAVMvinServiceSoap.nsmap"

#include "../VCSoapUtil/MoveInParam.h"
#include "../VCSoapUtil/MoveOutParam.h"

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

	VCSoapUtil::MoveInParam min;
	min.ASSY_LOT = "LOT1";
	min.ENTITY = "OVC";
	min.OPER = "TTSS";

	xmlInputData = min.ToXml();

	inParam.xmlInput = &xmlInputData;
	service.DoOuterRCAVMvin(&inParam, output);
	// �p�G�n���w�I�s�����}���ܥi�H��
	std::string url("http://tncmes07/COG/ChipMOS/WebService/OuterRCAVMvinService.asmx"), function("http://tempuri.org/DoOuterRCAVMvin");
	service.DoOuterRCAVMvin(url.c_str(), function.c_str(), &inParam, output);

	std::string errorMsg;
	if (min.FromXml(output.DoOuterRCAVMvinResult->c_str(), errorMsg) == false) {
		printf("Parse result failed, msg=%s\r\n", errorMsg.c_str());
	}
	else {
		printf("Movein result(%s) msg(%s)\r\n", min.Result.c_str(), min.Result_Message.c_str());
	}
	service.destroy();
}

void TestMoveOut()
{
	OuterRCAVMvouServiceSoapProxy service;
	_VC1__DoOuterRCAVMvou inParam;
	_VC1__DoOuterRCAVMvouResponse output;
	std::string xmlInputData; // �o�شN�n�̹�赹����ƶ񨺥�xml�榡�F

	VCSoapUtil::MoveOutParam mout;
	mout.ASSY_LOT = "aa";

	// �[�J���յ��G�A�i�[�J�h��
	VCSoapUtil::MoveOutParam::FailInfo failInfo;
	failInfo.Fail_Code = "SS";
	failInfo.Fail_Qty = 10;
	mout.FailInfos_.push_back(failInfo);

	mout.TotalQuantity = 10;
	mout.PassQuantity = 5;
	mout.FailQuantity = 5;

	xmlInputData = mout.ToXml();

	inParam.xmlInput = &xmlInputData;
	service.DoOuterRCAVMvou(&inParam, output);
	// �p�G�n���w�I�s�����}���ܥi�H��
	std::string url("http://tncmes07/COG/ChipMOS/WebService/OuterRCAVMvouService.asmx"), function("http://tempuri.org/DoOuterRCAVMvou");
	service.DoOuterRCAVMvou( url.c_str(), function.c_str(), &inParam, output);

	std::string errorMsg;
	if (mout.FromXml(output.DoOuterRCAVMvouResult->c_str(), errorMsg) == false) {
		printf("Mout parse result failed,Msg=%s\r\n", errorMsg.c_str());
	}
	else {
		printf("Movein result(%s) msg(%s)\r\n", mout.Result.c_str(), mout.Result_Message.c_str());
	}

	service.destroy();
}