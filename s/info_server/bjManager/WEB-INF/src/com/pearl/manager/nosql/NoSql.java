package com.pearl.manager.nosql;

import java.util.Collection;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.TimeoutException;

import redis.clients.jedis.Tuple;
import redis.clients.jedis.ZParams;

public interface NoSql {
	public List<String> getQueue(String key) throws TimeoutException, Exception;
	public List<String> getQueue(String key, int length) throws TimeoutException, Exception;
	public Set<String> getKeysByPattern(String pattern)throws Exception;
	
	
	public void rpush(String key, String value ) throws Exception;
	
	public void batchIncr(List<String> keys)throws Exception;
	public void batchIncrBy(Map<String,Integer> map)throws Exception;
	
	public void addToQueue(String listKey, String value, int maxLength) throws TimeoutException, Exception;
	public void set(String key, String value) throws Exception;
	public void set(String key, List<String> list) throws Exception;
	
	public String get(String key) throws Exception;
	public List<String> mGet(List<String> keys) throws Exception;
	
	//end should greater than start
	public List<String> lrange(String key, int start, int end) throws Exception;
	public long llen(String key) throws Exception;
	
	
	public void incr(String key) throws Exception;
	public void decr(String key,int decr) throws Exception;
	
	//sorted set
	
	public void zAdd(String key, double score, String member) throws Exception;
	
	public long zRank(String key,  String member) throws Exception;
	public Set<String> zRange(String key, int start ,int end) throws Exception;
	public void zRem(String key, String member) throws Exception;
	public void zRemRangeByRank(String key, int start ,int end) throws Exception;
	public void zRemRangeByScore(String key, double min ,double max) throws Exception;
	public long zCard(String key) throws Exception;
	public double zScore(String key,String member) throws Exception;
	public Set<Tuple> zrangeWithScores(final String key, final int start,final int end) throws Exception;
	public void zunionstore(final String dstkey, final ZParams params,final String... sets) throws Exception;
	
	
	//life cycle
	public void start();
	public void shutdown();
	
	public boolean ping() throws Exception;
	
	public void delete(String key)throws Exception;
	public void delete(Collection<String> keys) throws Exception;
	public void deleteAll(String pattern) throws Exception;
	
	public void setHost(String host);

	public void setPort(int port);
	String rename(String oldkey, String newkey) throws Exception;
	Set<String> sMembers(String key) throws Exception;
	Long sAdd(String key, String member) throws Exception;
	boolean exists(String key) throws Exception;
	Set<String> keys(String pattern) throws Exception;
	Map<String, String> hgetAll(String key) throws Exception;
	
}
