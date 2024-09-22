/*
* Copyright (c) 2009,ʢ������ �Ʒ�ƽ̨����
* All rights reserved.
* 
* �ļ����ƣ�sdoa4billing.h
* ժ    Ҫ�����ӿں�������
* ��ǰ�汾��2.0
* ��    �ߣ�SNDA
* ������ڣ�2009��11��03��
*
*/

#ifndef SDOA4BILLING_H
#define SDOA4BILLING_H

#include "sndabase.h"

interface ISDOAMsg : ISDUnknown 
{
	//----------------------------------------------------------------------------------------
	//���ƣ�GetValue
	//��������ȡָ����Ϣ��ָ���ֶε�ֵ
	//������
	//	[in]szKey��         ���ݹؼ���
	//���أ�                �ؼ��ֶ�Ӧ�����ݣ�û�иùؼ��ַ���NULL
	//----------------------------------------------------------------------------------------
	SNDAMETHOD(const char*)	GetValue(const char* szKey) PURE;

	//----------------------------------------------------------------------------------------
	//���ƣ�SetValue
	//��������ָ����Ϣ���ָ���ֶε�ֵ
	//������
	//	[in]szKey��         ���ݹؼ���
	//	[in]szValue��       ����ֵ
	//���أ�                0�ɹ�������ʧ�ܣ�һ��Ϊ���ݳ��������
	//----------------------------------------------------------------------------------------
	SNDAMETHOD(int)	SetValue(const char* szKey, const char* szValue) PURE;
};
SNDAAPI(ISDOAMsg*) sdoaCreateMsg(void);

//---------------------------------------------------------------------------------------
//���ƣ�BillingCallback
//������������Ϣ�ص�����������sdkʹ�÷�ʵ�֣��յ���Ϣ����Ҫ����SendResponse����Ӧ��
//������
//	nMsgType��              ��Ϣ���ͣ����������յ���Ӧ����Ϣ����
//	pResponse��             Ӧ����Ϣ��Ӧ����Ϣ���ݣ���Ҫͨ��getValue������ȡָ��ֵ
//���أ�                    ��
//----------------------------------------------------------------------------------------
typedef int (SNDACALLBACK *BILLINGCALLBACKFUN)(int nMsgType, ISDOAMsg* pResponse);

interface ISDOBillingHandler : ISDUnknown
{
	//----------------------------------------------------------------------------------------
	//���ƣ�Initialize
	//��������ʼ���Ʒѿͻ���
	//������
	//	[in]szConfigFile��  �����ļ������ΪNULL��ʹ��ȱʡ��sdoa4server.ini�����ļ�
	//	[in]pCallbackFunc�� ��Ϣ����ص�����
	//���أ�                0 �ɹ���!0 ʧ�ܣ�
	//----------------------------------------------------------------------------------------
	 SNDAMETHOD(int) Initialize(const char *szConfigFile, BILLINGCALLBACKFUN callbackFun) PURE;
	//----------------------------------------------------------------------------------------
	//���ƣ�Uninitialize
	//�������Ʒѿͻ�������
	//������
	//	��
	//���أ�                0 �ɹ�������������ʧ�ܣ�
	//----------------------------------------------------------------------------------------
	 SNDAMETHOD(int) Uninitialize() PURE;	
	 //----------------------------------------------------------------------------------------
	//���ƣ�SendRequest
	//���������Ͷ�������
	//������
	//	��
	//���أ�                > 0 �ɹ���
	//						< 0ʧ�ܣ�
	//----------------------------------------------------------------------------------------
	 SNDAMETHOD(int) SendRequest(int nMsgType, const ISDOAMsg* req) PURE;
	//----------------------------------------------------------------------------------------
	//���ƣ�GetUniqueId
	//��������ȡΨһID��szId ��Ҫ33�ֽڿռ�,�������ɶ�����
	//������
	//	[in/out]szId            ���ݹؼ���
	//  ���أ�                  0�ɹ� ����ʧ��
	//----------------------------------------------------------------------------------------
	 SNDAMETHOD(int) GetUniqueId(char *szId) PURE;
	//----------------------------------------------------------------------------------------
	//���ƣ�GetUniqueIdByParam
	//������ͨ�����������ȡΨһID��szId ��Ҫ33�ֽڿռ�,�������ɶ�����
	//������
	//	[in]nAreaId             ��Ϸ��ID
	//	[in]nGroupId            ��Ϸ��ID
	//	[in/out]szId            ���ݹؼ���
	//  ���أ�                  0�ɹ� ����ʧ��
	//----------------------------------------------------------------------------------------
	 SNDAMETHOD(int) GetUniqueIdByParam(int nAreaId,int nGroupId, char *szId) PURE;
};
SNDAAPI(ISDOBillingHandler*) sdoaCreateBillingHandler();

//---------------------------------------------------------------------------------------
//���ƣ�UserInfoCallback
//��������֤��Ϣ�ص�����������sdkʹ�÷�ʵ��
//������
//	[out]nResult��          ������Ϣ���(�����������˵���μ���ش����ĵ�)
//	[out]nUniqueId��        ����ID
//	[in/out]pMsg��          ��Ϣ�������ýӿ�
//���أ���
//----------------------------------------------------------------------------------------
typedef int (SNDACALLBACK *UserInfoCallback)(int nResult, unsigned long nUniqueId, ISDOAMsg *pMsg);

interface ISDOAUserInfoAuthen : ISDUnknown
{
	//----------------------------------------------------------------------------------------
	//���ƣ�Initialize
	//��������ʼ��
	//������
	//	[in]szConfPath��    �����ļ������ΪNULL��ʹ��ȱʡ��ConfClt.conf�����ļ�
	//	[in]pCallbackFunc�� �ص�������ַ
	//���أ�                0 �ɹ���!0 ʧ�ܣ�
	//----------------------------------------------------------------------------------------
	SNDAMETHOD(int) Initialize(const char *szConfPath, UserInfoCallback pCallbackFunc) = 0;

	//----------------------------------------------------------------------------------------
	//���ƣ�AsyncGetUserInfo
	//�������첽��ȡ��֤���(ͨ��Initialize���ûص�����)
	//������
	//	[in]szSessionId��   ��Ҫ��֤��Token����SessionId
	//	[in]szEndpointIp��  �ͻ���IP
	//	[in]nUniqueId��     tokenΨһid
	//���أ�                0 �ɹ���!0 ʧ�ܣ�
	//----------------------------------------------------------------------------------------
	SNDAMETHOD(int) AsyncGetUserInfo(const char *szSessionId, const char *szEndpointIp, const unsigned long nUniqueId) = 0;

	//----------------------------------------------------------------------------------------
	//���ƣ�SyncGetUserInfo
	//������ͬ����ȡ��֤���
	//������
	//	[in]szSessionId��   ��Ҫ��֤��Token����SessionId
	//	[in]szEndpointIp��  �ͻ���IP
	//	[in]nUniqueId��     tokenΨһid
	//	[in/out]pMsg��      ���ص��û���Ϣ		
	//���أ�                0 �ɹ���!0 ʧ�ܣ�
	//----------------------------------------------------------------------------------------
	SNDAMETHOD(int) SyncGetUserInfo(const char *szSessionId, const char *szEndpointIp, const unsigned long nUniqueId, ISDOAMsg* pMsg) = 0;

};
SNDAAPI(ISDOAUserInfoAuthen*) sdoaCreateUserInfoAuthen(void);

#endif
