#pragma once

//#define DEBUG_LOG

static const int max_client_count = 16;
static const int max_botclient_count = 4;
static const int max_dropped_gun_count = 64;
static const int max_dropped_supply_count = 64;
static const int max_level_supply_count = 700;
static const int max_air_raid_count = 70;
static const int max_common_zombie_supply = 128;

#include <ext/hash_map>
#include <set>
#include <map>
#include <list>
#include <string>
#include <fstream>

#include "common.h"
#include "servererror.h"
#include "log.h"
#include "debuglog.h"
#include "tcpconnection.h"
#include "udpconnection.h"
#include "localconnection.h"
#include "compress.h"
#include "objectpool.h"
#include "dictmatch.h"
#include "levelinfo.h"
#include "roomoption.h"
#include "gag.h"

#include "characterinfo.h"

#include "Message.h"
#include "randfun.h"
#include "appcfg.h"
#include "Skill.h"
#include "ServerScript.h"
#include "serverconfig.h"
#include "pickup.h"
#include "client.h"
#include "game.h"

enum ServerType
{
	SvrType_None = 0,				// 
	SvrType_NewComer = 1,			// ����
	SvrType_Improve = 2,			// ����
	SvrType_PastMaster = 3,			// ����
	SvrType_StriveForResource = 4,	// ��Դ����ս
	SvrType_HappyJump = 5,			// ������
	SvrType_Match = 6,				// ƥ�� ������
	SvrType_MatchFighting = 7,				// �Զ�ƥ��
	SvrType_HageBattle = 8,				// ս������
};

extern AppCfg appcfg;
