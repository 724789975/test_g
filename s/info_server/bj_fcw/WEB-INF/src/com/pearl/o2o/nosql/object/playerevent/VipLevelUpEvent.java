package com.pearl.o2o.nosql.object.playerevent;

import com.pearl.o2o.utils.CommonUtil;

public class VipLevelUpEvent extends BasePlayerEvent {
	private int level;
	
	public VipLevelUpEvent(String time, int vipRank, int playerId, String playerName) {
//		super("VIP等级晋升为" + vipRank+"级!",time, playerId, playerName);
		super(CommonUtil.messageFormatI18N(EventConstants.I18NEventConstantsCode.VIP_RANK_ADD_MSG.getCode(),vipRank),time, playerId, playerName);
		this.level = vipRank;
	}
	
	public VipLevelUpEvent(String time, String content, int playerId, String playerName, int level) {
		super( playerId, playerName,time, content);
		this.level = level;
	}
	
	
/*	//content|time|level
	@Override
	public String generateNosqlPlainStr() {
		StringBuilder sb = new StringBuilder();
		sb.append(content).append(delemeter).append(time).append(delemeter).append(level);
		return sb.toString();
	}
	//see generateNosqlPlainStr
	public static LevelUpEvent getFromNosqlPlainStr(String str, int playerId, String playerName) {
		String[] fields = str.split("\\" + delemeter);
		return new LevelUpEvent(Long.valueOf(fields[1]),fields[0], playerId, playerName,Integer.valueOf(fields[2]));
	}*/

	public int getLevel(){
		return level;
	}
	
	@Override
	public int getType() {
		return BasePlayerEvent.EventType.VIPLEVELUP.ordinal();
	}
	
}	
