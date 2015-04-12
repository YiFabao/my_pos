package com.yifabao.app;

import org.hibernate.Session;
import org.hibernate.cfg.Configuration;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;

public class HibernateTest{
    public static void main(String args[]) throws Exception
    {
        Configuration cfg = new Configuration().configure("hibernate.cfg.xml"); 
        SessionFactory sessionFactory = cfg.buildSessionFactory();
        Session session = sessionFactory.openSession();
        
        Transaction tx = session.beginTransaction();
        User user = new User();
        user.setUsername("易发宝");
        user.setPassword("962297");
        session.save(user);
        tx.commit();
        session.close();
    }
}
