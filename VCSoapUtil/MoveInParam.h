#pragma once

#include <string>

namespace VCSoapUtil {

	/// \brief 輸入用的資料物件
	///
	class MoveInParam
	{
	public:
		MoveInParam();
		~MoveInParam();

		/// \brief 產生xml
		/// \return xml資料
		std::string ToXml() const;
		/// \brief 由xml字串取出傳回的資料
		/// \param xml 要用來解析的xml
		/// \param errorMsg 傳回錯誤訊息
		/// \return 成功與否
		bool FromXml(const std::string xml, std::string& errorMsg);
	public:
		std::string ASSY_LOT;
		std::string OPER;
		std::string OP_NAME;
		std::string ENTITY;

		// Result 
		std::string Result;
		std::string Result_Message;
		std::string Package_ID;
	};

}

