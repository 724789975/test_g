#pragma once
#include "networkstream.h"
#include <vector>
#include <map>
#include <string>
#include <list>

enum WeaponType
{
	kWeaponTypeNone = 0,
	kWeaponTypePistol = 1,
	kWeaponTypeSubMachineGun = 2,
	kWeaponTypeRifle = 3,
	kWeaponTypeSniperGun = 4,
	kWeaponTypeShotGun = 5,
	kWeaponTypeMiniMachineGun = 6,
	kWeaponTypeMiniGun = 7,
	kWeaponTypeDualPistol = 8,
	kWeaponTypeMeditNeedleGun = 9,

	kWeaponTypeGunTowerBuilder = 13,
	kWeaponTypeSignal = 14,
	kWeaponTypeCureGun = 15,
	kWeaponTypeFlameGun = 16,		//����ǹ ���� ��� �ؼ� ������
	kWeaponTypeLuncher = 17,
	kWeaponTypeBow = 18,
	kWeaponTypeKnife = 19,
	kWeaponTypeGrenade = 20,
	kWeaponTypeFlash = 21,
	kWeaponTypeSmoke = 22,
	kWeaponTypeSpecial = 23,
	
	kWeaponTypeAmmoRocket = 40,
	kWeaponTypeAmmoMeditNeedle = 41,
	kWeaponTypeAmmoGrenade = 42,
	kWeaponTypeAmmoStick = 43,
	kWeaponTypeAmmoArrow = 44,

	kWeaponTypeAmmoBloodDisk = 45,
	kWeaponTypeSelfHurt = 46,		//��ɱ��ˤ��
	kWeaponTypeDrum = 47,			//ս��
	kWeaponTypeMilkbottle = 48,		//��ţ¹�� 
	kWeaponTypeEquipment = 49,		//������װ����
	kWeaponTypeBomb = 50,
	kWeaponTypeZombieGun = 51,		//��ʬ�Ľ�������
	kWeaponTypeZombieCharge = 52,	//�������ǹ

	kWeaponTypeAmmoProd,
	kWeaponTypeGunTowerBuilderPlus,	//�༭��ͼר��ǹ

	kWeaponTypeCount,
};

enum WeaponDamageType
{
	kWeaponDamageNormal = 0,	//��ͨ
	kWeaponDamageFlame,			//����
	kWeaponDamageExplode,		//��ը
	kWeaponDamageBullet,		//�ӵ�
	kWeaponDamageClose,			//����
	
	kWeaponDamageCount,
};

enum BuffItemId
{
	kBuffIdNone = 0,
	kBuffIdRoom = 1,
};

enum BuffItemType
{
	kBuffTypeNone = 0,
	
	kBuffTypeExperience = 1,
	kBuffTypeMoney = 2,
	kBuffTypeHealthMax = 3,
	kBuffTypeAmmo = 4,
	kBuffTypeHealth = 5,
	kBuffTypeSpray = 6,
	kBuffTypeMainWeaponAmmo = 9,
	kBuffTypeHoldPoint = 11,
	kBuffTypePushVehicle = 12,
	kBuffTypeRebirthSpeed = 13,
	
	kBuffTypeTeamDamage = 63,
	kBuffTypeTeamHealthMax = 64,
	kBuffTypeTeamSupplyAmmo = 67,
	kBuffTypeTeamSupplyHp = 68,
	kBuffTypeTeamCareerId1SelfResistance = 69,
	kBuffTypeTeamCareerId2 = 70,
	kBuffTypeTeamCareerId3GunEnergy = 71,
	kBuffTypeTeamCareerId4ReloadTime = 72,
	kBuffTypeTeamCareerId5AmmoCount = 73,
	kBuffTypeTeamCareerId6CureEnergy = 74,
	
	kBuffTypeDamage = 81,
	kBuffTypeResistance = 82,
};

enum ArmorType
{
	kArmorTypeNone = 0,
	kArmorTypeNormal = 1,
};

enum WeaponAttributeType
{
	kWeaponAttrNone = 0,
	
