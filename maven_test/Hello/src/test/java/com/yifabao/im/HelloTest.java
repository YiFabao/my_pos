package com.yifabao.im;

import org.junit.Test;
import static junit.framework.Assert.*;

public class HelloTest{
	@Test
	public void testHello(){
		Hello hello = new Hello();
		String results = hello.sayHello("yifabao");
		assertEquals("Hello yifabao",results);
	}

}
