/**
 * 
 */
package com.shuaihua;

import java.util.ArrayList;
/**
 * @author shuaihua
 *
 */
public class ArryListTest1 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList arrayList = new ArrayList();
		ArrayList arrayList2 ;
		arrayList.add("hello");
		arrayList.add("world");
		arrayList.add("world");
		arrayList.add("welcome");
		arrayList2 = (ArrayList) arrayList.clone();
		System.out.println(arrayList.size());
		arrayList.clear();
		arrayList2.remove(0);
		System.out.println(arrayList2.size());
		for (Object object : arrayList2) {
			System.out.println(object);
		}
		arrayList.clear();
		System.out.println(arrayList.size());
		System.out.println(arrayList2.indexOf("world"));
	}

}