	//�����Ժ�Է����ֵ�Ч���ࣺ
	kWeaponAttr_Target_SlowDown = 1,			//�����Ժ�Է�X���ڼ����ƶ��ٶ�X%										finish
	kWeaponAttr_Target_AlwaysBeBoost = 2,			//�����Ժ�Է�X�����ܵ����й������Ǳ���								finish
	kWeaponAttr_Target_AlwaysBeSubBoost = 3,		//�����Ժ�Է�X�����ܵ����й����ܵ��Ĺ�������С���� 				finish
	kWeaponAttr_Target_SustainHurt = 4,			//�����Ժ�Է�����X���ڼ���XѪ����״̬�������˺��ࣩ					finish
	kWeaponAttr_Target_BulletResistanceReduce = 5,	//�����Ժ�Է�����X�����ӵ�����ը��������߻����˺����Լ���x%��״̬	finish
	kWeaponAttr_Target_ExplodeResistanceReduce = 6,	//���������������������������������  finish
	kWeaponAttr_Target_CloseResistanceReduce = 7,	//���������������������������������  finish
	kWeaponAttr_Target_FlameResistanceReduce = 8,	//���������������������������������	finish
	kWeaponAttr_Target_RecoverReduce = 9,		//�����Ժ�Է�����X�����X%��ҽ�ư�����Ѫ����״̬						finish
	kWeaponAttr_Target_CureReduce = 10,			//�����Ժ�Է�����X�����X%����������״̬								finish
	kWeaponAttr_Target_CannotHide = 11,			//�����Ժ�X���ڶԷ��޷�����
	kWeaponAttr_Target_ReversalMouse = 12,		//�����к�����X������귴ת											finish
	kWeaponAttr_Target_ViewLost = 13,			//�����к�����X������Ұģ��											finish
	kWeaponAttr_Target_AmmoJump = 14,			//�����к�����														finish
	kWeaponAttr_Target_ReversalMouse2 = 15,     //�����к���귴ת ������Ұģ��											finish
	kWeaponAttr_Target_ViewLost2 = 16,			//�����к���Ұģ�� ������귴ת											finish


	//���жԷ��Ժ��Ժ��Լ����ֵ�Ч����
	kWeaponAttr_From_SpeedInfect = 30,			//ʹ������ÿ��ɱ�����ӻ���ٱ�׼�ƶ��ٶȵ�X%							finish
	kWeaponAttr_From_LowBloodHighDamage = 31,	//ʹ������ʱ�Լ���Ѫ��ÿ����X%�˺�������X%								finish
	kWeaponAttr_From_CannotBoost = 32,			//ʹ����������Ҳ�������������										finish		
	kWeaponAttr_From_BoostAdd = 33,				//ʹ������ʱÿ��ɱ�˻���X��ı���״̬									finish		
	kWeaponAttr_From_SubBoostAdd = 34,			//ʹ������ʱÿ��ɱ�˻���X��Ĺ�������С���� 							finish

	kWeaponAttr_From_SuckBloodInAttack = 35,		//ʹ���������жԷ�Ϊ�Լ��ָ�X��Ѫ��									finish
	kWeaponAttr_From_BoostBloodAfterKill = 36,		//ʹ������ÿ��ɱ�������������ֵ��X										
	kWeaponAttr_From_SuckBloodAfterKill = 37,		//ʹ������ÿ��ɱ�˻ָ�����X												finish
	kWeaponAttr_From_SubBoostInSneakattack = 38,	//ʹ���������жԷ�����Ĺ�������С����									
	kWeaponAttr_From_SubBoostWhenBurn = 39,			//ʹ����������ȼ���еĵ���X%�������С����		value1�������������֮��		finish
	kWeaponAttr_From_AddCureEnergyInAttack = 40,	//ʹ����������Ŀ���Ժ�����X%����������ҽ�Ʊ��ࣩ
	kWeaponAttr_From_AddCureEnergyAfterKill = 41,	//ʹ������ÿ��ɱ������X%����������ҽ�Ʊ��ࣩ
	kWeaponAttr_From_AddHideEnergyAfterAttack = 42,	//ʹ����������Ŀ���Ժ�����X%��������������ࣩ
	kWeaponAttr_From_DropSupplyAfterKill = 43,		//ʹ������ÿ��ɱ��ʱ�Է������һ��ҽ�ư����ߵ�ҩ�������⣬������
	kWeaponAttr_From_AddDamageOnBuilding = 44,		//ʹ�������Եз���������X%���˺�
	kWeaponAttr_From_AddWeaponDamage = 45,			//ʹ�������Եз�����X%���˺�

