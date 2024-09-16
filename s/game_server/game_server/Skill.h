#pragma once

class Client;

static const float DURATION_INFINITY = 3600 * 24 * 30;
static const int		SKILL_PARAM_NUM		= 6;
static const int		SKILL_DATA_NUM		= 2;

enum EEffect
{
	kEffect_None = 0,
	
	// ʱ��+��� Start
	kEffect_IntervalBase_Start = 10,		//ʱ��+������Ϳ�ʼ��־����ʵ����;��
	
	kEffect_Sustain_HurtBurn_Replace,		//�滻�ͳ���ȼ���˺���value=�˺�ֵ
	kEffect_Sustain_HurtBloodshed_Replace,	//�滻�ͳ�����Ѫ�˺���value=�˺�ֵ
	kEffect_Sustain_HurtPoison_Replace,		//�滻�ͳ������˺���value=�˺�ֵ
	kEffect_Sustain_HurtBurn,				//����ȼ���˺���value=�˺�ֵ
	kEffect_Sustain_HurtBloodshed,			//������Ѫ�˺���value=�˺�ֵ
	kEffect_Sustain_HurtPoison,				//�������˺���value=�˺�ֵ
	kEffect_Sustain_HpRecover,				//�����ظ�Hp���ܹ�����ʱֹͣ����value=�ظ�ֵ
	kEffect_Sustain_HpRecover2,				//�����ظ�Hp���ܹ������ƶ���ʱֹͣ����value=�ظ�ֵ
	kEffect_Sustain_AmmoRecover,			//�����ظ�Ammo���ܹ�����ʱֹͣ����value=�ظ�ֵ
	kEffect_Sustain_AmmoRecover2,			//�����ظ�Ammo���ܹ������ƶ���ʱֹͣ����value=�ظ�ֵ
	kEffect_Sustain_ArmorRecover,			//�����ظ�Armor���ܹ�����ʱֹͣ����value=�ظ�ֵ
	kEffect_Sustain_ArmorRecover2,			//�����ظ�Armor���ܹ������ƶ���ʱֹͣ����value=�ظ�ֵ
	kEffect_Sustain_Survival_Mode,			//�����˺���Ӧ����ģʽ�� value=�۳���ǰ�������ֵ�ٷֱ�
	
	kEffect_IntervalBase_End,				//ʱ��+������ͽ�����־����ʵ����;��
	// ʱ��+��� End
	
	// ʱ�� Start
	kEffect_TimeBase_Start = 500,			//ʱ�����Ϳ�ʼ��־����ʵ����;��
	
