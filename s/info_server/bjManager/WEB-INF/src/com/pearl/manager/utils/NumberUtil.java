package com.pearl.manager.utils;

import java.text.DecimalFormat;
import java.util.Calendar;
import java.util.Date;

public class NumberUtil {
	public static float numberFormat(float num){
		DecimalFormat df = new DecimalFormat("####.###");
		return Float.parseFloat(df.format(num));
	}

	public static DecimalFormat df = new DecimalFormat("0.000"); 
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		double cost=Math.sqrt(9000)*0.1*(1.0/4);
		System.out.println((int)cost);
		System.out.println(Math.sqrt(9000)*0.1*0.25);
	}

}
