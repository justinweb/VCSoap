#pragma once

#include <string>

#include "tinyxml2.h"

namespace VCSoapUtil {

	/// \brief XML的工具類別
	class XMLHelper
	{
	public:
		XMLHelper();
		~XMLHelper();

		/// \brief 由 tinyxml2::XMLElement中取得指定的元素中的內容
		/// \brief pElement 要使用的 XMLElement
		/// \brief elementName 要取內容的元素名稱
		/// \return 傳回元素內容
		static std::string GetElementText(tinyxml2::XMLElement* pElement, const std::string& elementName);
		static bool WriteXmlFile(const std::string& xml, const std::string& filename, std::string& errorMsg);
	};

}