/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _MSADERR_H_
#define _MSADERR_H_
#ifndef FACILITY_WINDOWS

#define FACILITY_WINDOWS 0x8
#define FACILITY_STORAGE 0x3
#define FACILITY_ITF 0x4

#define STATUS_SEVERITY_SUCCESS 0x0
#define STATUS_SEVERITY_COERROR 0x2

#define DB_E_BOGUS ((HRESULT)0x80040EFF)
#endif

#ifndef OLEDBVER
#define OLEDBVER 0x0270
#endif

#define DB_E_BADACCESSORHANDLE ((HRESULT)0x80040E00)
#define DB_E_ROWLIMITEXCEEDED ((HRESULT)0x80040E01)
#define DB_E_READONLYACCESSOR ((HRESULT)0x80040E02)
#define DB_E_SCHEMAVIOLATION ((HRESULT)0x80040E03)
#define DB_E_BADROWHANDLE ((HRESULT)0x80040E04)
#define DB_E_OBJECTOPEN ((HRESULT)0x80040E05)

#if (OLEDBVER >= 0x0150)
#define DB_E_BADCHAPTER ((HRESULT)0x80040E06)
#endif

#define DB_E_CANTCONVERTVALUE ((HRESULT)0x80040E07)
#define DB_E_BADBINDINFO ((HRESULT)0x80040E08)
#define DB_SEC_E_PERMISSIONDENIED ((HRESULT)0x80040E09)
#define DB_E_NOTAREFERENCECOLUMN ((HRESULT)0x80040E0A)

#if (OLEDBVER >= 0x0250)
#define DB_E_LIMITREJECTED ((HRESULT)0x80040E0B)
#endif

#define DB_E_NOCOMMAND ((HRESULT)0x80040E0C)

#if (OLEDBVER >= 0x0250)
#define DB_E_COSTLIMIT ((HRESULT)0x80040E0D)
#endif

#define DB_E_BADBOOKMARK ((HRESULT)0x80040E0E)
#define DB_E_BADLOCKMODE ((HRESULT)0x80040E0F)
#define DB_E_PARAMNOTOPTIONAL ((HRESULT)0x80040E10)
#define DB_E_BADCOLUMNID ((HRESULT)0x80040E11)
#define DB_E_BADRATIO ((HRESULT)0x80040E12)

#if (OLEDBVER >= 0x0200)
#define DB_E_BADVALUES ((HRESULT)0x80040E13)
#endif

#define DB_E_ERRORSINCOMMAND ((HRESULT)0x80040E14)
#define DB_E_CANTCANCEL ((HRESULT)0x80040E15)
#define DB_E_DIALECTNOTSUPPORTED ((HRESULT)0x80040E16)
#define DB_E_DUPLICATEDATASOURCE ((HRESULT)0x80040E17)
#define DB_E_CANNOTRESTART ((HRESULT)0x80040E18)
#define DB_E_NOTFOUND ((HRESULT)0x80040E19)
#define DB_E_NEWLYINSERTED ((HRESULT)0x80040E1B)

#if (OLEDBVER >= 0x0250)
#define DB_E_CANNOTFREE ((HRESULT)0x80040E1A)
#define DB_E_GOALREJECTED ((HRESULT)0x80040E1C)
#endif

#define DB_E_UNSUPPORTEDCONVERSION ((HRESULT)0x80040E1D)
#define DB_E_BADSTARTPOSITION ((HRESULT)0x80040E1E)

#if (OLEDBVER >= 0x0200)
#define DB_E_NOQUERY ((HRESULT)0x80040E1F)
#endif

#define DB_E_NOTREENTRANT ((HRESULT)0x80040E20)
#define DB_E_ERRORSOCCURRED ((HRESULT)0x80040E21)
#define DB_E_NOAGGREGATION ((HRESULT)0x80040E22)
#define DB_E_DELETEDROW ((HRESULT)0x80040E23)
#define DB_E_CANTFETCHBACKWARDS ((HRESULT)0x80040E24)
#define DB_E_ROWSNOTRELEASED ((HRESULT)0x80040E25)
#define DB_E_BADSTORAGEFLAG ((HRESULT)0x80040E26)

#if (OLEDBVER >= 0x0150)
#define DB_E_BADCOMPAREOP ((HRESULT)0x80040E27)
#endif

