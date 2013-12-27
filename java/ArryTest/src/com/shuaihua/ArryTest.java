package com.shuaihua;

public class ArryTest {
	
	public static void main(String[] args){
		
		int[] a = new int[4];
		int[] b = new int[5];
		int c[] = new int[6];
		int[] d = new int[]{1,2,3};
		
		for (int i = 0; i < a.length; i++) {
			a[i] = i;
		}
		for (int i = 0; i < b.length; i++) {
			b[i] = i;
		}
		for (int i = 0; i < c.length; i++) {
			c[i] = i;
		}
		for (int i : a) {
			System.out.println(a[i]);
		}
		for (int i : b) {
			System.out.println(b[i]);
		}
		for (int i : c) {
			System.out.println(c[i]);
		}
		System.out.println(d[2]);
		int i = 0;
		System.out.println(i);
	}
	
}
