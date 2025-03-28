﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: GacUI UnitTestSnapshotViewer

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_GUIUNITTESTSNAPSHOTVIEWER
#define VCZH_WORKFLOW_COMPILER_GENERATED_GUIUNITTESTSNAPSHOTVIEWER

#include "../../../GacUI.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

namespace vl_workflow_global
{
	struct __vwsnf1_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
	struct __vwsnf2_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
	struct __vwsnf3_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
	struct __vwsnf5_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
	struct __vwsnf6_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
	struct __vwsnf7_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
	struct __vwsnf8_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
	struct __vwsnf9_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
	struct __vwsno4_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
	class __vwsnc1_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
	class __vwsnc2_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
	class __vwsnc3_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
	class __vwsnc4_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
	class __vwsnc5_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
	class __vwsnc6_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerStrings___vwsn_ls_en_US_BuildStrings__gaclib_controls_IUnitTestSnapshotViewerStringsStrings;
}

namespace __vwsn_enums
{
	enum class _gaclib_controls_UnitTestSnapshotFileNodeType : vl::vuint64_t
	{
		Folder = 0UL,
		File = 1UL,
	};
	inline _gaclib_controls_UnitTestSnapshotFileNodeType operator& (_gaclib_controls_UnitTestSnapshotFileNodeType a, _gaclib_controls_UnitTestSnapshotFileNodeType b) { return static_cast<_gaclib_controls_UnitTestSnapshotFileNodeType>(static_cast<::vl::vuint64_t>(a) & static_cast<::vl::vuint64_t>(b)); }
	inline _gaclib_controls_UnitTestSnapshotFileNodeType operator| (_gaclib_controls_UnitTestSnapshotFileNodeType a, _gaclib_controls_UnitTestSnapshotFileNodeType b) { return static_cast<_gaclib_controls_UnitTestSnapshotFileNodeType>(static_cast<::vl::vuint64_t>(a) | static_cast<::vl::vuint64_t>(b)); }

}
namespace gaclib_controls
{
	using UnitTestSnapshotFileNodeType = ::__vwsn_enums::_gaclib_controls_UnitTestSnapshotFileNodeType;

	class IUnitTestSnapshotFileNode;
	class IUnitTestSnapshotFrame;
	class IUnitTestSnapshotViewerStringsStrings;
	class IUnitTestSnapshotViewerViewModel;
	class UnitTestSnapshotViewerStrings;
	class UnitTestSnapshotViewerWindowConstructor;
	class UnitTestSnapshotViewerWindow;

	class IUnitTestSnapshotFileNode : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IUnitTestSnapshotFileNode>
	{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IUnitTestSnapshotFileNode>;
#endif
	public:
		virtual ::gaclib_controls::UnitTestSnapshotFileNodeType GetNodeType() = 0;
		virtual ::vl::WString GetName() = 0;
		virtual ::vl::collections::LazyList<::vl::Ptr<::gaclib_controls::IUnitTestSnapshotFileNode>> GetChildren() = 0;
		virtual ::vl::collections::LazyList<::vl::Ptr<::gaclib_controls::IUnitTestSnapshotFrame>> GetFrames() = 0;
		virtual void Refresh() = 0;
	};

	class IUnitTestSnapshotFrame : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IUnitTestSnapshotFrame>
	{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IUnitTestSnapshotFrame>;
#endif
	public:
		virtual ::vl::WString GetName() = 0;
		virtual ::vl::WString GetElementsAsJsonText() = 0;
		virtual ::vl::WString GetDomAsJsonText() = 0;
	};

	class IUnitTestSnapshotViewerStringsStrings : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IUnitTestSnapshotViewerStringsStrings>
	{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IUnitTestSnapshotViewerStringsStrings>;
#endif
	public:
		virtual ::vl::WString WindowTitle() = 0;
	};

	class IUnitTestSnapshotViewerViewModel : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IUnitTestSnapshotViewerViewModel>
	{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IUnitTestSnapshotViewerViewModel>;
#endif
	public:
		virtual ::vl::Ptr<::gaclib_controls::IUnitTestSnapshotFileNode> GetRootNode() = 0;
	};

