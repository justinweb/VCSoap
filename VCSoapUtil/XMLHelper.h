#pragma once

#include <string>

#include "tinyxml2.h"

namespace VCSoapUtil {

	/// \brief XML���u�����O
	class XMLHelper
	{
	public:
		XMLHelper();
		~XMLHelper();

		/// \brief �� tinyxml2::XMLElement�����o���w�������������e
		/// \brief pElement �n�ϥΪ� XMLElement
		/// \brief elementName �n�����e�������W��
		/// \return �Ǧ^�������e
		static std::string GetElementText(tinyxml2::XMLElement* pElement, const std::string& elementName);
		static bool WriteXmlFile(const std::string& xml, const std::string& filename, std::string& errorMsg);
	};

}