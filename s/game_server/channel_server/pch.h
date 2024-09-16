#pragma once

struct IEvent;
class Client;
struct RoomOption;
class Room;
class ServerConnection;
class GameConnection;

static const int update_time = 30;

#define max_room_client_count 16

#include "common.h"
#include "servererror.h"
#include "log.h"
#include "tcpconnection.h"
#include "tcplistener.h"
#include "udpconnection.h"
#include "udplistener.h"
#include "localconnection.h"
#include "dictmatch.h"
#include "objectpool.h"
#include "levelinfo.h"
#include "roomoption.h"
#include "gag.h"
#include "compress.h"
#include "encoder.h"

#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>

#include "appcfg.h"
#include "proxyconnection.h"
#include "characterinfo.h"
#include "game.h"
#include "client.h"
#include "channelserver.h"
#include "room.h"

extern AppCfg appcfg;

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
	