	//װ��������������ֵ�Ч���ࣨʼ�ն������Ч�����л��ɸ��������������ʱ��
	kWeaponAttr_Self_CannotSlowDown = 60,	//װ����������Ҳ��ᱻ�Է�����						finished
	kWeaponAttr_Self_SpeedInfect = 61,			//װ��������������Ӽ��ٱ�׼�ƶ��ٶȵ�X%		finished
	kWeaponAttr_Self_CannotBeBoost = 62,			//װ����������Ҳ����ܵ��������			finished
	kWeaponAttr_Self_CannotBeBurn = 63,			//װ����������Ҳ�������Ӱ��					finished  
	kWeaponAttr_Self_CannotBeCut = 64,		//װ����������Ҳ��ܸ��˵�Ӱ��						finished
	kWeaponAttr_Self_AlwaysSubBoost = 65,		//װ������������ܵ��Ĺ�������С����			finished
	kWeaponAttr_Self_RecoverInfectMore = 66,	//ҽ�ư���Ѫ������
	kWeaponAttr_Self_BulletResistance = 67,		//װ������������ӵ���������ը���߻����˺���������X% finished
	kWeaponAttr_Self_ExplodeResistance = 68,		//���������������������������������finished
	kWeaponAttr_Self_CloseResistance = 69,		//���������������������������������finished
	kWeaponAttr_Self_FlameResistance = 70,		//���������������������������������finished
	kWeaponAttr_Self_RecoverInfect = 71,			//װ��������������ӻ��߼���X%��ҽ�ư������Ѫ��finish
	kWeaponAttr_Self_CureInfect = 72,			//װ��������������ӻ��߼���X%��������			finish
	kWeaponAttr_Self_MaxBloodInfect = 73,		//װ�����������Ѫ���������ӻ��߼���X			finish
	kWeaponAttr_Self_AmmoOneClipInfect = 74,		//װ������������ӵ����������ӻ��߼���X%	finish
	kWeaponAttr_Self_AmmoCountInfect = 75,		//װ������������ص������ӻ��߼���X%			finish
	kWeaponAttr_Self_FireTimeInfect = 76,		//װ����������ҹ����ٶ����ӻ��߼���X%			finish
	kWeaponAttr_Self_ReloadTimeInfect = 77,		//װ����������һ����ٶ����ӻ��߼���X%			finish
	kWeaponAttr_Self_ChangeInTimeInfect = 78,	//װ������ʱ����л������ٶ����ӻ��߼���X%		finish
	kWeaponAttr_Self_DamageInfect = 79,			//װ�������������ɵ��˺����ӻ��߼���X%		finish
	kWeaponAttr_Self_CannotBeCure = 80,			//װ������������޷���ҽ�Ʊ����ƻ���Я���		finish
	kWeaponAttr_Self_AmmoFlySpeedInfect = 81,	//װ������������ӵ������ٶ����ӻ��߼���X%��������ࣩ	finish
	kWeaponAttr_Self_HurtRangeInfect = 82,		//װ������������ӵ���ը��Χ���ӻ��߼���X%��������ࡢ�ű����ࣩfinish
	kWeaponAttr_Self_SelfHurtInfect = 83,		//װ����������Ҷ�������˺����ӻ��߼���X%����������ű����ࣩfinish
	kWeaponAttr_Self_AliveTimeInfect = 84,		//װ��������������ӳٱ�ըʱ�����ӻ��߼���X�루�ű����ࣩ finish
	kWeaponAttr_Self_PrepareFireTimeInfect = 85,//װ����������Ҽӿ�������ǹ����ǹ�ٶ�X%���ػ�ǹ���ࣩ	finish
	kWeaponAttr_Self_SpeedInfectWhenShoot = 86,	//װ�����������ʹ���ػ�ǹʱ���ӻ���ٱ�׼�ƶ��ٶȵ�X%���ػ�ǹ���ࣩfinish
	kWeaponAttr_Self_SniperEnergyInfect = 87,	//װ��������������������ٶ����ӻ����X% ���ѻ����ࣩfinish
	kWeaponAttr_Self_EngineerEnergyInfect = 88,	//װ����������ҽ����ٶȼӿ�����X%�����̱��ࣩ
	kWeaponAttr_Self_EngineerBuildingInfect = 89,//װ����������ҽ�����Ľ�����Ѫ�����ӻ����X%�����̱��ࣩ
	kWeaponAttr_Self_CureEnergyInfect = 90,		//װ����������ҳ����ٶȼӿ�����X%��ҽ�Ʊ���	finish
	kWeaponAttr_Self_AutoRecoverInfect = 91,	//װ�����������ÿ�����ӻ����X�Զ��ظ�Ѫ����ҽ�Ʊ���	finish
	kWeaponAttr_Self_CannotOutFlame = 92,		//װ����������Ҳ���ʹ��ѹ��������������ࣩ	finish
	kweaponAttr_Self_SniperAssist = 93,			//�龵��������									finish
	kWeaponAttr_Self_LowBloodHighSpeed = 94,	//װ������ʱ�Լ���Ѫ��ÿ����X%�ƶ��ٶȾ�����X%	finish
	kWeaponAttr_Self_RocketControl = 95,		//װ���ǿ��Կ��ƻ���� value1 Ϊ���Ʒ�ʽ 1:Ϊ�������� 2:Ϊ�ȸ��� 3:Ϊ�����ң�� value2Ϊ����ƫ�ƽǶ����� timeΪ�����ڼ��뿪ʼ�ܹ���ʼ������Ϊ
	kWeaponAttr_Self_AmmoJump = 96,				//�����к�����														finish
	kWeaponAttr_Self_Transparency = 97,			//װ������ʱ���ƶ�ʱ��͸��
	kWeaponAttr_Self_MiniGunAccurate = 98,		//ʹ��ת��ǹ�ڲ��ƶ���ǹ��������𽥱�׼ (����)	
	kWeaponAttr_Self_AutoAmmoRecoverInfect = 99,//װ�����������ÿ�����ӻ����X�Զ��ظ���ҩ		finish

