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
	std::string xmlInputData; // 這裏就要依對方給的資料填那份xml格式了

	VCSoapUtil::MoveInParam min;
	min.ASSY_LOT = "LOT1";
	min.ENTITY = "OVC";
	min.OPER = "TTSS";

	xmlInputData = min.ToXml();

	inParam.xmlInput = &xmlInputData;
	service.DoOuterRCAVMvin(&inParam, output);

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
	std::string xmlInputData; // 這裏就要依對方給的資料填那份xml格式了

	VCSoapUtil::MoveOutParam mout;
	mout.ASSY_LOT = "aa";

	// 加入測試結果，可加入多組
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

	std::string errorMsg;
	if (mout.FromXml(output.DoOuterRCAVMvouResult->c_str(), errorMsg) == false) {
		printf("Mout parse result failed,Msg=%s\r\n", errorMsg.c_str());
	}
	else {
		printf("Movein result(%s) msg(%s)\r\n", mout.Result.c_str(), mout.Result_Message.c_str());
	}

	service.destroy();
}