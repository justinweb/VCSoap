#pragma once

#include <string>
#include <list>

namespace VCSoapUtil {

	/// \brief �˴�����n��X�����
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

		/// \brief ����xml
		/// \return xml���
		std::string ToXml() const;
		/// \brief ��xml�r����X�Ǧ^�����
		/// \param xml �n�ΨӸѪR��xml
		/// \param errorMsg �Ǧ^���~�T��
		/// \return ���\�P�_
		bool FromXml(const std::string& xml, std::string& errorMsg);

	public:
		std::string ASSY_LOT;
		std::string OPER;
		std::string OP_NAME;
		std::string ENTITY;

		int TotalQuantity;
		int PassQuantity;
		int FailQuantity;

		std::list<FailInfo>	FailInfos_;		//!< �x�s�n��X�����~��

		// Result 
		std::string Result;
		std::string Result_Message;

	};

}

