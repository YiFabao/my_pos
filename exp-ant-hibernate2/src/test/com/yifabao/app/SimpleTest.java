package com.yifabao.app;

import junit.framework.TestCase;

public class SimpleTest extends TestCase{
    public SimpleTest(String s)
    {
        super(s); 
    }

    public void testGetMyName(){
        Events e = new Events();
        System.out.println("myname:"+e.getMyName());  
    }
}
