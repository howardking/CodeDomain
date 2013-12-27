package com.shuaihua.test;

import static org.junit.Assert.*;
import static org.hamcrest.Matcher.*; 
//import static org.hamcrest.core.*;

import org.junit.Test;

import com.shuaihua.T;

public class TTest {

	@Test
	public void testAdd() {
		//fail("Not yet implemented");
		int z = new T().add(5, 3);
		assertEquals(8, z);
		assertTrue(z>3);
		//assertThat("Zero is z", 0,is(1));
	}

}
