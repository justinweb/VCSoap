#pragma once

#include <string>
#include <list>

namespace VCSoapUtil {

	/// \brief 檢測完後要輸出的資料
	/// 
	class MoveOutParam
	{
	public:
		struct FailInfo {
			std::string Fail_Code;
			int Fail_Qty;

			std::string ToXml() const;
		};
	public:
		MoveOutParam();
		~MoveOutParam();

		/// \brief 產生xml
		/// \return xml資料
		std::string ToXml() const;
		/// \brief 由xml字串取出傳回的資料
		/// \param xml 要用來解析的xml
		/// \param errorMsg 傳回錯誤訊息
		/// \return 成功與否
		bool FromXml(const std::string& xml, std::string& errorMsg);

	public:
		std::string ASSY_LOT;
		std::string OPER;
		std::string OP_NAME;
		std::string ENTITY;

		int TotalQuantity;
		int PassQuantity;
		int FailQuantity;

		std::list<FailInfo>	FailInfos_;		//!< 儲存要輸出的錯誤資

		// Result 
		std::string Result;
		std::string Result_Message;

	};

}

