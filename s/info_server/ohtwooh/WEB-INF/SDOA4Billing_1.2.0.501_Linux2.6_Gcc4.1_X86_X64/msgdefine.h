//��Ϣ���Ͷ���
#ifndef MSGDEFINE_H
#define MSGDEFINE_H


/*--------------------------------ʱ����֤------------------------------*/
#define  AUTHORREQUEST								0X1
#define  AUTHORRESPONSE								0X80000001

/*---------------------------------�۷�---------------------------------*/
#define  ACCOUNTREQUEST								0X2
#define  ACCOUNTRESPONSE							0X80000002

/*-------------------------------�˻���֤-------------------------------*/
#define  ACCOUNTAUTHENREQUEST						0X3
#define  ACCOUNTAUTHENRESPONSE						0X80000003

/*---------------------------------Ԥ��---------------------------------*/
#define  ACCOUNTLOCKREQUEST							0X4
#define  ACCOUNTLOCKRESPONSE						0X80000004

/*---------------------------------�ⶳ---------------------------------*/
#define  ACCOUNTUNLOCKREQUEST						0X5
#define  ACCOUNTUNLOCKRESPONSE						0X80000005

/*---------------------------------����ת��-----------------------------*/
#define  CONSIGNTRANSFERREQUEST						0X6
#define  CONSIGNTRANSFERRESPONSE					0X80000006

/*---------------------------------Ԥ����չ-----------------------------*/
#define  ACCOUNTLOCKEXREQUEST						0X7
#define  ACCOUNTLOCKEXRESPONSE						0X80000007

/*---------------------------------�ⶳ��չ-----------------------------*/
#define  ACCOUNTUNLOCKEXREQUEST						0X8
#define  ACCOUNTUNLOCKEXRESPONSE					0X80000008

/*---------------------------------�콱---------------------------------*/
/*-------------------------------�콱��֤-------------------------------*/
#define  AWARDAUTHENREQUEST							0X9
#define  AWARDAUTHENRESPONSE						0X80000009


/*-------------------------------�콱ȷ��-------------------------------*/
#define  AWARDACKREQUEST							0X10
#define  AWARDACKRESPONSE							0X80000010

/*-------------------------------����ȯ����-----------------------------*/
#define  TOKENDEPOSITREQUEST						0X11
#define  TOKENDEPOSITRESPONSE						0X80000011

/*-------------------------------Ԫ����ʱ��-----------------------------*/
#define  GOLDCONSUMELOCKREQUEST						0X12
#define  GOLDCONSUMELOCKRESPONSE					0X80000012

#define  GOLDCONSUMEUNLOCKREQUEST					0X13
#define  GOLDCONSUMEUNLOCKRESPONSE					0X80000013

/*-------------------------------����ϵͳ-------------------------------*/
#define  ITEMSYNCREQUEST							0X14
#define  ITEMSYNCRESPONSE							0X80000014

/*-------------------------------���Ҷһ�-------------------------------*/
#define  ACCOUNTEXCHANGELOCKREQUEST					0X15
#define  ACCOUNTEXCHANGELOCKRESPONSE				0X80000015

#define  ACCOUNTEXCHANGEUNLOCKREQUEST				0X16
#define  ACCOUNTEXCHANGEUNLOCKRESPONSE				0X80000016

/*------------------------------�ܱ���--------------------------------*/
#define  EKEYBINDREQUEST							0X17
#define  EKEYBINDRESPONSE							0X80000017

/*--------------------NotifyS2CReqDef----------------------------------*/
#define  NOTIFYS2CREQUEST							0X18
#define  NOTIFYS2CRESPONSE							0X80000018

//------------------NotifyC2SReqDef------------------------------------*/
#define  NOTIFYC2SREQUEST							0X19
#define  NOTIFYC2SRESPONSE							0X80000019



#endif