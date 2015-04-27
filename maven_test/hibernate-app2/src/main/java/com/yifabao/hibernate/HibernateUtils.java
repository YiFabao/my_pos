package com.yifabao.hibernate;

import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;
import org.hibernate.Session;

public class HibernateUtils{
	
	private static SessionFactory sessionFactory;
	
	//初始休sessionFactory
	static {
		Configuration cfg = new Configuration();
		cfg.configure("hibernate.cfg.xml");
		sessionFactory = cfg.buildSessionFactory(); 
	}

	public static SessionFactory getSessionFactory(){
		return sessionFactory;
	}

	public static Session openSession(){
		return sessionFactory.openSession();	
	} 
}
