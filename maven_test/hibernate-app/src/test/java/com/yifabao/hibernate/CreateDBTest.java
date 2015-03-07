package com.yifabao.hibernate;
import junit.framework.Test;
import junit.framework.TestCase;

public class CreateDBTest extends TestCase{
	public void testCreateDb(){
		CreateDB cdb=new CreateDB();
		cdb.createDb();
		System.out.println("成功");
	}
}