	kEffect_Invincible,						//�޵У�value=δʹ��
	kEffect_Infect_Score,					//����+��value=�����䶯�ٷֱ�
	kEffect_Infect_Damage,					//����+��value=�����䶯�ٷֱ�
	kEffect_Infect_CareerDamage_Id1,		//�Ի��������+��value=�����䶯�ٷֱ�
	kEffect_Infect_CareerDamage_Id2,		//���ػ�ǹ������+��value=�����䶯�ٷֱ�
	kEffect_Infect_CareerDamage_Id3,		//�Ծѻ�������+��value=�����䶯�ٷֱ�
	kEffect_Infect_CareerDamage_Id4,		//��ͻ��������+��value=�����䶯�ٷֱ�
	kEffect_Infect_CareerDamage_Id5,		//�Ի��������+��value=�����䶯�ٷֱ�
	kEffect_Infect_CareerDamage_Id6,		//��ҽ�Ʊ�����+��value=�����䶯�ٷֱ�
	kEffect_Infect_CareerDamage_Id7,		//�Թ��̱�����+��value=�����䶯�ٷֱ�
	kEffect_Infect_HpInfectDamage,			//Ѫ��Ӱ������+��value=�����䶯�ٷֱ�
	kEffect_Infect_ResistanceAll,			//����All+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_ResistanceBullet,		//����Bullet+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_ResistanceExplode,		//����Explode+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_ResistanceClose,			//����Close+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_ResistanceFlame,			//����Flame+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_SelfResistanceAll,		//���ҿ���All+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_SelfResistanceBullet,	//���ҿ���Bullet+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_SelfResistanceExplode,	//���ҿ���Explode+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_SelfResistanceClose,		//���ҿ���Close+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_SelfResistanceFlame,		//���ҿ���Flame+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_CareerResistance_Id1,	//�Ի��������All+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_CareerResistance_Id2,	//���ػ�ǹ�ֿ���All+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_CareerResistance_Id3,	//�Ծѻ��ֿ���All+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_CareerResistance_Id4,	//��ͻ���ֿ���All+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_CareerResistance_Id5,	//�Ի��������All+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_CareerResistance_Id6,	//��ҽ�Ʊ�����All+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_CareerResistance_Id7,	//�Թ��̱�����All+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_HpInfectResistance,		//Ѫ��Ӱ�쿹��All+��value=���Ա䶯�ٷֱ�
	kEffect_Infect_Rebirth,					//�����ٶ�+��value=�����ٶȱ䶯ֵ
	kEffect_Infect_SupplyAmmo,				//��ҩ������ҩ��+��value=����ҩ���䶯�ٷֱ�
	kEffect_Infect_SupplyHpRecover,			//ҽ�ư���Ѫ��+��value=��Ѫ���䶯�ٷֱ�
	kEffect_Infect_CureHpRecover,			//���Ʋ�Ѫ��+��value=��Ѫ���䶯�ٷֱ�
	kEffect_Infect_SelfHpRecover,			//����ظ���Ѫ��+��value=��Ѫ���䶯�ٷֱ�
	kEffect_Infect_Cure,					//������������+��value=�������䶯�ٷֱ�
	kEffect_Infect_CureEnergy,				//���Ƴ����ٶ�+��value=���Ƴ����ٶȱ䶯�ٷֱ�
	kEffect_Infect_GunEnergy,				//ǹ�����ٶ�+��value=ǹ�����ٶȱ䶯�ٷֱ�
	kEffect_Infect_JumpHeight,				//��Ծ�߶�+��value=��Ծ�߶ȱ䶯�ٷֱ�
	kEffect_Infect_MoveSpeed,				//�ƶ��ٶ�+��value=�ƶ��ٶȱ䶯�ٷֱ�
	kEffect_Infect_HpInfectMoveSpeed,		//Ѫ��Ӱ���ƶ��ٶ�+��value=�ƶ��ٶȱ䶯�ٷֱ�
	kEffect_Infect_MaxHp,					//Ѫ������+��value=Ѫ�����ޱ䶯�ٷֱ�
	kEffect_Infect_AmmoOneClip,				//������+��value=�������䶯�ٷֱ�
	kEffect_Infect_AmmoCount,				//�ص���+��value=�ص����䶯�ٷֱ�
	kEffect_Infect_FireTime,				//�����ٶ�+��value=�����ٶȱ䶯�ٷֱ�(��ֵΪ�ӿ�)
	kEffect_Infect_ReloadTime,				//�����ٶ�+��value=�����ٶȱ䶯�ٷֱ�(��ֵΪ�ӿ�)
	kEffect_Infect_ChangeInTime,			//�л������ٶ�+��value=�л������ٶȱ䶯�ٷֱ�(��ֵΪ�ӿ�)
	kEffect_Infect_AmmoFlySpeed,			//�ڵ������ٶ�+��value=�ڵ������ٶȱ䶯�ٷֱ�
	kEffect_Infect_AmmoExplodeRange,		//�ڵ���ը��Χ+��value=�ڵ���ը��Χ�䶯�ٷֱ�
	kEffect_Infect_FOV,						//FOV+��value=FOV�䶯ֵ
	kEffect_Infect_HitBack,					//������+��value=�����˱䶯ֵ
	kEffect_Infect_HurtAbsorb,			//�˺����գ�value=�˺����հٷֱ�(��ֵ)
	
