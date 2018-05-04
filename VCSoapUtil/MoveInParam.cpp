#include "MoveInParam.h"

#include <sstream>

#include "tinyxml2.h"

namespace VCSoapUtil {

	MoveInParam::MoveInParam()
	{
	}


	MoveInParam::~MoveInParam()
	{
	}

	std::string MoveInParam::ToXml() const {
		std::stringstream ss;

		ss << "<?xml version=\"1.0\" ?>";
		ss << "<ChipMOS><MSGINFO>";
		ss << "<ASSY_LOT>" << ASSY_LOT << "</ASSY_LOT>";
		ss << "<OPER>" << OPER << "</OPER>";
		ss << "<OP_NAME>" << OP_NAME << "</OP_NAME>";
		ss << "<ENTITY>" << ENTITY << "</ENTITY>";
		ss << "<RESULT></RESULT>" << "<RESULT_MESSAGE></RESULT_MESSAGE>" << "<PACKAGE_ID></PACKAGE_ID>";

		ss << "</MSGINFO></ChipMOS>";

		return ss.str();
	}

	bool MoveInParam::FromXml(const std::string xml, std::string errorMsg) {
		errorMsg = "";

		tinyxml2::XMLDocument xmlDoc;
		tinyxml2::XMLError rtCode = xmlDoc.Parse(xml.c_str());
		if (rtCode != tinyxml2::XMLError::XML_SUCCESS) {
			errorMsg = "Parse xml failed";
			return false;
		}

		tinyxml2::XMLNode* pNodeChipMOS = xmlDoc.FirstChildElement("ChipMOS");
		if (pNodeChipMOS == NULL) {
			errorMsg = "Missing element : ChipMOS";
			return false;
		}
		tinyxml2::XMLNode* pNodeMSGINFO = pNodeChipMOS->FirstChildElement("MSGINFO");
		if (pNodeMSGINFO == NULL) {
			errorMsg = "Missing element : MSGINFO";
			return false;
		}
		tinyxml2::XMLNode* pNode = pNodeMSGINFO->FirstChildElement("RESULT");
		if (pNode) {
			Result = pNode->ToText()->Value();
		}
		else {
			Result = "";
		}
		pNode = pNodeMSGINFO->FirstChildElement("RESULT_MESSAGE");
		if (pNode) {
			Result_Message = pNode->ToText()->Value();
		}
		else {
			Result_Message = "";
		}
		pNode = pNodeMSGINFO->FirstChildElement("PACKAGE_ID");
		if (pNode) {
			Package_ID = pNode->ToText()->Value();
		}
		else {
			Package_ID = "";
		}
		return true;
	}

}
