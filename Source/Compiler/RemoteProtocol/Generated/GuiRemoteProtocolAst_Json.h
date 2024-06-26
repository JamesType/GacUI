/***********************************************************************
This file is generated by: Vczh Parser Generator
From parser definition:Ast
Licensed under https://github.com/vczh-libraries/License
***********************************************************************/

#ifndef VCZH_PRESENTATION_REMOTEPROTOCOL_AST_AST_JSON_VISITOR
#define VCZH_PRESENTATION_REMOTEPROTOCOL_AST_AST_JSON_VISITOR

#include "GuiRemoteProtocolAst.h"

namespace vl::presentation::remoteprotocol::json_visitor
{
	/// <summary>A JSON visitor, overriding all abstract methods with AST to JSON serialization code.</summary>
	class AstVisitor
		: public vl::glr::JsonVisitorBase
		, protected virtual GuiRpType::IVisitor
		, protected virtual GuiRpDeclaration::IVisitor
	{
	protected:
		virtual void PrintFields(GuiRpArrayMapType* node);
		virtual void PrintFields(GuiRpArrayType* node);
		virtual void PrintFields(GuiRpAttribute* node);
		virtual void PrintFields(GuiRpDeclaration* node);
		virtual void PrintFields(GuiRpEnumDecl* node);
		virtual void PrintFields(GuiRpEnumMember* node);
		virtual void PrintFields(GuiRpEventDecl* node);
		virtual void PrintFields(GuiRpEventRequest* node);
		virtual void PrintFields(GuiRpMapType* node);
		virtual void PrintFields(GuiRpMessageDecl* node);
		virtual void PrintFields(GuiRpMessageRequest* node);
		virtual void PrintFields(GuiRpMessageResponse* node);
		virtual void PrintFields(GuiRpOptionalType* node);
		virtual void PrintFields(GuiRpPrimitiveType* node);
		virtual void PrintFields(GuiRpReferenceType* node);
		virtual void PrintFields(GuiRpSchema* node);
		virtual void PrintFields(GuiRpStructDecl* node);
		virtual void PrintFields(GuiRpStructMember* node);
		virtual void PrintFields(GuiRpType* node);
		virtual void PrintFields(GuiRpUnionDecl* node);
		virtual void PrintFields(GuiRpUnionMember* node);

	protected:
		void Visit(GuiRpPrimitiveType* node) override;
		void Visit(GuiRpReferenceType* node) override;
		void Visit(GuiRpOptionalType* node) override;
		void Visit(GuiRpArrayType* node) override;
		void Visit(GuiRpArrayMapType* node) override;
		void Visit(GuiRpMapType* node) override;

		void Visit(GuiRpEnumDecl* node) override;
		void Visit(GuiRpUnionDecl* node) override;
		void Visit(GuiRpStructDecl* node) override;
		void Visit(GuiRpMessageDecl* node) override;
		void Visit(GuiRpEventDecl* node) override;

	public:
		AstVisitor(vl::stream::StreamWriter& _writer);

		void Print(GuiRpType* node);
		void Print(GuiRpDeclaration* node);
		void Print(GuiRpAttribute* node);
		void Print(GuiRpEnumMember* node);
		void Print(GuiRpUnionMember* node);
		void Print(GuiRpStructMember* node);
		void Print(GuiRpMessageRequest* node);
		void Print(GuiRpMessageResponse* node);
		void Print(GuiRpEventRequest* node);
		void Print(GuiRpSchema* node);
	};
}
#endif