	kWeaponAttr_Benefit_DamageAdd  = 100,		//װ����������һ����Լ��˺�X���ڹ�������D%		finish
	kWeaponAttr_Benefit_DefenceAdd  = 101,		//װ����������һ����Լ��˺�X���ڷ�������D%		finish

	kWeaponAttr_Self_DamageFireman = 110,
	kWeaponAttr_Self_DamageButcher = 111,
	kWeaponAttr_Self_DamageOfficelady = 112,
	kWeaponAttr_Self_DamageLeader = 113,
	kWeaponAttr_Self_DamageFirebat = 114,
	kWeaponAttr_Self_DamageMedic = 115,
	kWeaponAttr_Self_ResistanceFireman = 116,
	kWeaponAttr_Self_ResistanceButcher = 117,
	kWeaponAttr_Self_ResistanceOfficelady = 118,
	kWeaponAttr_Self_ResistanceLeader = 119,
	kWeaponAttr_Self_ResistanceFirebat = 120,
	kWeaponAttr_Self_ResistanceMedic = 121,
	kWeaponAttr_Self_AddScore = 122,
	kWeaponAttr_Self_DamageEngineer = 123,
	kWeaponAttr_Self_ResistanceEngineer = 124,
	
	kWeaponAttr_Skill_AddBlood = 150,			//ʹ�������ؼ���3����Ѫ��						finish
	kWeaponAttr_Skill_Invincible = 151,			//ʹ�������ؼ����޵У�							finish
	kWeaponAttr_Skill_Boost = 152,				//ʹ�������ؼ���������

	kWeaponAttr_ZombieSkill_AllResistance = 160,		//��ʬȫ���Ը���
	kWeaponAttr_ZombieSkill_MoveMent = 161,				//��ʬ�ƶ��ٶ��޸�
	kWeaponAttr_ZombieSkill_JumpHeight = 162,			//��ʬ��Ծ�߶��޸�
	kWeaponAttr_ZombieSkill_Bomer = 163,				//��ʬ�Ա�
	kWeaponAttr_ZombieSkill_Charge = 164,				//��ʬ���
	kWeaponAttr_ZombieSkill_FOV = 165,					//��ʬFOV
	kWeaponAttr_ZombieSkill_HitBack = 166,			// ��ʬ����

	kWeaponAttr_CommonZombieSkill_Invisible = 170,		//װ�����������X��������						finish=======

	kWeaponAttr_CommonZombieSkill_Smog = 171,		    //װ������������ͷŶ���						finish=======
	
	kWeaponAttr_Turret_TurnSpeedInfect = 200,			//������ת���ٶ�����{0}%
	kWeaponAttr_Turret_ControlAreaInfect = 201,			//�����Ŀ��Ʒ�Χ����{0}%
	kWeaponAttr_Turret_AmmoOneClipInfect = 202,			//�������ӵ�����������{0}%
	kWeaponAttr_Turret_FireRangeInfect = 203,			//�����������������{0}%
	kWeaponAttr_Turret_FireSpeedInfect = 204,			//��������������{0}%
	kWeaponAttr_Turret_FireDamageInfect = 205,			//��������������{0}%

	// ��ɫ�Դ�����
	kCharacterSkill_EnergyShield	= 206,						// ������������

};

#define SYNC_BUFFER_SIZE		256

enum DummyType 
{
	DUMMY_BASE = 0,
	DUMMY_MACHINE_TURRENT,
}; 

#pragma pack(push,1)
struct ServerDummyCreateInfo
{
	Vector3 position;
	Quaternion rotation;

	int hp;
	int maxhp;

	char res_key[res_key_length];
};

struct ServerDummySyncData
{
	float time;
	int hp;
};

struct DummyBaseInfo
{
	byte type;
	byte sub_type;
	byte owner_id;
	uint id;
	char buffer[SYNC_BUFFER_SIZE];
	byte need_stepfather;
	byte team;
	byte can_hurt;
	int buf_length;
	DummyBaseInfo()
	{
		owner_id = 0;
		need_stepfather = 0;
	}
};

struct DummyCreateAction
{
	uint id;
	byte action;
	byte owner_id;
	byte stepfather;

