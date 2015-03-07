package com.yifabao.im;

import org.junit.Test;
import static junit.framework.Assert.assertEquals;

import com.yifabao.im.Hello;

public class HelloFriendTest{
	
	@Test
	public void testHelloFriend(){
		HelloFriend helloFriend = new HelloFriend();	
		String results = helloFriend.sayHelloToFriend("yifabao");
		assertEquals("Hello yifabao I am John",results);
	}
}
