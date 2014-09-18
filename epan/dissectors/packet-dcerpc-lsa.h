/* DO NOT EDIT
	This file was automatically generated by Pidl
	from lsa.idl and lsa.cnf.

	Pidl is a perl based IDL compiler for DCE/RPC idl files.
	It is maintained by the Samba team, not the Wireshark team.
	Instructions on how to download and install Pidl can be
	found at http://wiki.wireshark.org/Pidl
*/

#ifndef __PACKET_DCERPC_LSARPC_H
#define __PACKET_DCERPC_LSARPC_H

#define LSA_ENUM_TRUST_DOMAIN_MULTIPLIER	( 60 )

#define LSA_REF_DOMAIN_LIST_MULTIPLIER	( 32 )

#define LSA_ENUM_TRUST_DOMAIN_EX_MULTIPLIER	( 82 )

int lsarpc_dissect_bitmap_lsa_PolicyAccessMask(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_bitmap_lsa_AccountAccessMask(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_bitmap_lsa_DomainAccessMask(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_bitmap_lsa_SecretAccessMask(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_bitmap_security_secinfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_String(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_StringLarge(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_Strings(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_AsciiString(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_AsciiStringLarge(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_LUID(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_PrivEntry(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_PrivArray(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define LSA_SECURITY_ANONYMOUS (0)
#define LSA_SECURITY_IDENTIFICATION (1)
#define LSA_SECURITY_IMPERSONATION (2)
#define LSA_SECURITY_DELEGATION (3)
extern const value_string lsarpc_lsa_SecurityImpersonationLevel_vals[];
int lsarpc_dissect_enum_lsa_SecurityImpersonationLevel(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint1632 *param _U_);
int lsarpc_dissect_struct_lsa_QosInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_ObjectAttribute(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_AuditLogInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define LSA_AUDIT_POLICY_NONE (0)
#define LSA_AUDIT_POLICY_SUCCESS (1)
#define LSA_AUDIT_POLICY_FAILURE (2)
#define LSA_AUDIT_POLICY_ALL ((LSA_AUDIT_POLICY_SUCCESS|LSA_AUDIT_POLICY_FAILURE))
#define LSA_AUDIT_POLICY_CLEAR (4)
extern const value_string lsarpc_lsa_PolicyAuditPolicy_vals[];
int lsarpc_dissect_enum_lsa_PolicyAuditPolicy(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 *param _U_);
#define LSA_AUDIT_CATEGORY_SYSTEM (0)
#define LSA_AUDIT_CATEGORY_LOGON (1)
#define LSA_AUDIT_CATEGORY_FILE_AND_OBJECT_ACCESS (2)
#define LSA_AUDIT_CATEGORY_USE_OF_USER_RIGHTS (3)
#define LSA_AUDIT_CATEGORY_PROCCESS_TRACKING (4)
#define LSA_AUDIT_CATEGORY_SECURITY_POLICY_CHANGES (5)
#define LSA_AUDIT_CATEGORY_ACCOUNT_MANAGEMENT (6)
#define LSA_AUDIT_CATEGORY_DIRECTORY_SERVICE_ACCESS (7)
#define LSA_AUDIT_CATEGORY_ACCOUNT_LOGON (8)
extern const value_string lsarpc_lsa_PolicyAuditEventType_vals[];
int lsarpc_dissect_enum_lsa_PolicyAuditEventType(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint1632 *param _U_);
int lsarpc_dissect_struct_lsa_AuditEventsInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_DomainInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_PDAccountInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define LSA_POLICY_ROLE_BACKUP (2)
#define LSA_POLICY_ROLE_PRIMARY (3)
extern const value_string lsarpc_lsa_PolicyServerRole_vals[];
int lsarpc_dissect_enum_lsa_PolicyServerRole(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint1632 *param _U_);
int lsarpc_dissect_struct_lsa_ServerRole(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_ReplicaSourceInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_DefaultQuotaInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_ModificationInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_AuditFullSetInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_AuditFullQueryInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_DnsDomainInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define LSA_POLICY_INFO_AUDIT_LOG (1)
#define LSA_POLICY_INFO_AUDIT_EVENTS (2)
#define LSA_POLICY_INFO_DOMAIN (3)
#define LSA_POLICY_INFO_PD (4)
#define LSA_POLICY_INFO_ACCOUNT_DOMAIN (5)
#define LSA_POLICY_INFO_ROLE (6)
#define LSA_POLICY_INFO_REPLICA (7)
#define LSA_POLICY_INFO_QUOTA (8)
#define LSA_POLICY_INFO_DB (9)
#define LSA_POLICY_INFO_AUDIT_FULL_SET (10)
#define LSA_POLICY_INFO_AUDIT_FULL_QUERY (11)
#define LSA_POLICY_INFO_DNS (12)
#define LSA_POLICY_INFO_DNS_INT (13)
#define LSA_POLICY_INFO_LOCAL_ACCOUNT_DOMAIN (14)
extern const value_string lsarpc_lsa_PolicyInfo_vals[];
int lsarpc_dissect_enum_lsa_PolicyInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint1632 *param _U_);
int lsarpc_dissect_struct_lsa_SidPtr(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_SidArray(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_DomainList(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define SID_NAME_USE_NONE (0)
#define SID_NAME_USER (1)
#define SID_NAME_DOM_GRP (2)
#define SID_NAME_DOMAIN (3)
#define SID_NAME_ALIAS (4)
#define SID_NAME_WKN_GRP (5)
#define SID_NAME_DELETED (6)
#define SID_NAME_INVALID (7)
#define SID_NAME_UNKNOWN (8)
#define SID_NAME_COMPUTER (9)
extern const value_string lsarpc_lsa_SidType_vals[];
int lsarpc_dissect_enum_lsa_SidType(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint1632 *param _U_);
int lsarpc_dissect_struct_lsa_TranslatedSid(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TransSidArray(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_RefDomainList(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define LSA_LOOKUP_NAMES_ALL (1)
#define LSA_LOOKUP_NAMES_DOMAINS_ONLY (2)
#define LSA_LOOKUP_NAMES_PRIMARY_DOMAIN_ONLY (3)
#define LSA_LOOKUP_NAMES_UPLEVEL_TRUSTS_ONLY (4)
#define LSA_LOOKUP_NAMES_FOREST_TRUSTS_ONLY (5)
#define LSA_LOOKUP_NAMES_UPLEVEL_TRUSTS_ONLY2 (6)
extern const value_string lsarpc_lsa_LookupNamesLevel_vals[];
int lsarpc_dissect_enum_lsa_LookupNamesLevel(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint1632 *param _U_);
int lsarpc_dissect_struct_lsa_TranslatedName(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TransNameArray(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_LUIDAttribute(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_PrivilegeSet(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_DATA_BUF(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_DATA_BUF2(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define LSA_TRUSTED_DOMAIN_INFO_NAME (1)
#define LSA_TRUSTED_DOMAIN_INFO_CONTROLLERS_INFO (2)
#define LSA_TRUSTED_DOMAIN_INFO_POSIX_OFFSET (3)
#define LSA_TRUSTED_DOMAIN_INFO_PASSWORD (4)
#define LSA_TRUSTED_DOMAIN_INFO_BASIC (5)
#define LSA_TRUSTED_DOMAIN_INFO_INFO_EX (6)
#define LSA_TRUSTED_DOMAIN_INFO_AUTH_INFO (7)
#define LSA_TRUSTED_DOMAIN_INFO_FULL_INFO (8)
#define LSA_TRUSTED_DOMAIN_INFO_11 (11)
#define LSA_TRUSTED_DOMAIN_INFO_INFO_ALL (12)
extern const value_string lsarpc_lsa_TrustDomInfoEnum_vals[];
int lsarpc_dissect_enum_lsa_TrustDomInfoEnum(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint1632 *param _U_);
int lsarpc_dissect_struct_lsa_TrustDomainInfoName(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TrustDomainInfoPosixOffset(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TrustDomainInfoPassword(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TrustDomainInfoBasic(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TrustDomainInfoInfoEx(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TrustDomainInfoBuffer(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TrustDomainInfoAuthInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TrustDomainInfoFullInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TrustDomainInfo11(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TrustDomainInfoInfoAll(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_DATA_BUF_PTR(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_RightAttribute(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_RightSet(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_StringPointer(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_DomainListEx(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_DomainInfoKerberos(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_DomainInfoEfs(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define LSA_DOMAIN_INFO_POLICY_QOS (1)
#define LSA_DOMAIN_INFO_POLICY_EFS (2)
#define LSA_DOMAIN_INFO_POLICY_KERBEROS (3)
extern const value_string lsarpc_lsa_DomainInfoEnum_vals[];
int lsarpc_dissect_enum_lsa_DomainInfoEnum(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint1632 *param _U_);
int lsarpc_dissect_struct_lsa_TranslatedName2(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TransNameArray2(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TranslatedSid2(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TransSidArray2(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TranslatedSid3(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_TransSidArray3(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_ForestTrustBinaryData(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_ForestTrustDomainInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define LSA_FOREST_TRUST_TOP_LEVEL_NAME (0)
#define LSA_FOREST_TRUST_TOP_LEVEL_NAME_EX (1)
#define LSA_FOREST_TRUST_DOMAIN_INFO (2)
#define LSA_FOREST_TRUST_RECORD_TYPE_LAST (3)
extern const value_string lsarpc_lsa_ForestTrustRecordType_vals[];
int lsarpc_dissect_enum_lsa_ForestTrustRecordType(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 *param _U_);
int lsarpc_dissect_struct_lsa_ForestTrustRecord(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int lsarpc_dissect_struct_lsa_ForestTrustInformation(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
extern int
lsarpc_dissect_sec_desc_buf(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info* di, guint8 *drep);
extern int
lsarpc_dissect_struct_dom_sid2(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info* di, guint8 *drep, int unused1, int unused2);

#endif /* __PACKET_DCERPC_LSARPC_H */