	DummyCreateAction()
	{
		id = 0;
		action = 0;
		owner_id = 0;
		stepfather = 0;
	}
};

struct DummyBaseCreateInfo
{
	// dummy base
	int level;
	Vector3 position;
	Quaternion rotation;
	char  key[32];
	char  tower_key[32];
	uint max_hp;

	//respawn
	short freeze_count;
	float respawn_time;

	// machine gun turret
	int damage_modifier;
	float range_start;
	float range_end;
	float range_modifier;
	int base_damage;

	float check_angle;
	float check_range;
	float angle_speed;
	float fire_interval;
	float life_time;
	float distance;
	int	max_ammo_count;
	int current_ammo_count;

	float move_speed;
	float move_keep_time;

	// medical
	float recover_range;
	float recover_check_interval;
	int	  recover_per_count_life;
	int   recover_per_percent_ammo;
	int   recover_per_minus_ammo;
};

struct ServerDummyCreateWithStepFatherInfo
{
	byte type;
	byte sub_type;
	DummyBaseCreateInfo create_info;
};
#pragma pack(pop)	

struct WeaponInfo
{
	int type;

	float	change_in_time;
	float	move_speed_offset;
	float	cross_offset;
	float	cross_length_base;
	float	cross_length_factor;
	float	cross_distance_base;
	float	cross_distance_factor;

	float	hit_speed;
	float	hit_acceleration;
	float	hit_distance;
	int		hit_crit;
	int		hit_crit_head;
	int		damage_modifier;

	float	time_to_idle;
	
	int		combat_power;
	float	hitdamage_gui;
	float	hitspeed_gui;
	
	// ��game_server�ã������ڴ���
	float	time_to_idlecount;
};

struct GunInfo : public WeaponInfo
{
	struct SightInfo
	{
		float level;
		float sensitivity;
		float speed_offset;
		float fire_speed_factor;
		float kickbackscale;
	};
	
	int		accuracy_divisor;
	float	accuracy_offset;
	float	max_inaccuracy;

	int		penetration;
	int		damage;
	float	range_modifier;
	float	range_start;
	float	range_end;

	float	fire_time;
	float	reload_time;
	
	int		ammo_default_one_clip;
	int		ammo_default_count;

	bool	auto_fire;

	float	normal_offset;
	float	normal_factor;
	float	onair_offset;
	float	onair_factor;
	float	move_offset;
	float	move_factor;

	int			sight_count;
	SightInfo	sight_set[4];
	
	// ��game_server�ã������ڴ���
	int		ammo_one_clip;
	int		ammo_count;
	int		ammo_in_clip;
	int		ammo_count_current;
};

struct RifleInfo : public GunInfo
{
	float normal_up_base;
	float normal_lateral_base;
	float normal_up_modifier;
	float normal_lateral_modifier;
	float normal_up_max;
	float normal_lateral_max;
	float normal_dir_change;

	float move_up_base;
	float move_lateral_base;
	float move_up_modifier;
	float move_lateral_modifier;
	float move_up_max;
	float move_lateral_max;
	float move_dir_change;

	float onair_up_base;
	float onair_lateral_base;
	float onair_up_modifier;
	float onair_lateral_modifier;
	float onair_up_max;
	float onair_lateral_max;
	float onair_dir_change;

	float crouch_up_base;
	float crouch_lateral_base;
	float crouch_up_modifier;
	float crouch_lateral_modifier;
	float crouch_up_max;
	float crouch_lateral_max;
	float crouch_dir_change;
};

struct PistolInfo : public GunInfo
{
	float up_modifier;
	float accuracy_time;
	float accuracy_time_modifier;
	float max_accuracy;
	float min_accuracy;

	float normal_up_base;
	float normal_lateral_base;
	float normal_up_modifier;
	float normal_lateral_modifier;
	float normal_up_max;
	float normal_lateral_max;
	float normal_dir_change;

	float move_up_base;
	float move_lateral_base;
	float move_up_modifier;
	float move_lateral_modifier;
	float move_up_max;
	float move_lateral_max;
	float move_dir_change;

	float onair_up_base;
	float onair_lateral_base;
	float onair_up_modifier;
	float onair_lateral_modifier;
	float onair_up_max;
	float onair_lateral_max;
	float onair_dir_change;

	float crouch_up_base;
	float crouch_lateral_base;
	float crouch_up_modifier;
	float crouch_lateral_modifier;
	float crouch_up_max;
	float crouch_lateral_max;
	float crouch_dir_change;
};

struct DualPistolInfo : public PistolInfo
{
};	

struct SniperGunInfo : public GunInfo
{
	float sight_normal_offset;
	float sight_onair_offset;
	float sight_move_offset;
	float readytime;
};