#define DB_E_BADSTATUSVALUE ((HRESULT)0x80040E28)
#define DB_E_CANTSCROLLBACKWARDS ((HRESULT)0x80040E29)

#if (OLEDBVER >= 0x0250)
#define DB_E_BADREGIONHANDLE ((HRESULT)0x80040E2A)
#define DB_E_NONCONTIGUOUSRANGE ((HRESULT)0x80040E2B)
#define DB_E_INVALIDTRANSITION ((HRESULT)0x80040E2C)
#define DB_E_NOTASUBREGION ((HRESULT)0x80040E2D)
#endif

#define DB_E_MULTIPLESTATEMENTS ((HRESULT)0x80040E2E)
#define DB_E_INTEGRITYVIOLATION ((HRESULT)0x80040E2F)
#define DB_E_BADTYPENAME ((HRESULT)0x80040E30)
#define DB_E_ABORTLIMITREACHED ((HRESULT)0x80040E31)

#if (OLEDBVER >= 0x0200)
#define DB_E_ROWSETINCOMMAND ((HRESULT)0x80040E32)
#define DB_E_CANTTRANSLATE ((HRESULT)0x80040E33)
#endif

#define DB_E_DUPLICATEINDEXID ((HRESULT)0x80040E34)
#define DB_E_NOINDEX ((HRESULT)0x80040E35)
#define DB_E_INDEXINUSE ((HRESULT)0x80040E36)
#define DB_E_NOTABLE ((HRESULT)0x80040E37)
#define DB_E_CONCURRENCYVIOLATION ((HRESULT)0x80040E38)
#define DB_E_BADCOPY ((HRESULT)0x80040E39)
#define DB_E_BADPRECISION ((HRESULT)0x80040E3A)
#define DB_E_BADSCALE ((HRESULT)0x80040E3B)
#define DB_E_BADTABLEID ((HRESULT)0x80040E3C)
#define DB_E_BADID DB_E_BADTABLEID
#define DB_E_BADTYPE ((HRESULT)0x80040E3D)
#define DB_E_DUPLICATECOLUMNID ((HRESULT)0x80040E3E)
#define DB_E_DUPLICATETABLEID ((HRESULT)0x80040E3F)
#define DB_E_TABLEINUSE ((HRESULT)0x80040E40)
#define DB_E_NOLOCALE ((HRESULT)0x80040E41)
#define DB_E_BADRECORDNUM ((HRESULT)0x80040E42)
#define DB_E_BOOKMARKSKIPPED ((HRESULT)0x80040E43)
#define DB_E_BADPROPERTYVALUE ((HRESULT)0x80040E44)
#define DB_E_INVALID ((HRESULT)0x80040E45)
#define DB_E_BADACCESSORFLAGS ((HRESULT)0x80040E46)
#define DB_E_BADSTORAGEFLAGS ((HRESULT)0x80040E47)
#define DB_E_BYREFACCESSORNOTSUPPORTED ((HRESULT)0x80040E48)
#define DB_E_NULLACCESSORNOTSUPPORTED ((HRESULT)0x80040E49)
#define DB_E_NOTPREPARED ((HRESULT)0x80040E4A)
#define DB_E_BADACCESSORTYPE ((HRESULT)0x80040E4B)
#define DB_E_WRITEONLYACCESSOR ((HRESULT)0x80040E4C)
#define DB_SEC_E_AUTH_FAILED ((HRESULT)0x80040E4D)
#define DB_E_CANCELED ((HRESULT)0x80040E4E)

#if (OLEDBVER >= 0x0200)
#define DB_E_CHAPTERNOTRELEASED ((HRESULT)0x80040E4F)
#endif

#define DB_E_BADSOURCEHANDLE ((HRESULT)0x80040E50)
#define DB_E_PARAMUNAVAILABLE ((HRESULT)0x80040E51)
#define DB_E_ALREADYINITIALIZED ((HRESULT)0x80040E52)
#define DB_E_NOTSUPPORTED ((HRESULT)0x80040E53)
#define DB_E_MAXPENDCHANGESEXCEEDED ((HRESULT)0x80040E54)
#define DB_E_BADORDINAL ((HRESULT)0x80040E55)
#define DB_E_PENDINGCHANGES ((HRESULT)0x80040E56)
#define DB_E_DATAOVERFLOW ((HRESULT)0x80040E57)
#define DB_E_BADHRESULT ((HRESULT)0x80040E58)
#define DB_E_BADLOOKUPID ((HRESULT)0x80040E59)
#define DB_E_BADDYNAMICERRORID ((HRESULT)0x80040E5A)
#define DB_E_PENDINGINSERT ((HRESULT)0x80040E5B)
#define DB_E_BADCONVERTFLAG ((HRESULT)0x80040E5C)
#define DB_E_BADPARAMETERNAME ((HRESULT)0x80040E5D)
#define DB_E_MULTIPLESTORAGE ((HRESULT)0x80040E5E)
#define DB_E_CANTFILTER ((HRESULT)0x80040E5F)
#define DB_E_CANTORDER ((HRESULT)0x80040E60)

