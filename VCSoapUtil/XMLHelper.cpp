#include "XMLHelper.h"

#include <sstream>

namespace VCSoapUtil {

	XMLHelper::XMLHelper()
	{
	}


	XMLHelper::~XMLHelper()
	{
	}

	std::string XMLHelper::GetElementText(tinyxml2::XMLElement* pElement, const std::string& elementName) {
		std::string result;
		tinyxml2::XMLElement* pNode = pElement->FirstChildElement(elementName.c_str());
		if (pNode) {
			const char* textNode = pNode->GetText();
			if (textNode != NULL)
				result = textNode;			
		}
		return result;
	}

	bool XMLHelper::WriteXmlFile(const std::string& xml, const std::string& filename, std::string& errorMsg) {
		errorMsg = "";

		FILE* pFile = NULL;
		fopen_s(&pFile, filename.c_str(), "a+");
		if (pFile == NULL) {
			errorMsg = "open file failed";
			return false;
		}
		else {
			fwrite(xml.c_str(), 1, xml.size(), pFile);
			::fclose(pFile);

			return true;
		}
	}

}