struct ShotGunInfo : public GunInfo
{
	int   shoot_bullet_count;
	float spread;
	float normal_up_base;
	float normal_up_modifier;
	float normal_up_max;
};

struct SubMachineGunInfo : public RifleInfo
{
};

struct MachineGunInfo : public RifleInfo
{
};

struct MiniGunInfo : public RifleInfo
{
	float fire_max_speed;
	float fire_start_speed;
	float fire_accleration;
	float fire_resistance;
};

struct KnifeInfo : public WeaponInfo
{
  	float stab_time;
	float stab_light_time;

	float stab_distance;
	float stab_light_distance;
	float stab_width;
	float back_factor;

	float stab_hurt;
	float stab_light_hurt;
	int back_boost_plus;
};

struct ThrowableInfo : public WeaponInfo
{
 	float	explode_time;
	float 	ready_time;
	float	throw_out_time;
};

struct GrenadeInfo : public ThrowableInfo
{
	float	range;
	float	hurt;
};

struct FlashInfo : public ThrowableInfo
{
	float range_start;
	float range_end;
	float time_max;
	float time_fade;
	float back_factor;
};

struct SmokeInfo : public ThrowableInfo
{
	float	time;
};

struct FlameGunInfo : public GunInfo
{
	float special_distance;	//���⼼�����þ���
	float special_range;		//���⼼�����÷�Χ
	float special_lasttime;	//���⼼�ܳ���ʱ��
	float particlenum;
	float show_speed;
	float hurtrange;
};

struct MiniMachineGunInfo : public ShotGunInfo
{
	float fire_max_speed;
	float fire_start_speed;
	float fire_aceleration;
	float fire_resistance;
	float readytime;
	
	//luncher
	int ammo_type;
	float ammo_charge_time_max;
	float fly_speed[3];
	float fly_speed_multiple[3];
	//ammo
	float maxalive_time;
	byte gravity;
	float hurt;
	char ammopart_key[avata_part_length];
	float range;
	float dmg_modify_timer_min;
	float dmg_modify_timer_max;
	float dmg_modify_min;
	float dmg_modify_max;
	float capsule_height;
	float capsule_radius;
};

struct BowInfo : public GunInfo
{

};

struct AmmoInfo : public WeaponInfo
{
	float maxalive_time;
	byte  gravity;
	float range;
	float damage;
	float dmg_modify_timer_min;
	float dmg_modify_timer_max;
	float dmg_modify_min;
	float dmg_modify_max;

	float capsule_height;
	float capsule_radius;

	bool isboost;
};


struct LuncherInfo : public GunInfo
{
	int   ammo_type;
	float fly_speed;
	float spread;
	float normal_up_base;
	float normal_up_modifier;
	float normal_up_max;
	float maxalive_time;
	byte  gravity;
	float hurt;
	char  ammopart_key[avata_part_length];
	float range;
	float throwouttime;
	float dmg_modify_timer_min;
	float dmg_modify_timer_max;
	float dmg_modify_min;
	float dmg_modify_max;

	float capsule_height;
	float capsule_radius;

	// ammo hide -----------------------
	float ammo_hide_time; //stab_time
	// ---------------------------------

	// charge shoot --------------------
	float ammo_charge_time_max; //stab_light_time
	float ammo_charge_time_effective; //stab_distance
	float ammo_charge_time_stable; //stab_light_distance

	float ammo_spread_multiple; //stab_width
	float ammo_power_multiple; //back_factor
	float ammo_gravity_addon; //stab_hurt
	// ---------------------------------

	float ammo_blood_disk_interval;		//stab_light_hurt
	int	  ammo_blood_disk_hit_count;	//back_boost_plus


};

struct DrumInfo : public GunInfo
{
	float range;
};

struct MilkbottleInfo : public GunInfo
{
	float range;
};

struct CureGunInfo : public GunInfo
{
	float max_distance;
	int add_blood;
};

struct EquipmentInfo : public WeaponInfo
{
	
};

struct BombInfo : public WeaponInfo
{
	float range;
	float damage;
	float plant_time;
	float defuse_time;
	float defuse_with_item_time;
};

struct ZombieGunInfo : public WeaponInfo
{
	float stab_time;
	float stab_light_time;

	float stab_distance;
	float stab_light_distance;
	float stab_width;
	float back_factor;

	float stab_hurt;
	float stab_light_hurt;
	int back_boost_plus;

	float skill_cooldown;
	float skill_usetime;
};

struct ZombieChargeInfo : public WeaponInfo
{
	float skill_cooldown;
	float skill_usetime;
	float skill_hurt;
};

struct GunTowerBuilderInfo : public GunInfo
{
	float				max_distance;
	float				max_lift_time;
	float				hurt_range;
	float				show_speed;