	kEffect_Invalid_MoveSpeed = 1000,		//�����ƶ��ٶ�+Ӱ�죬value=δʹ��
	kEffect_Invalid_Sustain_HurtBurn,		//���ܳ���ȼ���˺�Ӱ�죬value=δʹ��
	kEffect_Invalid_Sustain_HurtBloodshed,	//���ܳ�����Ѫ�˺�Ӱ�죬value=δʹ��
	kEffect_Invalid_Sustain_HurtPoison,		//���ܳ������˺�Ӱ�죬value=δʹ��
	
	kEffect_Special_CannotOutFlame = 1500,	//����ʹ������ܣ�value=δʹ��
	kEffect_Special_CannotHide,				//�޷����Σ�value=δʹ��
	kEffect_Special_CannotFire,				//�޷�����value=δʹ��
	kEffect_Special_ReversalMouse,			//��귴ת��value=δʹ��
	kEffect_Special_ReversalMouse2,			//��귴ת��value=δʹ��
	kEffect_Special_ReversalKeyBoard,		//���̷�ת��value=δʹ��
	kEffect_Special_ViewLost,				//��Ұģ����value=δʹ��
	kEffect_Special_ViewLost2,				//��Ұģ����value=δʹ��
	kEffect_Special_HitTargetJump,			//�����е��������value=��Ծ����
	kEffect_Special_HittedSelfJump,			//�������к�����value=��Ծ����
	kEffect_Special_HitAddScore,			//���жԷ���ӷ֣�value=�ӷ�
	kEffect_Special_UsingSkill,				//����ʹ�ü��ܣ�value=δʹ��
	kEffect_Special_Invisible,				//����value=δʹ��
	kEffect_Special_Smog,					//������value=δʹ��
	kEffect_Survival_Expose,				//��¶Ŀ�꣬ value=δʹ��
	kEffect_Survival_Debuff,				//����ģʽ��Ѫ�ӱ��� value=δʹ��
	kEffect_Survival_Ghost,					//����ģʽ����״̬�� value=δʹ��
	
	kEffect_TimeBase_End,					//ʱ�����ͽ�����־����ʵ����;��
	// ʱ�� End
};

struct EffectData
{
	typedef void (*EffectDataCallBack)(EffectData &effectdata, Client &client);
	
	double				duration_timer;		//����ʱ���ʱ����s��
	double				interval;			//���ʱ�䣨s��
	double				interval_timer;		//���ʱ���ʱ����s��
	uint				player_id;			//Effectʩչ�ߣ�0����ʩչ��Ϊϵͳ*
	uint				player_item_id;		//Effectʩչ������item��0���������**
	byte				attr_slotid;		//ԭʼ��������λid�������ڱȽϣ���ʵ����;(ϵͳʩչʱΪ-1)
	byte				attr_sub_slotid;	//ԭʼ���Ը���λ�������ڱȽϣ���ʵ����;(ϵͳʩչʱΪ-1)
	Attribute			attr_raw;			//ԭʼ�������ݣ���ʵ����;
	EEffect				type;				//Effect����(����EEffect)
	float				value;				//Effect����
	bool				enable;				//Effect�Ƿ񼤻δ����ʱ����ʱ����������ʵ��Ч��
	bool				dead_disable;	// ������ʧЧ
	
	EffectDataCallBack	iterval_callback;	//���CallBack
	
	EffectData()
		: duration_timer(0)
		, interval(0)
		, interval_timer(0)
		, player_id(0)
		, player_item_id(0)
		, attr_slotid(-1)
		, attr_sub_slotid(-1)
		, type(kEffect_None)
		, value(0)
		, enable(false)
		, dead_disable(false)
		
		, iterval_callback(NULL)
	{
	}
	
