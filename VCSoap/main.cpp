#include "..\VCSoapUtil\soapOuterRCAVMvouServiceSoapProxy.h"
#include "..\VCSoapUtil\OuterRCAVMvouServiceSoap.nsmap"
#include "..\VCSoapUtil\soapOuterRCAVMvinServiceSoapProxy.h"
//#include "..\VCSoapUtil\OuterRCAVMvinServiceSoap.nsmap"

#include "../VCSoapUtil/MoveInParam.h"
#include "../VCSoapUtil/MoveOutParam.h"
#include "../VCSoapUtil/XMLHelper.h"

#include <cstdio>
#include <sstream>

void TestParseMinOutput() {
	std::string xmlFilename("..\\VCSoapData\\MinOutput.xml");
	FILE* pFile = NULL;
	::fopen_s(&pFile, xmlFilename.c_str(), "r+");
	if (pFile == NULL) {
		// error
		printf("Can not open file(%s)\r\n", xmlFilename.c_str());
	}
	else {
		std::stringstream ss;
		char buffer[1025];
		int readBytes = 0;		
		do{
			readBytes = fread(buffer, 1, 1024, pFile);
			buffer[readBytes] = '\0';
			ss << std::string(buffer);			
		} while (readBytes >= 1024);
		::fclose(pFile);

		VCSoapUtil::MoveInParam min;
		std::string errorMsg;
		if (min.FromXml(ss.str(), errorMsg) == false) {
			printf("MoveInParam::FromXml() failed,Msg=%s\r\n", errorMsg.c_str());
		}
		else {
			printf("MoveInParam Result(%s) ResultMessage(%s) PackageID(%s)\r\n", min.Result.c_str(), min.Result_Message.c_str(), min.Package_ID.c_str());
		}
	}
}

void TestParseMoutOutput() {
	std::string xmlFilename("..\\VCSoapData\\MoutOutput.xml");
	FILE* pFile = NULL;
	::fopen_s(&pFile, xmlFilename.c_str(), "r+");
	if (pFile == NULL) {
		// error
		printf("Can not open file(%s)\r\n", xmlFilename.c_str());
	}
	else {
		std::stringstream ss;
		char buffer[1025];
		int readBytes = 0;
		do {
			readBytes = fread(buffer, 1, 1024, pFile);
			buffer[readBytes] = '\0';
			ss << std::string(buffer);
		} while (readBytes >= 1024);
		::fclose(pFile);

		VCSoapUtil::MoveOutParam mout;
		std::string errorMsg;
		if (mout.FromXml(ss.str(), errorMsg) == false) {
			printf("MoveOutParam::FromXml() failed,Msg=%s\r\n", errorMsg.c_str());
		}
		else {
			printf("MoveOutParam Result(%s) ResultMessage(%s) \r\n", mout.Result.c_str(), mout.Result_Message.c_str());
		}
	}
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

	if (VCSoapUtil::XMLHelper::WriteXmlFile(*(output.DoOuterRCAVMvinResult), "TestMoveIn_output_1.xml", errorMsg) == false) {
		printf("TestMoveIn save output failed,Msg=%s\r\n", errorMsg.c_str());
	}	

	// 如果要指定呼叫的網址的話可以用
	std::string url("http://tncmes07/COG/ChipMOS/WebService/OuterRCAVMvinService.asmx"), function("http://tempuri.org/DoOuterRCAVMvin");
	service.DoOuterRCAVMvin(url.c_str(), function.c_str(), &inParam, output);

	if (VCSoapUtil::XMLHelper::WriteXmlFile(*(output.DoOuterRCAVMvinResult), "TestMoveIn_output_2.xml", errorMsg) == false) {
		printf("TestMoveIn save output failed,Msg=%s\r\n", errorMsg.c_str());
	}
	
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

	if (VCSoapUtil::XMLHelper::WriteXmlFile(*(output.DoOuterRCAVMvouResult), "TestMoveOut_output_1.xml", errorMsg) == false) {
		printf("TestMoveOut save output failed,Msg=%s\r\n", errorMsg.c_str());
	}

	// 如果要指定呼叫的網址的話可以用
	std::string url("http://tncmes07/COG/ChipMOS/WebService/OuterRCAVMvouService.asmx"), function("http://tempuri.org/DoOuterRCAVMvou");
	service.DoOuterRCAVMvou(url.c_str(), function.c_str(), &inParam, output);

	if (VCSoapUtil::XMLHelper::WriteXmlFile(*(output.DoOuterRCAVMvouResult), "TestMoveOut_output_1.xml", errorMsg) == false) {
		printf("TestMoveOut save output failed,Msg=%s\r\n", errorMsg.c_str());
	}
		
	if (mout.FromXml(output.DoOuterRCAVMvouResult->c_str(), errorMsg) == false) {
		printf("Mout parse result failed,Msg=%s\r\n", errorMsg.c_str());
	}
	else {
		printf("Movein result(%s) msg(%s)\r\n", mout.Result.c_str(), mout.Result_Message.c_str());
	}

	service.destroy();
}

void TestCreateXml() {
	VCSoapUtil::MoveOutParam mout;
	mout.ASSY_LOT = "aa";

	VCSoapUtil::MoveOutParam::FailInfo failInfo;
	failInfo.Fail_Code = "SS";
	failInfo.Fail_Qty = 10;
	mout.FailInfos_.push_back(failInfo);

	mout.TotalQuantity = 10;
	mout.PassQuantity = 5;
	mout.FailQuantity = 5;

	std::string xmlData = mout.ToXml();
	std::string errorMsg;

	if (VCSoapUtil::XMLHelper::WriteXmlFile( xmlData, "..\\VCSoapData\\MoveOut.xml", errorMsg) == false) {
		printf("MoveOut save output failed,Msg=%s\r\n", errorMsg.c_str());
	}

	VCSoapUtil::MoveInParam min;
	min.ASSY_LOT = "LOT1";
	min.ENTITY = "OVC";
	min.OPER = "TTSS";

	xmlData = min.ToXml();

	if (VCSoapUtil::XMLHelper::WriteXmlFile(xmlData, "..\\VCSoapData\\MoveIn.xml", errorMsg) == false) {
		printf("MoveIn save output failed,Msg=%s\r\n", errorMsg.c_str());
	}
}

int main()
{
	// 測試解析 Min 的輸出結果
	//TestParseMinOutput();
	// 測試解析 Mout 的輸出結果
	//TestParseMoutOutput();

	//TestMoveIn();
	//TestMoveOut();

	TestCreateXml();

}