#if (OLEDBVER >= 0x0200)
#define MD_E_BADTUPLE ((HRESULT)0x80040E61)
#define MD_E_BADCOORDINATE ((HRESULT)0x80040E62)
#define MD_E_INVALIDAXIS ((HRESULT)0x80040E63)
#define MD_E_INVALIDCELLRANGE ((HRESULT)0x80040E64)
#define DB_E_NOCOLUMN ((HRESULT)0x80040E65)
#define DB_E_COMMANDNOTPERSISTED ((HRESULT)0x80040E67)
#define DB_E_DUPLICATEID ((HRESULT)0x80040E68)
#define DB_E_OBJECTCREATIONLIMITREACHED ((HRESULT)0x80040E69)
#define DB_E_BADINDEXID ((HRESULT)0x80040E72)
#define DB_E_BADINITSTRING ((HRESULT)0x80040E73)
#define DB_E_NOPROVIDERSREGISTERED ((HRESULT)0x80040E74)
#define DB_E_MISMATCHEDPROVIDER ((HRESULT)0x80040E75)
#define DB_E_BADCOMMANDID ((HRESULT)0x80040E76)
#endif

#if (OLEDBVER >= 0x0210)
#define SEC_E_PERMISSIONDENIED DB_SEC_E_PERMISSIONDENIED
#define SEC_E_BADTRUSTEEID ((HRESULT)0x80040E6A)
#define SEC_E_NOTRUSTEEID ((HRESULT)0x80040E6B)
#define SEC_E_NOMEMBERSHIPSUPPORT ((HRESULT)0x80040E6C)
#define SEC_E_INVALIDOBJECT ((HRESULT)0x80040E6D)
#define SEC_E_NOOWNER ((HRESULT)0x80040E6E)
#define SEC_E_INVALIDACCESSENTRYLIST ((HRESULT)0x80040E6F)
#define SEC_E_INVALIDOWNER ((HRESULT)0x80040E70)
#define SEC_E_INVALIDACCESSENTRY ((HRESULT)0x80040E71)
#define DB_E_BADCONSTRAINTTYPE ((HRESULT)0x80040E77)
#define DB_E_BADCONSTRAINTFORM ((HRESULT)0x80040E78)
#define DB_E_BADDEFERRABILITY ((HRESULT)0x80040E79)
#define DB_E_BADMATCHTYPE ((HRESULT)0x80040E80)
#define DB_E_BADUPDATEDELETERULE ((HRESULT)0x80040E8A)
#define DB_E_BADCONSTRAINTID ((HRESULT)0x80040E8B)
#define DB_E_BADCOMMANDFLAGS ((HRESULT)0x80040E8C)
#define DB_E_OBJECTMISMATCH ((HRESULT)0x80040E8D)
#define DB_E_NOSOURCEOBJECT ((HRESULT)0x80040E91)
#define DB_E_RESOURCELOCKED ((HRESULT)0x80040E92)
#define DB_E_NOTCOLLECTION ((HRESULT)0x80040E93)
#define DB_E_READONLY ((HRESULT)0x80040E94)
#define DB_E_ASYNCNOTSUPPORTED ((HRESULT)0x80040E95)
#define DB_E_CANNOTCONNECT ((HRESULT)0x80040E96)
#define DB_E_TIMEOUT ((HRESULT)0x80040E97)
#define DB_E_RESOURCEEXISTS ((HRESULT)0x80040E98)
#define DB_E_RESOURCEOUTOFSCOPE ((HRESULT)0x80040E8E)
#define DB_E_DROPRESTRICTED ((HRESULT)0x80040E90)
#define DB_E_DUPLICATECONSTRAINTID ((HRESULT)0x80040E99)
#define DB_E_OUTOFSPACE ((HRESULT)0x80040E9A)
#define SEC_E_PERMISSIONDENIED DB_SEC_E_PERMISSIONDENIED
#endif