	std::string ToString()
	{
		char buffer[512];
		
		sprintf(buffer, "duration_timer : %f", duration_timer);
		sprintf(buffer, "%s, interval : %f", buffer, interval);
		sprintf(buffer, "%s, interval_timer : %f", buffer, interval_timer);
		sprintf(buffer, "%s, player_id : %d", buffer, player_id);
		sprintf(buffer, "%s, player_item_id : %d", buffer, player_item_id);
		sprintf(buffer, "%s, attr_slotid : %d", buffer, attr_slotid);
		sprintf(buffer, "%s, attr_sub_slotid : %d", buffer, attr_sub_slotid);
		sprintf(buffer, "%s, attr_raw.type : %d", buffer, attr_raw.type);
		sprintf(buffer, "%s, attr_raw.value1 : %d", buffer, attr_raw.value1);
		sprintf(buffer, "%s, attr_raw.value2 : %d", buffer, attr_raw.value2);
		sprintf(buffer, "%s, attr_raw.time : %d", buffer, attr_raw.time);
		sprintf(buffer, "%s, type : %d", buffer, type);
		sprintf(buffer, "%s, value : %f", buffer, value);
		sprintf(buffer, "%s, enable : %d", buffer, enable);
		
		return std::string(buffer);
	}
};
// *�����ϵͳ��ָ�����ڵ��ߵ�
// **������ָ���������μ���Ʒ

typedef std::list<EffectData> EffectDataList;
typedef std::list<EffectData*> EffectDataPtrList;

enum ESkill
{
	kSkill_None = 0,
	
	kSkill_Self,						//���Լ�ʹ��SkillData�е�effect��value=δʹ��
	kSkill_Target,						//��Ŀ��ʹ��SkillData�е�effect��value=δʹ��
	kSkill_SelfTeam,					//��ͬ��ʹ��SkillData�е�effect��value=��Ч�뾶���ף�
	kSkill_EnemyTeam,					//�Եз���ʹ��SkillData�е�effect��value=��Ч�뾶���ף�
	kSkill_SuckBlood,					//��Ѫ��value=��Ѫֵ
	kSkill_CureEnergy,					//����������value=����
};

enum ESkillSlot
{
	kSkillSlot_LeftButton,				//�Ҽ�����
	kSkillSlot_Slot1,					//��ʹ�ü��ܲ�1����
	kSkillSlot_KC_6,						// ʹ������6����
};

struct SkillData
{
	typedef void (*SkillDataCallBack1)(SkillData &skilldata, Client &self);
	typedef void (*SkillDataCallBack2)(SkillData &skilldata, Client &self, Client &target);
	
	
	EffectData		effect;				//���ܱ�Ӧ��ʱ��ɵ�Effect
	ESkill					type;					//Skill����(����ESkill)
	ESkillSlot			slot;					//���ܴ�����(����ESkillSlot)
	double				duration_timer;		//����ʱ���ʱ����s��
	float					value;				//Skill����
	bool					enable;				//Skill�Ƿ񼤻δ����ʱ����ʱ�������޷�ʹ�ã������Թ����ͻ�ɱ

	// ���ڽ�ɫ�Դ������⼼�� [11/29/2013 aijiwei]
	uint					skill_id;				// ����ID WeaponAttributeType
	uint					carrer_id;			// ���ܶ�Ӧ��ְҵ��0Ϊ����ҽ�ɫ��Ϣ�ж�ȡ�ļ���
	float					param[SKILL_PARAM_NUM];		// ���ܲ���
	float					data[SKILL_DATA_NUM];				// ���ܸ�������
	float					cd_time;			// ������ȴʱ�䡣����ȴʱ�����0ʱ����ʹ�ã������Թ����ͻ�ɱ
	bool					loop;					// �Ƿ��ѭ��ʹ�á�ѭ��ʱ�����ڼ���״̬�Żᵹ��ʱ������ʱ�������ܲ���ɾ�������һ�����Ϊδ����״̬
	//  [11/29/2013 aijiwei] end
	
