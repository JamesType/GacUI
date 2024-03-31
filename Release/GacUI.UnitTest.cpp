﻿/***********************************************************************
THIS FILE IS AUTOMATICALLY GENERATED. DO NOT MODIFY
DEVELOPER: Zihan Chen(vczh)
***********************************************************************/
#include "GacUI.UnitTest.h"

/***********************************************************************
.\GUIUNITTESTUTILITIES.CPP
***********************************************************************/

namespace vl::presentation::controls
{
	extern bool GACUI_UNITTEST_ONLY_SKIP_THREAD_LOCAL_STORAGE_DISPOSE_STORAGES;
	extern bool GACUI_UNITTEST_ONLY_SKIP_TYPE_AND_PLUGIN_LOAD_UNLOAD;
}

using namespace vl;
using namespace vl::reflection::description;
using namespace vl::presentation;
using namespace vl::presentation::controls;

namespace vl::presentation::unittest
{
}

Func<void()> guiMainProxy;

void InitializeGacUIUnitTest()
{
	GACUI_UNITTEST_ONLY_SKIP_THREAD_LOCAL_STORAGE_DISPOSE_STORAGES = true;
	GACUI_UNITTEST_ONLY_SKIP_TYPE_AND_PLUGIN_LOAD_UNLOAD = true;

	GetGlobalTypeManager()->Load();
	GetPluginManager()->Load(true, false);
}

void FinalizeGacUIUnitTest()
{
	ResetGlobalTypeManager();
	GetPluginManager()->Unload(true, false);
	DestroyPluginManager();
	ThreadLocalStorage::DisposeStorages();

	GACUI_UNITTEST_ONLY_SKIP_THREAD_LOCAL_STORAGE_DISPOSE_STORAGES = false;
	GACUI_UNITTEST_ONLY_SKIP_TYPE_AND_PLUGIN_LOAD_UNLOAD = false;
}

void SetGuiMainProxy(const Func<void()>& proxy)
{
	guiMainProxy = proxy;
}

void GuiMain()
{
	guiMainProxy();
}