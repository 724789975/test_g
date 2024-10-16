package com.pearl.o2o.pojo;

/**
 * 联赛成员
 * @author zhaolianming
 */
public class LeagueMember {
	private int teamId;//战队id
	private int playerId;//pid
	private int gameType;//战场类型
	private int score;//积分
	private String name;//名字

	public int getTeamId() {
		return teamId;
	}

	public void setTeamId(int teamId) {
		this.teamId = teamId;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getPlayerId() {
		return playerId;
	}

	public void setPlayerId(int playerId) {
		this.playerId = playerId;
	}

	public int getScore() {
		return score;
	}

	public void setScore(int score) {
		this.score = score;
	}

	public int getGameType() {
		return gameType;
	}

	public void setGameType(int gameType) {
		this.gameType = gameType;
	}

}