	class UnitTestSnapshotViewerStrings : public ::vl::Object, public ::vl::reflection::Description<UnitTestSnapshotViewerStrings>
	{
		friend class ::vl_workflow_global::__vwsnc6_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerStrings___vwsn_ls_en_US_BuildStrings__gaclib_controls_IUnitTestSnapshotViewerStringsStrings;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<UnitTestSnapshotViewerStrings>;
#endif
	public:
		static ::vl::Ptr<::gaclib_controls::IUnitTestSnapshotViewerStringsStrings> __vwsn_ls_en_US_BuildStrings(::vl::Locale __vwsn_ls_locale);
		static void Install(::vl::Locale __vwsn_ls_locale, ::vl::Ptr<::gaclib_controls::IUnitTestSnapshotViewerStringsStrings> __vwsn_ls_impl);
		static ::vl::Ptr<::gaclib_controls::IUnitTestSnapshotViewerStringsStrings> Get(::vl::Locale __vwsn_ls_locale);
		UnitTestSnapshotViewerStrings();
	};

	class UnitTestSnapshotViewerWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<UnitTestSnapshotViewerWindowConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc1_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc3_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc4_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc5_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf2_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf3_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf5_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf6_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf7_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf8_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf9_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsno4_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<UnitTestSnapshotViewerWindowConstructor>;
#endif
	protected:
		::vl::Ptr<::gaclib_controls::IUnitTestSnapshotViewerViewModel> ViewModel;
		::gaclib_controls::UnitTestSnapshotViewerWindow* self;
		::vl::presentation::controls::GuiBindableTreeView* treeViewFileNodes;
		::vl::presentation::controls::GuiBindableTextList* textListFrames;
		::vl::presentation::controls::GuiScrollContainer* scRendering;
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_0;
		::vl::presentation::compositions::GuiColumnSplitterComposition* __vwsn_precompile_1;
		::vl::presentation::compositions::GuiColumnSplitterComposition* __vwsn_precompile_2;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_3;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_4;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_5;
		::vl::presentation::controls::GuiTab* __vwsn_precompile_6;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_7;
		::vl::presentation::controls::GuiTabPage* __vwsn_precompile_8;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_9;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_10;
		::vl::presentation::controls::GuiTab* __vwsn_precompile_11;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_12;
		::vl::presentation::controls::GuiTabPage* __vwsn_precompile_13;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_14;
		::vl::presentation::controls::GuiTabPage* __vwsn_precompile_15;
		::vl::presentation::controls::GuiMultilineTextBox* __vwsn_precompile_16;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_17;
		::vl::presentation::controls::GuiTabPage* __vwsn_precompile_18;
		::vl::presentation::controls::GuiMultilineTextBox* __vwsn_precompile_19;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_20;
		void __vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize(::gaclib_controls::UnitTestSnapshotViewerWindow* __vwsn_this_);
	public:
		UnitTestSnapshotViewerWindowConstructor();
	};

	class UnitTestSnapshotViewerWindow : public ::vl::presentation::controls::GuiWindow, public ::gaclib_controls::UnitTestSnapshotViewerWindowConstructor, public ::vl::reflection::Description<UnitTestSnapshotViewerWindow>
	{
		friend class ::gaclib_controls::UnitTestSnapshotViewerWindowConstructor;
		friend class ::vl_workflow_global::__vwsnc1_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc3_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc4_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc5_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf2_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf3_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf5_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf6_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf7_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf8_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf9_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsno4_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<UnitTestSnapshotViewerWindow>;
#endif
	private:
		::vl::Ptr<::vl::presentation::GuiImageData> imageFolder;
		::vl::Ptr<::vl::presentation::GuiImageData> imageFile;
		::vl::Ptr<::vl::presentation::GuiImageData> GetImageFromType(::gaclib_controls::UnitTestSnapshotFileNodeType nodeType);
	public:
		::vl::Ptr<::gaclib_controls::IUnitTestSnapshotViewerStringsStrings> __vwsn_prop_Strings;
		::vl::Ptr<::gaclib_controls::IUnitTestSnapshotViewerStringsStrings> GetStrings();
		void SetStrings(::vl::Ptr<::gaclib_controls::IUnitTestSnapshotViewerStringsStrings> __vwsn_value_);
		::vl::Event<void()> StringsChanged;
	private:
		::vl::Ptr<::gaclib_controls::IUnitTestSnapshotViewerViewModel> __vwsn_parameter_ViewModel;
	public:
		::vl::Ptr<::gaclib_controls::IUnitTestSnapshotViewerViewModel> GetViewModel();
		UnitTestSnapshotViewerWindow(::vl::Ptr<::gaclib_controls::IUnitTestSnapshotViewerViewModel> __vwsn_ctor_parameter_ViewModel);
		~UnitTestSnapshotViewerWindow();
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class GuiUnitTestSnapshotViewer
	{
	public:

		::vl::Ptr<::vl::reflection::description::IValueDictionary> __vwsn_ls_UnitTestSnapshotViewerStrings;

		static GuiUnitTestSnapshotViewer& Instance();
	};

/***********************************************************************
Closures
***********************************************************************/

	struct __vwsnf1_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_
	{
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnf1_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		::vl::Ptr<::vl::reflection::description::IValueEnumerable> operator()(const ::vl::reflection::description::Value& __vwsn_item_) const;
	};

	struct __vwsnf2_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_
	{
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnf2_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		::vl::WString operator()(const ::vl::reflection::description::Value& __vwsn_item_) const;
	};

	struct __vwsnf3_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_
	{
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnf3_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		::vl::WString operator()(const ::vl::reflection::description::Value& __vwsn_item_) const;
	};

	struct __vwsnf5_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_
	{
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnf5_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	struct __vwsnf6_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_
	{
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnf6_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	struct __vwsnf7_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_
	{
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnf7_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	struct __vwsnf8_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_
	{
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnf8_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	struct __vwsnf9_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_
	{
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnf9_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	struct __vwsno4_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_
	{
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsno4_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize_(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		::vl::Ptr<::vl::presentation::GuiImageData> operator()(const ::vl::reflection::description::Value& __vwsno_1) const;
	};

	class __vwsnc1_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnc1_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		::vl::presentation::controls::GuiBindableTreeView* __vwsn_bind_cache_0 = nullptr;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1);
		bool Open() override;
		bool Update() override;
		bool Close() override;
	};

	class __vwsnc2_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnc2_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		::vl::presentation::controls::GuiBindableTextList* __vwsn_bind_cache_0 = nullptr;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1);
		bool Open() override;
		bool Update() override;
		bool Close() override;
	};

	class __vwsnc3_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnc3_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		::vl::presentation::controls::GuiBindableTextList* __vwsn_bind_cache_0 = nullptr;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1);
		bool Open() override;
		bool Update() override;
		bool Close() override;
	};

	class __vwsnc4_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::gaclib_controls::UnitTestSnapshotViewerWindow* __vwsn_this_;
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnc4_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription(::gaclib_controls::UnitTestSnapshotViewerWindow* __vwsnctor___vwsn_this_, ::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		::gaclib_controls::UnitTestSnapshotViewerWindow* __vwsn_bind_cache_0 = nullptr;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0();
		bool Open() override;
		bool Update() override;
		bool Close() override;
	};

	class __vwsnc5_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnthis_0;

		__vwsnc5_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerWindowConstructor___vwsn_gaclib_controls_UnitTestSnapshotViewerWindow_Initialize__vl_reflection_description_IValueSubscription(::gaclib_controls::UnitTestSnapshotViewerWindowConstructor* __vwsnctorthis_0);

		::vl::presentation::controls::GuiApplication* __vwsn_bind_cache_0 = nullptr;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0();
		bool Open() override;
		bool Update() override;
		bool Close() override;
	};

	class __vwsnc6_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerStrings___vwsn_ls_en_US_BuildStrings__gaclib_controls_IUnitTestSnapshotViewerStringsStrings : public ::vl::Object, public virtual ::gaclib_controls::IUnitTestSnapshotViewerStringsStrings
	{
	public:
		__vwsnc6_GuiUnitTestSnapshotViewer_gaclib_controls_UnitTestSnapshotViewerStrings___vwsn_ls_en_US_BuildStrings__gaclib_controls_IUnitTestSnapshotViewerStringsStrings();

		::vl::WString WindowTitle() override;
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

#endif
