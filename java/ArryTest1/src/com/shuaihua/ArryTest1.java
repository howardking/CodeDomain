/**
 * 
 */
package com.shuaihua;

/**
 * @author shuaihua
 *
 */
public class ArryTest1 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] a = new int[]{1,2,3};
		int[] b = a;
		int[] c = new int[]{1,2,3};
		
		System.out.println(a.equals(b));
		System.out.println(a.equals(c));
	}

}
