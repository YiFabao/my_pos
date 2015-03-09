package com.yifabao.hibernate;

import org.hibernate.cfg.Configuration;
import org.hibernate.SessionFactory;
import org.hibernate.Session;
import org.hibernate.Transaction;
import org.junit.Test;



public class UserTest{
	
	private static SessionFactory sessionFactory;

	static {
		Configuration cfg = new Configuration();
		cfg.configure("hibernate.cfg.xml");
		sessionFactory = cfg.buildSessionFactory();
	}

	@Test
	public void testSave() throws Exception{
		User user = new User();	
		user.setName("yifabao");
		
		//保存
		Session session = sessionFactory.openSession();
		Transaction tx = session.beginTransaction();

		session.save(user);
		System.out.println("保存成功");

		tx.commit();
		session.close();
	}

	@Test
	public void testGet() throws Exception {
		Session session = sessionFactory.openSession();
		Transaction tx = session.beginTransaction();//开启事务

		User user = (User)session.get(User.class,3);
		System.out.println(user);

		tx.commit();
		session.close();
			
	}

}  

