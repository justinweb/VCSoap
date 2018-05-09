#include "MoveOutParam.h"

#include <sstream>

#include "tinyxml2.h"
#include "XMLHelper.h"

namespace VCSoapUtil {

	MoveOutParam::MoveOutParam()
	{
	}


	MoveOutParam::~MoveOutParam()
	{
	}

	std::string MoveOutParam::ToXml() const {
		std::stringstream ss;

		ss << "<?xml version=\"1.0\"?>";
		ss << "<ChipMOS><MSGINFO>";

		ss << "<ASSY_LOT>" << ASSY_LOT << "</ASSY_LOT>";
		ss << "<OPER>" << OPER << "</OPER>";
		ss << "<OP_NAME>" << OP_NAME << "</OP_NAME>";
		ss << "<ENTITY>" << ENTITY << "</ENTITY>";

		ss << "<TOTAL_QUANTITY>" << TotalQuantity << "</TOTAL_QUANTITY>";
		ss << "<PASS_QUANTITY>" << PassQuantity << "</PASS_QUANTITY>";
		ss << "<FAIL_QUANTITY>" << FailQuantity << "</FAIL_QUANTITY>";

		ss << "<RESULT></RESULT>" << "<RESULT_MESSAGE></RESULT_MESSAGE>";

		ss << "</MSGINFO>";

		ss << "<FAILINFO>";

		for (auto itrFailInfo = FailInfos_.begin(); itrFailInfo != FailInfos_.end(); ++itrFailInfo) {
			ss << itrFailInfo->ToXml();
		}

		ss << "</FAILINFO>";

		ss << "</ChipMOS>";

		return ss.str();
	}

	bool MoveOutParam::FromXml(const std::string& xml, std::string& errorMsg) {
		errorMsg = "";

		tinyxml2::XMLDocument xmlDoc;
		tinyxml2::XMLError rtCode = xmlDoc.Parse(xml.c_str());
		if (rtCode != tinyxml2::XMLError::XML_SUCCESS) {
			errorMsg = "Parse xml failed";
			return false;
		}
		
		tinyxml2::XMLElement* pNodeChipMOS = xmlDoc.FirstChildElement("ChipMOS");
		if (pNodeChipMOS == NULL) {
			errorMsg = "Missing element : ChipMOS";
			return false;
		}
		tinyxml2::XMLElement* pNodeMSGINFO = pNodeChipMOS->FirstChildElement("MSGINFO");
		if (pNodeMSGINFO == NULL) {
			errorMsg = "Missing element : MSGINFO";
			return false;
		}

		Result = XMLHelper::GetElementText(pNodeMSGINFO, "RESULT");
		Result_Message = XMLHelper::GetElementText(pNodeMSGINFO, "RESULT_MESSAGE");
		
		return true;
	}

	std::string MoveOutParam::FailInfo::ToXml() const {
		std::stringstream ss;

		ss << "<FAIL_CODE>" << Fail_Code << "</FAIL_CODE>";
		ss << "<FAIL_QTY>" << Fail_Qty << "</FAIL_QTY>";

		return ss.str();
	}

}
