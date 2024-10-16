package com.pearl.o2o.servlet.client;

import org.slf4j.Logger;import org.slf4j.LoggerFactory;

import com.pearl.o2o.exception.BaseException;
import com.pearl.o2o.pojo.PlayerItem;
import com.pearl.o2o.utils.CommonUtil;
import com.pearl.o2o.utils.Converter;
import com.pearl.o2o.utils.ExceptionMessage;
import com.pearl.o2o.utils.StringUtil;

public class RenewPlayerItem extends BaseClientServlet {
	
	private static final long serialVersionUID = -7958477105017482799L;
	static Logger log = LoggerFactory.getLogger(RenewPlayerItem.class.getName());
	private String[] paramNames={"uid","pid","piid","t","costid"};
	@Override
	protected String innerService(String... args) {
		try {
			int userId = StringUtil.toInt(args[0]);
			int playerId=StringUtil.toInt(args[1]);
			int playerItemId=StringUtil.toInt(args[2]);
			int type=StringUtil.toInt(args[3]);
			int costId=StringUtil.toInt(args[4]);
			updateService.renewPlayerItem(playerId, playerItemId, type, costId);
			return Converter.error(null);
		}
		catch (BaseException e) {
			log.debug("Exception in RenewPlayerItem:"+e.getMessage());
			return Converter.error(e.getMessage());	
		}
		catch (Exception e) {
			log.warn("Exception in RenewPlayerItem",e);
			return Converter.error(ExceptionMessage.ERROR_MESSAGE_ALL);	
		}
	}
	@Override
	protected String[] paramNames() {
		return paramNames;
	}
	@Override
	protected String getLockKey(String[] paramNames) {
		return CommonUtil.getLockKey(StringUtil.toInt(paramNames[1]));
	}
}
