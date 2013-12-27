package com.shuaihua;

public class string {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str1 = "aaa";
		String str2 = new String("aaa");
		String str3 = new String("aaa");
		str1 = str1+"ccc";
		System.out.println(str1.equals(str2));
		System.out.println(str2.equals(str3));
		System.out.println(str1);
		System.out.println(str2);
		System.out.println(str1.toString());
		System.out.println(str2.toString());
	}

}