	SkillDataCallBack1	use_callback;		//ʹ��ʱ
	SkillDataCallBack2	hit_callback;		//����ʱ
	SkillDataCallBack2	kill_callback;		//��ɱʱ
	
	SkillData()
		: duration_timer(0)
		, type(kSkill_None)
		, slot(kSkillSlot_LeftButton)
		, value(0)
		, enable(false)

		, carrer_id(0)
		, skill_id(0)
		, cd_time(0)
		, loop(false)
		
		, use_callback(NULL)
		, hit_callback(NULL)
		, kill_callback(NULL)
	{
		memset(param, 0, sizeof(param) );
		memset(data, 0, sizeof(data) );
	}
	
	std::string ToString()
	{
		char buffer[512];
	
		sprintf(buffer, "duration_timer : %f", duration_timer);
		sprintf(buffer, "%s, effect[%s]", buffer, effect.ToString().c_str());
		sprintf(buffer, "%s, type : %d", buffer, type);
		sprintf(buffer, "%s, slot : %d", buffer, slot);
		sprintf(buffer, "%s, value : %f", buffer, value);
		sprintf(buffer, "%s, enable : %d", buffer, enable);
		
		return std::string(buffer);
	}
};

typedef std::list<SkillData> SkillDataList;
typedef std::list<SkillData*> SkillDataPtrList;

class SkillEffect
{
public:
	SkillEffect(Client *pClient);
	
	~SkillEffect();
	
public:
	void Initialize();
	
	void Update(float delta);
	
	void SetEnable(const BaseItemInfo &info, bool is_enable);
	
	void ChangeBaseItemInfo(const BaseItemInfo &info, bool add, bool is_enable);
	
	bool HasEffect(EEffect type);
	
	bool SumEffect(EEffect type, float& value);
	
	void ApplyEffect(const EffectData &effectdata);
	
	void ApplySystemEffect(EffectData effectdata);
	
	void ApplySystemItemEffect(EffectData effectdata, uint item_id);//item_id��ӦΪ0
	
	void ClearAcquiredEffect(EEffect type);
	
	void CancelSustainHurt();

	void CancelInvisible();

	void OnPlayDead();
	
	const SkillDataList& GetSkill();

	SkillData* GetSkillData(uint skill_id);

	SkillData* GetSkillData(uint slot, uint career_id);
	
	const EffectDataList& GetNaturalEffect();
	
	const EffectDataList& GetAcquiredEffect();
	
public:
	// ��ɱ
	void OnClientKill(Client &client, const BaseItemInfo &info);
	
	// ����
	void OnClientHit(Client &client, const BaseItemInfo &info);
	
	// ������
	void OnTakeDamage(Client &client);
	
	// ����
	void OnAction();
	
	// �ü���
	void OnClientUseSkill(ESkillSlot slot);
	
public:
	// ǿ�Ʒ���SkillEffect������CM_ReadyForGameʱ
	void ForceSendToClient(Client &client);
	
private:
	void OnSkillEffectChanged();
	
	void ChangeBaseItemInfo_Inside(const BaseItemInfo &info, bool add, bool is_enable);

	void AddSkillFromCharacter(std::string skill_str);
	
	void ClearUp();

	void OnSkillEffectEnd(SkillData& skillData);
	
	// SM_SyncSkillEffect
	static void Send_SyncSkillEffect(Client &client, const void *userdata);

private:
	SkillDataList m_Skill;
	EffectDataList m_NaturalEffect;
	EffectDataList m_AcquiredEffect;
	
	bool m_DirtFlgSkill;
	bool m_DirtFlgNatural;
	bool m_DirtFlgAcquired;
	
	//hack
	bool m_ApplyEffectLock;
	
	Client *m_pClient;
};