	float				move_speed;
	float				move_keep_time;

	float				recover_range;
	float				recover_check_interval;
	float				recover_per_count_life;
	float				recover_per_percent_ammo;
	float				recover_per_minus_ammo;
};

struct GunTowerTypeInfo
{
	int DummyObjectType;
	int DummyObjectSubType;
	int SystemId;
	int MaxCount;
	float Width;
	float Height;
	char ResKey[res_key_length];
};
struct GunTowerBuilderPlusInfo : public GunInfo
{
	float				max_distance;
	float				max_lift_time;
	float				hurt_range;
	float				show_speed;

	float				move_speed;
	float				move_keep_time;

	float				recover_range;
	float				recover_check_interval;
	float				recover_per_count_life;
	float				recover_per_percent_ammo;
	float				recover_per_minus_ammo;

	int m_iTowerGunCount;
	int m_iMaxWallCount;
	int m_iMaxGuardCount;
	GunTowerTypeInfo m_aTowerTypeInfo[max_tower_gun_count];
};
union WeaponData
{
	WeaponInfo weapon;
	GunInfo	gun;
	PistolInfo pistol;
	DualPistolInfo dual_pistol;
	RifleInfo rifle;
	SniperGunInfo sniper;
	ShotGunInfo shot_gun;
	SubMachineGunInfo sub_machine_gun;
	MachineGunInfo machine_gun;
	MiniGunInfo mini_gun;
	KnifeInfo knife;
	ThrowableInfo throwable;
	GrenadeInfo grenade;
	LuncherInfo luncher;
	CureGunInfo cure_gun;
	MiniMachineGunInfo minimachine_gun;
	BowInfo bow;
	FlameGunInfo flame_gun;
	AmmoInfo ammo;

	DrumInfo drum;
	MilkbottleInfo milkbottle;

	FlashInfo flash;
	SmokeInfo smoke;

	EquipmentInfo equipment;
	BombInfo bomb;

	ZombieGunInfo zb_info;
	ZombieChargeInfo zbc_info;
	GunTowerBuilderInfo guntower_info;
	GunTowerBuilderPlusInfo guntower_plus_info;

};

struct Attribute
{
	short	type;	//��������
	short	value1;	//���Բ���1
	short	value2;	//���Բ���2
	short	time;	//���Գ���ʱ��
	
	Attribute()
		: type(0)
		, value1(0)
		, value2(0)
		, time(0)
	{
	}
	
	std::string ToString()
	{
		char buffer[512];
		
		sprintf(buffer, "type : %d", type);
		sprintf(buffer, "%s, value1 : %d", buffer, value1);
		sprintf(buffer, "%s, value2 : %d", buffer, value2);
		sprintf(buffer, "%s, time : %d", buffer, time);
		
		return std::string(buffer);
	}
};

typedef std::vector<Attribute> AttributeList;

struct BaseItemInfo
{
	uint sid;
	uint player_item_id;
	
	char display_name[128];
	char name[64];
	
	byte color;
	byte level;
	byte star;
	byte durable;
	
	std::vector<AttributeList> attrs;
	
	int part_count;
	char part_key[16][avata_part_length];
	
	BaseItemInfo()
		: sid(0)
		, player_item_id(0)
		, color(0)
		, level(0)
		, durable(0)
		, star(0)
		, part_count(0)
	{
		display_name[0] = '\0';
		name[0] = '\0';
		
		attrs.clear();
	}
};

struct Weapon
{
	BaseItemInfo base_info;
	WeaponData weapon_data;
	
	Weapon()
	{
		weapon_data.weapon.type = kWeaponTypeNone;
	}
};

struct PackInfo
{
	byte id;
	std::map<byte, Weapon> weapon_set;
};

struct CostumeData
{
	float resistance_flame;
	float resistance_explode;
	float resistance_bullet;
	float resistance_close;
	float health_infect;
	
	CostumeData()
		: resistance_flame(0)
		, resistance_explode(0)
		, resistance_bullet(0)
		, resistance_close(0)
		, health_infect(0)
	{
	}
};

struct Costume
{
	BaseItemInfo base_info;
	CostumeData costume_data;
};


const ushort ITEM_PRAM_COUNT = 6;
struct InGameItemInfo
{
	double	interval_timer;		// CD��ʱ��
	uint		sid;						// ��ƷID
	uint		player_item_id;		// ��ƷΨһID	(δʹ��)
	uint		type;						// ����			(δʹ��)		
	uint		subType;				// ������
	uint		functionID;			// ��ȷ������Ʒ������
	ushort	init_count;			// ������Ϸ�е�����
	ushort	count;					// ʣ������
	float		CDTime;				// CDʱ��(��)
	float		param[ITEM_PRAM_COUNT];				// ��Ʒ����

