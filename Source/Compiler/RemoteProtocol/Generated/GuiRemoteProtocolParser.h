/***********************************************************************
This file is generated by: Vczh Parser Generator
From parser definition:GuiRemoteProtocol
Licensed under https://github.com/vczh-libraries/License
***********************************************************************/

#ifndef VCZH_PRESENTATION_REMOTEPROTOCOL_PARSER_SYNTAX
#define VCZH_PRESENTATION_REMOTEPROTOCOL_PARSER_SYNTAX

#include "GuiRemoteProtocol_Assembler.h"
#include "GuiRemoteProtocol_Lexer.h"

namespace vl::presentation::remoteprotocol
{
	enum class ParserStates
	{
		RType = 0,
		RAttributeParameter = 26,
		RAttribute = 29,
		REnumMember = 37,
		REnum = 41,
		RUnionMember = 48,
		RUnion = 52,
		RStructMember = 59,
		RStructBody = 66,
		RStruct = 72,
		RMessageRequest = 78,
		RMessageResponse = 84,
		RMessage = 90,
		REventRequest = 98,
		REvent = 104,
		RDeclDetail = 111,
		RDecl = 118,
		Schema = 122,
	};

	const wchar_t* ParserRuleName(vl::vint index);
	const wchar_t* ParserStateLabel(vl::vint index);
	extern void GuiRemoteProtocolParserData(vl::stream::IStream& outputStream);

	class Parser
		: public vl::glr::ParserBase<GuiRemoteProtocolTokens, ParserStates, GuiRemoteProtocolAstInsReceiver>
		, protected vl::glr::automaton::IExecutor::ITypeCallback
	{
	protected:
		vl::WString GetClassName(vl::vint32_t classIndex) const override;
		vl::vint32_t FindCommonBaseClass(vl::vint32_t class1, vl::vint32_t class2) const override;
	public:
		Parser();

		vl::Ptr<vl::presentation::remoteprotocol::GuiRpSchema> ParseSchema(const vl::WString& input, vl::vint codeIndex = -1) const;
		vl::Ptr<vl::presentation::remoteprotocol::GuiRpSchema> ParseSchema(vl::collections::List<vl::regex::RegexToken>& tokens, vl::vint codeIndex = -1) const;
	};
}
#endif