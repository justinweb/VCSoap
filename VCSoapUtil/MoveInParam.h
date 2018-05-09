#pragma once

#include <string>

namespace VCSoapUtil {

	/// \brief ��J�Ϊ���ƪ���
	///
	class MoveInParam
	{
	public:
		MoveInParam();
		~MoveInParam();

		/// \brief ����xml
		/// \return xml���
		std::string ToXml() const;
		/// \brief ��xml�r����X�Ǧ^�����
		/// \param xml �n�ΨӸѪR��xml
		/// \param errorMsg �Ǧ^���~�T��
		/// \return ���\�P�_
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