	char name[64];					//	��Ʒ����
	char icon[128];					//	��Ʒͼ��

	InGameItemInfo()
		: interval_timer(0)
		, sid(0)
		, player_item_id(0)
		, type(0)
		, subType(0)
		, functionID(0)
		, init_count(0)
		, count(0)
		, CDTime(0.0f)
	{
		memset(&param, 0, sizeof(param) );
		name[0]='\0';
		icon[0]='\0';
	}
};

struct SurvivalModeItemInfo
{
	uint		sid;						// ��ƷID
	uint		type;						// ����	
	float		value;

	std::string		name;				//	��Ʒ����
	std::string		icon;				//	��Ʒͼ��

	SurvivalModeItemInfo()
		: sid(0)
		, type(0)
		, value(0.f)
	{
	}
};

struct BuffItem
{
	byte id;//iid==1
	byte type;//typeid
	float value;
};

struct CharacterBaseInfo
{
	uint id;
	uint level;
	char name[character_name_length];
	char group[group_name_length];

	uint fcm_online_minutes;
	uint fcm_offline_minutes;

public:
	// save
	void Write(BinaryStream & conn);

	// read
	void Read(BinaryStream & conn);
};

struct CharacterDropItem
{
	int itemid;
	float parameter1;
	float parameter2;
	int count;
};

struct SingleCharacterInfo
{
	char careername[character_name_length];
	char career_key[career_key_length];
	char res_key[res_key_length];
	
	uint player_id;
	uint career_id;
	
	int  max_hp;
	int  ex_hp;
	int  resistance;

	float run_speed;
	float walk_speed;
	float crouch_speed;
	float acceleration;

	float jump_velocity;
	float throw_velocity;
	
	float controller_height;
	float controller_radius;
	float controller_crouch_height;
	
	byte can_select;
	byte score_scale;
	int combat_power;
	float totalBloodAdd;

	std::vector<Costume>	costumes;
	std::vector<PackInfo>	packs;
	
	// ��game_server�ã������ڴ���
	std::vector<CharacterDropItem> dropitems;
};

typedef std::map<uint, SingleCharacterInfo>		SingleCharacterInfoMap;
typedef std::pair<uint, SingleCharacterInfo>	SingleCharacterInfoPair;
typedef std::map<uint, InGameItemInfo>			ItemBag;
typedef std::list<SurvivalModeItemInfo>			SurvivalItemBagList;	//����ģʽר��

struct CharacterInfo
{
	uint character_id;
	char character_name[character_name_length];
	byte kick_count;
	int fu_huo_bi;
	int combat_power;
	//char team_name[64];
	
	byte slot_count;
	
	std::vector<BuffItem>	item_set;

	int dan_grading; // ƥ���λ
	
	int nMatchingLevel;

	int	 character_count;
	SingleCharacterInfoMap singlecharacter_set;//career_id, SingleCharacterInfo
	ItemBag	bag;
	SurvivalItemBagList	survivalbag;
};

extern int GetWeaponDamageType(int weapon_type);
extern bool Weapon_IsGun(int weapon_type);
extern bool Weapon_IsKnife(int weapon_type);

extern void WritePackInfo(BinaryStream & stream, const PackInfo & info);
extern void WriteBaseCharacterInfo(BinaryStream & stream, const CharacterInfo & info);

extern void WriteWeapon(BinaryStream & stream, const Weapon & info);
extern void ReadWeapon(BinaryStream & stream, Weapon & info);

extern void WriteCostume(BinaryStream & stream, const Costume & info);
extern void ReadCostume(BinaryStream & stream, Costume & info);

extern void WriteBuffItem(BinaryStream & stream, const BuffItem & item);
extern void ReadBuffItem(BinaryStream & stream, BuffItem & item);

extern void WriteCharacterDropItem(BinaryStream & stream, const CharacterDropItem & info);
extern void ReadCharacterDropItem(BinaryStream & stream, CharacterDropItem & info);

extern void WriteSingleCharacter(BinaryStream & stream, const SingleCharacterInfo & info);
extern void ReadSingleCharacter(BinaryStream & stream, SingleCharacterInfo & info);

extern void WriteCharacterHead(BinaryStream & stream, const CharacterInfo & info);
extern void ReadCharacterHead(BinaryStream & stream, CharacterInfo & info);

extern void WriteCharacterInfo(BinaryStream & stream, const CharacterInfo & info);
extern void ReadCharacterInfo(BinaryStream & stream, CharacterInfo & info);

extern void WriteBagInfo(BinaryStream & stream, const ItemBag & info);
extern void ReadBagInfo(BinaryStream & stream, ItemBag & info);