#if (OLEDBVER >= 0x0250)
#define DB_SEC_E_SAFEMODE_DENIED ((HRESULT)0x80040E9B)
#endif

#if (OLEDBVER >= 0x0260)
#define DB_E_NOSTATISTIC ((HRESULT)0x80040E9C)
#define DB_E_ALTERRESTRICTED ((HRESULT)0x80040E9D)
#define DB_E_RESOURCENOTSUPPORTED ((HRESULT)0x80040E9E)
#define DB_E_NOCONSTRAINT ((HRESULT)0x80040E9F)
#define DB_E_COLUMNUNAVAILABLE ((HRESULT)0x80040EA0)
#endif

#define DB_S_ROWLIMITEXCEEDED ((HRESULT)0x00040EC0)
#define DB_S_COLUMNTYPEMISMATCH ((HRESULT)0x00040EC1)
#define DB_S_TYPEINFOOVERRIDDEN ((HRESULT)0x00040EC2)
#define DB_S_BOOKMARKSKIPPED ((HRESULT)0x00040EC3)

#if (OLEDBVER >= 0x0200)
#define DB_S_NONEXTROWSET ((HRESULT)0x00040EC5)
#endif

#define DB_S_ENDOFROWSET ((HRESULT)0x00040EC6)
#define DB_S_COMMANDREEXECUTED ((HRESULT)0x00040EC7)
#define DB_S_BUFFERFULL ((HRESULT)0x00040EC8)
#define DB_S_NORESULT ((HRESULT)0x00040EC9)
#define DB_S_CANTRELEASE ((HRESULT)0x00040ECA)

#if (OLEDBVER >= 0x0250)
#define DB_S_GOALCHANGED ((HRESULT)0x00040ECB)
#endif

#if (OLEDBVER >= 0x0150)
#define DB_S_UNWANTEDOPERATION ((HRESULT)0x00040ECC)
#endif

#define DB_S_DIALECTIGNORED ((HRESULT)0x00040ECD)
#define DB_S_UNWANTEDPHASE ((HRESULT)0x00040ECE)
#define DB_S_UNWANTEDREASON ((HRESULT)0x00040ECF)

#if (OLEDBVER >= 0x0150)
#define DB_S_ASYNCHRONOUS ((HRESULT)0x00040ED0)
#endif

#define DB_S_COLUMNSCHANGED ((HRESULT)0x00040ED1)
#define DB_S_ERRORSRETURNED ((HRESULT)0x00040ED2)
#define DB_S_BADROWHANDLE ((HRESULT)0x00040ED3)
#define DB_S_DELETEDROW ((HRESULT)0x00040ED4)

#if (OLEDBVER >= 0x0250)
#define DB_S_TOOMANYCHANGES ((HRESULT)0x00040ED5)
#endif

#define DB_S_STOPLIMITREACHED ((HRESULT)0x00040ED6)
#define DB_S_LOCKUPGRADED ((HRESULT)0x00040ED8)
#define DB_S_PROPERTIESCHANGED ((HRESULT)0x00040ED9)
#define DB_S_ERRORSOCCURRED ((HRESULT)0x00040EDA)
#define DB_S_PARAMUNAVAILABLE ((HRESULT)0x00040EDB)
#define DB_S_MULTIPLECHANGES ((HRESULT)0x00040EDC)

#if (OLEDBVER >= 0x0210)
#define DB_S_NOTSINGLETON ((HRESULT)0x00040ED7)
#define DB_S_NOROWSPECIFICCOLUMNS ((HRESULT)0x00040EDD)
#endif

#ifdef MESSAGESANDHEADERS
#define STG_E_FILENOTFOUND ((HRESULT)0x80030002)
#define STG_E_PATHNOTFOUND ((HRESULT)0x80030003)
#define STG_E_FILEALREADYEXISTS ((HRESULT)0x80030050)
#define STG_E_INVALIDHEADER ((HRESULT)0x800300FB)
#define STG_E_INVALIDNAME ((HRESULT)0x800300FC)
#define STG_E_OLDFORMAT ((HRESULT)0x80030104)
#define STG_E_OLDDLL ((HRESULT)0x80030105)
#endif
#endif
