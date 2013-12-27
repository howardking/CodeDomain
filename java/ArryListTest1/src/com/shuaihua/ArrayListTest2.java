/**
 * 
 */
package com.shuaihua;

import java.util.ArrayList;
/**
 * @author shuaihua
 *
 */
public class ArrayListTest2 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
        //TODO Auto-generated method stub
		ArrayList list = new ArrayList<>();
		list.add("hello");
		list.add(new Integer(2));
		String str = (String)list.get(0);
		Integer in = (Integer)list.get(1);
		System.out.println(str);
		System.out.println(in.intValue());
	}

}

