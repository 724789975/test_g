select
			p.ID,
			CONCAT("\\\"",p.NAME,"\\\""),
			p.GENERAL_ASSIST,
			p.IS_VIP,
			p.RANK,
			p.EXP,p.ID,
CONCAT("\\\"",p.ICON,"\\\"")
		from PLAYER p
		where p.IS_DELETED='N'  order by p.GENERAL_ASSIST desc,p.NAME desc limit 0,10000