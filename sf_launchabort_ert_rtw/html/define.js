function CodeDefine() { 
this.def = new Array();
this.def["Object"] = {file: "ert_main_cpp.html",line:20,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_cpp.html",line:34,type:"fcn"};
this.def["main"] = {file: "ert_main_cpp.html",line:71,type:"fcn"};
this.def["rate_scheduler"] = {file: "sf_launchabort_cpp.html",line:25,type:"fcn"};
this.def["FuelDump_Init"] = {file: "sf_launchabort_cpp.html",line:42,type:"fcn"};
this.def["FuelDump_Start"] = {file: "sf_launchabort_cpp.html",line:53,type:"fcn"};
this.def["FuelDump"] = {file: "sf_launchabort_cpp.html",line:70,type:"fcn"};
this.def["TankRelease_Init"] = {file: "sf_launchabort_cpp.html",line:91,type:"fcn"};
this.def["TankRelease_Start"] = {file: "sf_launchabort_cpp.html",line:98,type:"fcn"};
this.def["TankRelease"] = {file: "sf_launchabort_cpp.html",line:111,type:"fcn"};
this.def["step"] = {file: "sf_launchabort_cpp.html",line:132,type:"fcn"};
this.def["initialize"] = {file: "sf_launchabort_cpp.html",line:354,type:"fcn"};
this.def["terminate"] = {file: "sf_launchabort_cpp.html",line:946,type:"fcn"};
this.def["getRTM"] = {file: "sf_launchabort_cpp.html",line:1055,type:"fcn"};
this.def["rtB_FuelDump"] = {file: "sf_launchabort_h.html",line:47,type:"type"};
this.def["rtDW_FuelDump"] = {file: "sf_launchabort_h.html",line:52,type:"type"};
this.def["rtB_TankRelease"] = {file: "sf_launchabort_h.html",line:57,type:"type"};
this.def["rtDW_TankRelease"] = {file: "sf_launchabort_h.html",line:62,type:"type"};
this.def["BlockIO"] = {file: "sf_launchabort_h.html",line:77,type:"type"};
this.def["D_Work"] = {file: "sf_launchabort_h.html",line:102,type:"type"};
this.def["public"] = {file: "sf_launchabort_h.html",line:205,type:"fcn"};
this.def["rtP_FuelDump"] = {file: "sf_launchabort_types_h.html",line:20,type:"type"};
this.def["rtP_TankRelease"] = {file: "sf_launchabort_types_h.html",line:23,type:"type"};
this.def["Parameters"] = {file: "sf_launchabort_types_h.html",line:26,type:"type"};
this.def["RT_MODEL"] = {file: "sf_launchabort_types_h.html",line:29,type:"type"};
this.def["launchAbortController_Init"] = {file: "launchAbortController_cpp.html",line:35,type:"fcn"};
this.def["launchAbortController"] = {file: "launchAbortController_cpp.html",line:52,type:"fcn"};
this.def["rtB_launchAbortController"] = {file: "launchAbortController_h.html",line:31,type:"type"};
this.def["rtDW_launchAbortController"] = {file: "launchAbortController_h.html",line:43,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_cpp.html"] = "../ert_main.cpp";
	this.html2Root["ert_main_cpp.html"] = "ert_main_cpp.html";
	this.html2SrcPath["sf_launchabort_cpp.html"] = "../sf_launchabort.cpp";
	this.html2Root["sf_launchabort_cpp.html"] = "sf_launchabort_cpp.html";
	this.html2SrcPath["sf_launchabort_h.html"] = "../sf_launchabort.h";
	this.html2Root["sf_launchabort_h.html"] = "sf_launchabort_h.html";
	this.html2SrcPath["sf_launchabort_private_h.html"] = "../sf_launchabort_private.h";
	this.html2Root["sf_launchabort_private_h.html"] = "sf_launchabort_private_h.html";
	this.html2SrcPath["sf_launchabort_types_h.html"] = "../sf_launchabort_types.h";
	this.html2Root["sf_launchabort_types_h.html"] = "sf_launchabort_types_h.html";
	this.html2SrcPath["launchAbortController_cpp.html"] = "../launchAbortController.cpp";
	this.html2Root["launchAbortController_cpp.html"] = "launchAbortController_cpp.html";
	this.html2SrcPath["launchAbortController_h.html"] = "../launchAbortController.h";
	this.html2Root["launchAbortController_h.html"] = "launchAbortController_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_cpp.html","sf_launchabort_cpp.html","sf_launchabort_h.html","sf_launchabort_private_h.html","sf_launchabort_types_h.html","launchAbortController_cpp.html","launchAbortController_h.html","rtwtypes_h.html"];
